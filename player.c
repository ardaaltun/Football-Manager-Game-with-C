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