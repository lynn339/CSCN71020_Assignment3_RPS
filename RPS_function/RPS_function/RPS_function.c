#include <string.h>
#include "RPS_function.h"


const char* determineWinner(const char* player1, const char* player2)
{
    if (strcmp(player1, player2) == 0)
    {
        return "Draw";
    }
}