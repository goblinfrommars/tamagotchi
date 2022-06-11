#include "header.h"
#define out = NULL

void delGame(){
    FILE *add = fopen("database.txt", "w+");
    if (add == NULL)
    {
        puts("Error!! Data Not Found");
        sleep(2);
        return main();

    } else {
        fprintf(add, "%d %s %d %d %d", pet, petName, hunger, happiness, health);
        puts("Deleting Data!!");
        remove(add);
        system("pause");
        return main();
    }
    
    
}