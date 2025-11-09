#include <string.h>
#include "RPS_function.h"

int isValidChoice(const char* choice) {
    return strcmp(choice, "Rock") == 0 ||
        strcmp(choice, "Paper") == 0 ||
        strcmp(choice, "Scissors") == 0;
} // Helper function to validate choices


const char* determineWinner(const char* player1, const char* player2)
{
    if (!isValidChoice(player1) || !isValidChoice(player2)) {
        return "Invalid";
    }

    if (strcmp(player1, player2) == 0) {
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
   

}