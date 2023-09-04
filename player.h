#ifndef PLAYER_H
#define PLAYER_H


typedef enum favoriteleg
{
	right,
	left
};

typedef enum ContractInfo
{
	FREE,
	RENTED,
	SIGNED
};

typedef struct Player
{
	char fname[20];
	char lname[20];
	enum favoriteleg leg;
	int age;
	int height;
	int weight;
	enum ContractInfo contractInfo;
	struct Team* team;
};//Player_Default = {"xxx", "yyy", right, 18, 170,70, FREE, NULL};


char prefleg(enum favoriteleg leg);

void ShowStats(struct Player* player);

#endif