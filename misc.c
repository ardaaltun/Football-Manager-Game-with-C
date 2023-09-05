#include "misc.h"
#include <stdio.h>
void Free(struct Player* player)
{
    printf("Freed %s\n", player->fname);
    free(player);
    player = NULL;
}