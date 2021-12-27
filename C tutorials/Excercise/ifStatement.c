
// maths and science - 45
// science - 15
// maths - 15

// print the type of gift you are giving to them

#include<stdio.h>

int main(int argc, char const *argv[])
{   
    int numOfExam;
    printf("1.Maths\n2.Science\n3.English\n");
    printf("How many Exam You passed out of these:");
    scanf("%d", &numOfExam);
    
    if (numOfExam == 1){
        printf("Congratulation, You got 15 rs as gift");
    }
    else if (numOfExam == 2){
        printf("Congratulation, You got 30 rs as gift");
    }
    else{
        printf("Congratulation, You got 45 rs as gift");
    }

    return 0;
}
