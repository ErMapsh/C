#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n + 1;
}
// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins

// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

int CP, PP, no_of_chance = 3;

int main()
{
    for (int i = 1; i <= no_of_chance; i++)
    {
        // Coomputer Site
        int ComputerChoice = generateRandomNumber(3);
        // printf("%d\n", ComputerChoice);

        // User Site
        int UserChoice;
        printf("Choices are:\n1.Rock\n2.Paper\n3.Scissor\nEnter Your Choice: ");
        scanf("%d", &UserChoice);

        if (ComputerChoice == UserChoice)
        {
            printf("Draw Try again\n\n");
            i--;
            continue;
        }
        else
        {

            switch (UserChoice)
            {
            case 1:
                if ((UserChoice == 1) && (ComputerChoice == 2))
                {
                    printf("Computer Win\n\n");
                    CP++;
                }
                else if ((UserChoice == 1) && (ComputerChoice == 3))
                {
                    printf("Player Win\n\n");
                    PP++;
                }
                break;

            case 2:
                if ((UserChoice == 2) && (ComputerChoice == 3))
                {
                    printf("Computer Win\n\n");
                    CP++;
                }
                else if ((UserChoice == 2) && (ComputerChoice == 1))
                {
                    printf("Player Win\n\n");
                    PP++;
                }
                break;

            case 3:
                if ((UserChoice == 3) && (ComputerChoice == 2))
                {
                    printf("Player Win\n\n");
                    PP++;
                }
                else if ((UserChoice == 3) && (ComputerChoice == 1))
                {
                    printf("Computer Win\n\n");
                    CP++;
                }
                break;

            default:
                printf("Enter Correct Choice, Try again\n\n");
                i--;
            }
        }
    }

    // Declaring winner
    if (CP < PP)
    {
        printf("\n.......User Win............\n");
    }
    else
    {
        printf("\n.......Computer Win............\n");
    }

    return 0;
}
