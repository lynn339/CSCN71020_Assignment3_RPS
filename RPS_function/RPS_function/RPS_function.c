#include <string.h>
#include "RPS_function.h"

int isValidChoice(const char* choice) {
    return strcmp(choice, "Rock") == 0 ||
        strcmp(choice, "Paper") == 0 ||
        strcmp(choice, "Scissors") == 0;
} // Helper function to validate choices


const char* determineWinner(const char* player1, const char* player2)
{
    if (strcmp(player1, player2) == 0)
    {
        if (strcmp(player1, "Rock") == 0 || strcmp(player1, "Paper") == 0 || strcmp(player1, "Scissors") == 0)
            return "Draw";
    }
    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0))
    {
        return "Player1";
    }
    if ((strcmp(player2, "Rock") == 0 && strcmp(player1, "Scissors") == 0) ||
        (strcmp(player2, "Scissors") == 0 && strcmp(player1, "Paper") == 0) ||
        (strcmp(player2, "Paper") == 0 && strcmp(player1, "Rock") == 0))
    {
        return "Player2";
    }
    if (strcmp(player1, "rock") == 0 || strcmp(player1, "paper") == 0 || strcmp(player1, "scissors") == 0)
    {
        return "Invalid";
    }
   

}