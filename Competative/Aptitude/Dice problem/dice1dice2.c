#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input_sum = 0;
    int PossiblitiesA[10], PossiblitiesB[10], index = 0;
    printf("Enter The sum of Two dices: ");
    scanf("%d", &input_sum);

    if (input_sum <= 12)
    {

        for (int i = 1; i <= 6; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                if (i + j == input_sum)
                {
                    PossiblitiesA[index] = i;
                    PossiblitiesB[index] = j;
                    index++;
                }
            }
        }
        printf("{");
        for (int k = 0; k < index; k++)
        {
            printf("{%d, %d},", PossiblitiesA[k], PossiblitiesB[k]);
        }
        printf("}\n");
        printf("Possiblity of sum %d is %d", input_sum, index);
    }
    else
    {
        printf("Not possible Sum of Two Dice..");
    }

    return 0;
}