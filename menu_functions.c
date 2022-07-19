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

void score(char *v, char *v1, char *v2, char *v3, int y1, int y2, int y3, int i, int aux){
	int max;
	max = y1;
	system("cls");
	printf(" .dP'Y8  dP''b8  dP'Yb  88''Yb 888888 \n");
    printf(" `Ybo.' dP   '' dP   Yb 88__dP 88__   \n");
	printf(" o.`Y8b Yb      Yb   dP 88'Yb  88''   \n");
    printf(" 8bodP'  YboodP  YbodP  88  Yb 888888 \n");
	printf("--------------------------------------\n");
	if( i == 0){
		printf("Aun no se empezo a jugar");
	}
	if(i == 1){
		printf("[1]Player [%s] = Years [%d]\n",v1,y1);
	}else if(i == 2){
		if(max < y2){
			printf("[2]Player [%s] = Years [%d]\n",v2,y2);
			printf("[1]Player [%s] = Years [%d]\n",v1,y1);
		}else{
			printf("[1]Player [%s] = Years [%d]\n",v1,y1);
			printf("[2]Player [%s] = Years [%d]\n",v2,y2);	
		}
		
	}else if (i >= 3){
		if(i > 3){
			if(aux > y3){
				y3 = aux;
				strcpy(v3, v);
			}else if(aux > y2){
				y2 = aux;
				strcpy(v2, v);
			}else if(aux > y1){
				y1 = aux;
				strcpy(v1, v);
			}	
		}
		if(max > y2 && max > y3){
			printf("[1]Player [%s] = Years [%d]\n",v1,y1);
			if(y2 < y3){
					printf("[3]Player [%s] = Years [%d]\n",v3,y3);
					printf("[2]Player [%s] = Years [%d]\n",v2,y2);
			}else{
				printf("[2]Player [%s] = Years [%d]\n",v2,y2);
				printf("[3]Player [%s] = Years [%d]\n",v3,y3);
			}
		}
		if(max < y2){
			max = y2;
		}
		if(max < y3){
			printf("[3]Player [%s] = Years [%d]\n",v3,y3);
			if(y1 < y2){
				printf("[2]Player [%s] = Years [%d]\n",v2,y2);
				printf("[1]Player [%s] = Years [%d]\n",v1,y1);
			}else{
				printf("[1]Player [%s] = Years [%d]\n",v1,y1);
				printf("[2]Player [%s] = Years [%d]\n",v2,y2);
			}
			max = y3;
		}
		if(max <= y2){
			printf("[2]Player [%s] = Years [%d]\n",v2,y2);
			if(y1 < y3){
				printf("[3]Player [%s] = Years [%d]\n",v3,y3);
				printf("[1]Player [%s] = Years [%d]\n",v1,y1);
			}else{
				printf("[1]Player [%s] = Years [%d]\n",v1,y1);
				printf("[3]Player [%s] = Years [%d]\n",v3,y3);
			}
		}
	
	}
	system("pause");
	
}

void community(){
	system("cls");
	printf("  dP""b8    dP'Yb  8b    d8 8b    d8 88   88 88b 88 88 888888 Yb  dP  \n");
	printf(" dP   `' dP   Yb 88b  d88 88b  d88 88   88 88Yb88 88   88    YbdP  \n");
	printf(" Yb      Yb   dP 88YbdP88 88YbdP88 Y8   8P 88 Y88 88   88     8P   \n");
	printf("  YboodP  YbodP  88 YY 88 88 YY 88 `YbodP' 88  Y8 88   88    dP     \n\n\n");
	printf("\t ascii images: https://www.asciiart.eu/ \n");
	printf("\t GitHub(repository): https://github.com/DMAlmeyda/Ozymandias-strategy-game \n");
	printf("\t GitHub(Profile): https://github.com/DMAlmeyda\n\n");
	
	system("pause");
}
