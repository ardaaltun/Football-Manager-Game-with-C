#include "team.h"
#include "player.h"
#include "misc.h"

#define SIZE(array) (sizeof(array)) / (sizeof(array[0]]))


int main()
{
	//First created the player with default values, and then assigned the values via a function	
	struct Player* arda = CreatePlayerDefault();
	EditPlayer(arda, "Arda", "Altun", left, 25, 180, 78, FREE, NULL);

	//Created a player directly with the real values.
	struct Player* bunyamin = CreatePlayer("Bunyamin", "Cakmak", right, 23, 70, 175, FREE, NULL);
	struct Team gs = {"Galatasaray", 0};
	SignPlayer(&gs,arda);
	ListPlayers(&gs);
	ShowStats(arda);
	ShowStats(bunyamin);
	printf("--%p--", &gs);
	getchar();


	//free(arda);
	// arda = NULL;
	// free(bunyamin);
	Free(arda);
	Free(bunyamin);
	return 0;
}



