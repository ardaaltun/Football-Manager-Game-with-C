#ifndef TEAM_H
#define TEAM_H
#include "player.h"

void SignPlayer(struct Team* team, struct Player* p);

void ListPlayers(struct Team* team);


typedef struct Team
{
	char name[30];
	int playerCount;
	struct Player squad[3];
} ;


#endif