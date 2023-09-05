#include "player.h"


char prefleg(enum favoriteleg leg)
{
	return leg == right ? 'R' : 'L';
}

void ShowStats(struct Player* player)
{
	printf("Name: %s %s\n", player->fname, player->lname);
	printf("Age: %d\n", player->age);
	printf("Weight: %d cm - Height: %d kg\n", player->weight, player->height);
	printf("Preffered Leg: %c\n", prefleg(left));
	printf("Team: %p\n", &(player->team));
}

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
	p->team = 0;
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

void EditPlayer(struct Player* p,char name[], char surname[], enum favoriteleg favleg, int age, int height, int weight, enum ContractInfo contractinfo, struct Team* team)
{
	strcpy(p->fname, name);
	strcpy(p->lname, surname);
	p->leg = favleg;
	p->age = age;
	p->height = height;
	p->weight = weight;
	p->contractInfo = contractinfo;
	p->team = team;
}