#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[54];
};

int main()
{
    struct student Mahesh, ErMapsh, Mapsh;

    strcpy(Mahesh.name, "Mahesh");
    strcpy(ErMapsh.name, "ErMapsh");
    strcpy(Mapsh.name, "Mapsh");

    Mahesh.id = 73;
    ErMapsh.id = 37;
    Mapsh.id = 65;

    Mahesh.marks = 173;
    ErMapsh.marks = 317;
    Mapsh.marks = 615;

    Mahesh.fav_char = 'y';
    ErMapsh.fav_char = 'x';
    Mapsh.fav_char = 'g';

    puts(ErMapsh.name);
    printf("Student ErMapsh id is %d.\n", ErMapsh.id);
    printf("ErMapsh got %d Marks.\n", ErMapsh.marks);
    printf("ErMapsh fav character is %c.\n", ErMapsh.fav_char);

    printf("\n");
    puts(Mahesh.name);
    printf("Student Mahesh id is %d.\n", Mahesh.id);
    printf("Mahesh got %d Marks.\n", Mahesh.marks);
    printf("Mahesh fav character is %c.\n", Mahesh.fav_char);

    printf("\n");
    puts(Mapsh.name);
    printf("Student Mapsh id is %d.\n", Mapsh.id);
    printf("Mapsh got %d Marks.\n", Mapsh.marks);
    printf("Mapsh fav character is %c.\n", Mapsh.fav_char);
    printf("\n");

    return 0;
}