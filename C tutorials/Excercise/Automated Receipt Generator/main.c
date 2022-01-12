#include <stdio.h>
#include <stdlib.h>
int main()
{
    // You have to fill in values to a template letter.txt
    // Letter.txt looks something like this:
    // Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
    // Please visit our outlet {{outlet}} for any kind of problems. We plan to server you again soon.
    // You have to read this file and replace these values:

    // {{name}}   - Harry
    // {{item}}   - Table Fan
    // {{outlet}} - Ram Laxmi fan outlet

    // Use file functions in c to accomplish the same

    char name[20];
    char item[20];
    char outlet[30] = "Ram Laxmi fan outlet";
    char string[200];

    // printf("Enter Name of Customer:");
    // gets(name);
    // printf("Enter Item that purchase customer:");
    // gets(item);
    // printf("Name: %s\nItem: %s\nOutlet : %s", name, item, outlet);

    FILE *ptr = NULL;
    ptr = fopen("main.txt", "r");
    char *c = fgets(string, 200, ptr);
    printf("%s", string);
    fclose(ptr);

    return 0;
}
