#include "header.h"
#include "loadGame.c"
#include "newGame.c"
#include "random.c"
#include "delGame.c"


int menu();
void newGame();
void loadGame();
void random();
void getPet();

int main() {
    clear;
    int choice = menu();

    switch (choice) {
        case 1:
            newGame();
            break;
        case 2:
            loadGame();
            break;
        case 3:
            delGame();
            return 0;
    }

    return 0;
}

int menu() {
    int choice;

    puts("1. New Game");
    puts("2. Load Game");
    puts("3. Delete Save File");
    printf("Choice: "); fflush(stdin);
    scanf("%d", &choice);

    return choice;
}


