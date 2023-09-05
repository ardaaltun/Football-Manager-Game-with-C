#ifndef PLAYER_H
#define PLAYER_H
#include <string.h>

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

struct Player* CreatePlayerDefault();
struct Player* CreatePlayer(char name[], char surname[], enum favoriteleg favleg, int age, int height, int weight, enum ContractInfo contractinfo, struct Team* team);


void EditPlayer(struct Player* p,char name[], char surname[], enum favoriteleg favleg, int age, int height, int weight, enum ContractInfo contractinfo, struct Team* team);

char prefleg(enum favoriteleg leg);

void ShowStats(struct Player* player);

#endif