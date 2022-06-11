#include "header.h"

int pet;

int e, f, g;

void random() {
    srand(time(NULL));
    pet = rand() % 5 + 1;
}


void getPet() {
    clear;
    printf("You Got: ");
    if(pet==1){
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
	}else if(pet==2){
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
		}else if(pet==3){
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
	}else if(pet==4){
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
	}else if(pet==5){
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
