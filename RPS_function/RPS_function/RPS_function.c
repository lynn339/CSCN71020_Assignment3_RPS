#include <string.h>
#include "RPS_function.h"


const char* determineWinner(const char* player1, const char* player2)
{
    if (strcmp(player1, player2) == 0)
    {
        if (strcmp(player1, "Rock") == 0 || strcmp(player1, "Paper") == 0 || strcmp(player1, "Scissors") == 0)
            return "Draw";
        else
            return "Invalid";
    }
    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0))
    {
        return "Player1";
    }

}