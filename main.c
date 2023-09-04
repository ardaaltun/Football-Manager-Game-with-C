#include <stdio.h>
#include <string.h>
#include "team.h"
#include "player.h"


#define SIZE(array) (sizeof(array)) / (sizeof(array[0]]))


struct Player* CreatePlayerDefault()
{
	struct Player* p = malloc(sizeof(struct Player));//{"xxx", "yyy", right, 18, 170,70, FREE, NULL};
	strcpy(p->fname, "Name");
	strcpy(p->lname, "Surname");
	p->leg = right;
	p->age = 18;
	p->height = 170;
	p->weight = 70;
	p->contractInfo = FREE;
	p->team = NULL;
	return p;
}
struct Player* CreatePlayer(char name[], char surname[], enum favoriteleg favleg, int age, int height, int weight, enum ContractInfo contractinfo, struct Team* team)
{
	struct Player* p = malloc(sizeof(struct Player));//{"xxx", "yyy", right, 18, 170,70, FREE, NULL};
	strcpy(p->fname, name);
	strcpy(p->lname, surname);
	p->leg = favleg;
	p->age = age;
	p->height = height;
	p->weight = weight;
	p->contractInfo = contractinfo;
	p->team = team;
	return p;
}






int main()
{
	///struct Player arda = {"Arda", "Altun", left, 24,78,180};
	struct Player* arda = CreatePlayerDefault();
	struct Player* bunyamin = CreatePlayer("Bunyamin", "Cakmak", right, 23, 70, 175, FREE, NULL);
	struct Team gs = {"Galatasaray", 0};
	SignPlayer(&gs,arda);
	ListPlayers(&gs);
	ShowStats(arda);
	ShowStats(bunyamin);
	printf("--%p--", &gs);
	getchar();


	free(arda);
	return 0;
}



