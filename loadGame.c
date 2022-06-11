#include "header.h"

int loadPet, loadHung, loadHapp, loadHeal, choice;
char loadPetName[100];

int g,e,f;

void loadGame() {
    clear;
    FILE *out = fopen("database.txt", "r");

    if (out == NULL) {
        puts("Error!! Data Not Found");
        sleep(2);
        return main();
    } else {
        puts("Data Found!!");
    }

    char line[255];
    while (fgets(line, sizeof(line), out)) {
        sscanf(line, "%d%s%d%d%d", &loadPet, loadPetName, &loadHung, &loadHapp, &loadHeal);
    }

    loadrefresh:

    if (loadHung >= 100) {
        loadHung = 100;
    } else if (loadHung <= 0) {
        return 0;
    }

    if (loadHapp >= 100) {
        loadHapp = 100;
    } else if (loadHapp <= 0) {
        return 0;
    }

    if (loadHeal >= 100) {
        loadHeal = 100;
    } else if (loadHeal <= 0) {
        return 0;
    }

    showLoadPet();
    showLoadPetName();
    loadPetStatus();



    linebreak;
    puts("Play Menu: ");
    puts("1. Play");
    puts("2. Eat");
    puts("3. Sleep");
    puts("4. Save Data");
    puts("5. Exit");
    printf("choice: "); fflush(stdin);

    do {
        scanf("%d", &choice); fflush(stdin);
        switch (choice) {
            case 1:
                loadHapp += rand() % 15 + 1;
                loadHung -=rand() % 15 + 1;
                goto loadrefresh;
                break;
            case 2:
                loadHung += rand() % 15 + 1;
                loadHeal -= rand() % 15 + 1;
                goto loadrefresh;
                break;
            case 3:
                loadHeal += rand() % 15 + 1;
                loadHapp -= rand() % 15 + 1;
                goto loadrefresh;
                break;
            case 4:
                loadSaveData();
                goto loadrefresh;
                break;
            case 5:
                printf("Exit");
                break;
        }
    } while (choice < 1 || choice > 5);

}

void showLoadPet() {
    clear;
    printf("Your pet's is: ");
    if(loadPet==1){
		printf("Lion\n\n");
        printf("      *           *");
		printf("\n     ***         ***");
		printf("\n    *****       *****");
		printf("\n   **###############**");
		printf("\n  **##0###########0##**");
		printf("\n **###################**");
		printf("\n **#########^#########**");
		printf("\n  **#################**");
		printf("\n   **####VVVVVVV####**");
		printf("\n    **###       ###**");
		printf("\n         ^^^^^^^     ");
	}else if(loadPet==2){
		printf("Wolf\n\n");
		printf("      *           *");
		printf("\n     *^*         *^*");
		printf("\n    *^^^*       *^^^*");
		printf("\n   *******************");
		printf("\n  ****@***********@****");
		printf("\n ***********************");
		printf("\n ***********T***********");
		printf("\n  *********************");
		printf("\n   ******VVVVVVV******");
		printf("\n    *****       *****");
		printf("\n         ^^^^^^^     ");
		}else if(loadPet==3){
		printf("Cat\n\n");
		f=3;
		for(e=1; e<=f; e++){
			for(g=1; g<=f; g++){
				printf(" ");
			}
			for(g=e; g<=f; g++){
				printf(" ");
			}
			for(g=1; g<=e; g++){
				printf("*");
			}
			for(g=1; g<=e-1; g++){
				printf("*");
			}
			for(g=e; g<=f+3; g++){
				printf(" ");
			}
			for(g=e; g<=f+3-1; g++){
				printf(" ");
			}
			for(g=1; g<=e; g++){
				printf("*");
			}
			for(g=1; g<=e-1; g++){
				printf("*");
			}
			printf("\n");
		}
		printf("   *******************");
		printf("\n  ****0***********0****");
		printf("\n ***********************");
		printf("\n ***********^***********");
		printf("\n  *********************");
		printf("\n   *****--*****--*****");
		printf("\n    *****_______*****");
	}else if(loadPet==4){
		printf("Dog\n\n");
		printf("      *           *");
		printf("\n     *^*         *^*");
		printf("\n    *^^^*       *^^^*");
		printf("\n   *******************");
		printf("\n  ****@***********@****");
		printf("\n ***********************");
		printf("\n ***********T***********");
		printf("\n  *********************");
		printf("\n   *****---------*****");
		printf("\n    *****UUUUUUU*****");
		printf("\n  ********UUUUU********");
		printf("\n  **********UU*********");
	}else if(loadPet==5){
		printf("Rabbit\n\n");
		f=3;
		for(e=1; e<=f; e++){
			for(g=1; g<=f; g++){
				printf(" ");
			}
			for(g=e; g<=f; g++){
				printf(" ");
			}
			for(g=1; g<=e; g++){
				printf("*");
			}
			for(g=1; g<=e-1; g++){
				printf("*");
			}
			for(g=e; g<=f+3; g++){
				printf(" ");
			}
			for(g=e; g<=f+3-1; g++){
				printf(" ");
			}
			for(g=1; g<=e; g++){
				printf("*");
			}
			for(g=1; g<=e-1; g++){
				printf("*");
			}
			printf("\n");
		}
		for(e=1; e<=f; e++){
			for(g=1; g<=f+1; g++){
				printf(" ");
			}
			for(g=1; g<=f+2; g++){
				printf("*");
			}
			for(g=1; g<=f+4; g++){
				printf(" ");
			}
			for(g=1; g<=f+2; g++){
				printf("*");
			}
			printf("\n");
		}
		printf("   *******************");
		printf("\n  ****0***********0****");
		printf("\n ***********************");
		printf("\n ***********V***********");
		printf("\n  *********************");
		printf("\n   ********YYY********");
		printf("\n    ********Y********");
	}
}
void showLoadPetName() {
    linebreak;
    printf("Your Pet's Name is: %s", loadPetName);
}
void loadPetStatus() {
    linebreak; linebreak;
    puts("Your Pet's Status: ");
    printf("Hunger      : %d", loadHung); linebreak;
    printf("Happiness   : %d", loadHapp); linebreak;
    printf("Health      : %d", loadHeal); linebreak;
}
void loadSaveData() {
    FILE *add = fopen("database.txt", "w");
    fprintf(add, "%d %s %d %d %d", loadPet, loadPetName, loadHung, loadHapp, loadHeal);
    fclose(add);

    linebreak;
    puts("Data Saved Successfully");
    sleep(2);
}
