#include "team.h"

void SignPlayer(struct Team* team, struct Player* p)
{
	team->squad[team->playerCount] = *p;
	printf("cccccccc\n");
	team->playerCount++;
	p->team = &team;
}

void ListPlayers(struct Team* team)
{
	for(int i = 0; i<team->playerCount; i++)
	{
		printf("%d. %s %s\n", i+1, team->squad[i].fname, team->squad[i].lname);
	}
}