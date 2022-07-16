#include "menu_functions.h"

void language(int *lan){
	*lan = 0;
	while(*lan != 1 && *lan != 2){
		system("cls");
		printf("Choose a language\n");
	    printf("1_Spanish\n");
	    printf("2_English\n");
	    scanf("%d", &*lan);
	    if(*lan != 1 && *lan != 2){
	    	printf("Please select the correct option\n");
	    	system("pause");
		}
	}
}

int menu(int op,int lan){
	 op = 5;
	 system("cls");
	 while(op != 1 && op != 2 && op != 3 && op != 0 ){
	 	if(lan == 1){
	 		printf("\t .d88b.  d88888D db    db .88b  d88.  .d8b.  d8b   db d8888b. d888888b  .d8b.  .d8888. \n");
   			printf("\t.8P  Y8. YP  d8' `8b  d8' 88'YbdP`88 d8' `8b 888o  88 88  `8D   `88'   d8' `8b 88'  YP \n");
     		printf("\t88    88    d8'   `8bd8'  88  88  88 88ooo88 88V8o 88 88   88    88    88ooo88 `8bo.   \n");
     		printf("\t88    88   d8'      88    88  88  88 88~~~88 88 V8o88 88   88    88    88~~~88   `Y8b. \n");
     		printf("\t`8b  d8'  d8' db    88    88  88  88 88   88 88  V888 88  .8D   .88.   88   88 db   8D \n");
     		printf("\t `Y88P'  d88888P    YP    YP  YP  YP YP   YP VP   V8P Y8888D' Y888888P YP   YP `8888Y' \n");
     		printf("\t\t  -|                [-_-_-_-_-_-_-_-]                  |-  |\n");
	 		printf("\t\t[-_-_-_-_-]          |             |          [-_-_-_-_-]\n");
	 		printf("\t\t | o   o |           [  0   0   0  ]           | o   o |  \n");
	 		printf("\t\t  |     |____-|_______|           |_______|-____|     | \n");
     		printf("\t\t  |  o  ]              [    0    ]              [  o  |\n");
     		printf("\t\t  |     ]   o   o   o  [ _______ ]  o   o   o   [     |\n");
     		printf("\t\t  |     ]              [ ||||||| ]              [     |\n");
     		printf("\t\t  |     ]              [ ||||||| ]              [     |\n");
     		printf("\t\t  |_____]--------------[_|||||||_]--------------[_____|\n");
     		printf("--------------------------------------------------------------------------------------------\n");
     		printf("################################{Created by Diego Almeida}##################################\n");
     		printf("--------------------------------------------------------------------------------------------\n");
    
    		printf("\t 1_Nueva partida\n");
   			printf("\t 2_Puntaje\n");
    		printf("\t 3_Comunidad\n");
    		printf("\t 0_Salir al escritorio\n");
    		scanf("%d",&op);
		 }else{
		 	 printf("\t .d88b.  d88888D db    db .88b  d88.  .d8b.  d8b   db d8888b. d888888b  .d8b.  .d8888. \n");
     		 printf("\t.8P  Y8. YP  d8' `8b  d8' 88'YbdP`88 d8' `8b 888o  88 88  `8D   `88'   d8' `8b 88'  YP \n");
     		 printf("\t88    88    d8'   `8bd8'  88  88  88 88ooo88 88V8o 88 88   88    88    88ooo88 `8bo.   \n");
     		 printf("\t88    88   d8'      88    88  88  88 88~~~88 88 V8o88 88   88    88    88~~~88   `Y8b. \n");
     		 printf("\t`8b  d8'  d8' db    88    88  88  88 88   88 88  V888 88  .8D   .88.   88   88 db   8D \n");
     		 printf("\t `Y88P'  d88888P    YP    YP  YP  YP YP   YP VP   V8P Y8888D' Y888888P YP   YP `8888Y' \n");
     		 printf("\t\t  -|                [-_-_-_-_-_-_-_-]                  |-  |\n");
	 		 printf("\t\t[-_-_-_-_-]          |             |          [-_-_-_-_-]\n");
	 		 printf("\t\t | o   o |           [  0   0   0  ]           | o   o |  \n");
	 		 printf("\t\t  |     |____-|_______|           |_______|-____|     | \n");
     		 printf("\t\t  |  o  ]              [    0    ]              [  o  |\n");
     		 printf("\t\t  |     ]   o   o   o  [ _______ ]  o   o   o   [     |\n");
     		 printf("\t\t  |     ]              [ ||||||| ]              [     |\n");
     		 printf("\t\t  |     ]              [ ||||||| ]              [     |\n");
     		 printf("\t\t  |_____]--------------[_|||||||_]--------------[_____|\n");
     		 printf("--------------------------------------------------------------------------------------------\n");
     		 printf("################################{Created by Diego Almeida}##################################\n");
     		 printf("--------------------------------------------------------------------------------------------\n");
    
   			 printf("\t 1_New game\n");
    		 printf("\t 2_Score\n");
    		 printf("\t 3_Community\n");
    		 printf("\t 0_Quit to desktop\n");
    		 scanf("%d",&op);
		 }
	 
	
   }
    return op;
}


void Variable_Reset(int *arm,int *people,int *mon,int *y){
	*arm = 100;
	*people = 100;
	*mon = 100;
	*y = 0;
}
