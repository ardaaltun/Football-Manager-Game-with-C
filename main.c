#include <stdio.h>
#define SIZE(array) (sizeof(array)) / (sizeof(array[0]]))

typedef enum favoriteleg
{
	right,
	left
};

char prefleg(enum favoriteleg leg)
{
	return leg == right ? 'R' : 'L';
}


typedef struct Player
{
	char fname[20];
	char lname[20];
	enum favoriteleg leg;
	int age;
	int height;
	int weight;
	
};

void ShowStats(struct Player player)
{
	printf("Name: %s %s\n", player.fname, player.lname);
	printf("Age: %d\n", player.age);
	printf("Weight: %d cm - Height: %d kg\n", player.weight, player.height);
	printf("Preffered Leg: %c\n", prefleg(left));
}

typedef struct Team
{
	char name[30];
	int playerCount;
	struct Player squad[3];
};

typedef struct League
{
	char name[20];
	int teamCount;
};





int main()
{
	struct Player arda = {"Arda", "Altun", left, 24,78,180};
	struct Player buny = {"Bunyamin", "Cakmak", right, 23, 70, 175};
	struct Team gs = {"Galatasaray", 0};
	SignPlayer(gs,arda);
	ListPlayers();
	//ShowStats(arda);
	getchar();
	return 0;
}

void SignPlayer(struct Team team, struct Player p)
{
	team.squad[team.playerCount] = p;
	team.playerCount++;
}

void ListPlayers(struct Team team)
{
	for(int i = 0; i<team.playerCount; i++)
	{
		printf("%d. %s %s\n", i+1, team.squad[i].fname, team.squad[i].lname);
	}
}