#include "event.h"

void event01_army(int *arm,int *people,int *mon,int *y, int lang){
	system("cls");
	if(*arm > 0 && *people > 0 && *mon > 0){
			if(lang == 1){
			int event = 0;
        	printf("********************\n");
	        printf("Años en el poder[%d]\n",*y);
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [%d]\n",*mon);
			printf("Ejercito [%d]\n", *arm);
			printf("Influencia social [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t   ___ \n");
			printf("\t  |===|\n");
			printf("\t  |   |\n");
			printf("\t O --- O\n");
			printf("\t |#####|  \n");
			printf("\t |#####| \n");

			printf("--------Ejercito--------------\n");
			printf("Se rumorea que otros reinos estan planeando invadirnos, reforzamos la guardia?\n");
			printf("[1] = 'Refuerzen la guardia'<--- [-10 dinero] y [+10 ejercito] \n");
			printf("[2] = 'No'<--- [-10 ejercito]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*mon = *mon - 10;
				*arm = *arm + 10;
	    	}else if(event == 2){
	    		*arm = *arm - 10;
			}else{
				printf("\t Opcion incorrecta\n");
			}
		}
	 	*y = *y + 1;
    	}
    
		if(lang == 2){
			int event = 0;
        	printf("********************\n");
	        printf("Years in power [%d]\n",*y);
	        printf("********************\n");
	        printf("------Resource---------\n");
	        printf("Money [%d]\n",*mon);
			printf("Army [%d]\n", *arm);
			printf("Social influence [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t   ___ \n");
			printf("\t  |===|\n");
			printf("\t  |   |\n");
			printf("\t O --- O\n");
			printf("\t |#####|  \n");
			printf("\t |#####| \n");

			printf("--------ARMY--------------\n");
			printf("It is rumored that other kingdoms are planning to invade us, shall we reinforce the guard?\n");
			printf("[1] = 'Reinforce the guard'<--- [-10 Money] y [+10 Army]\n");
			printf("[2] = 'No'<--- [-10 Army]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*mon = *mon - 10;
				*arm = *arm + 10;
	    	}else if(event == 2){
	    		*arm = *arm - 10;
			}else{
				printf("\t That option does not exist\n");
			}
		}
	 	*y = *y + 1;
    	}
    }
}
void event02_army(int *arm,int *people,int *mon,int *y, int lang){
	system("cls");
	if(*arm > 0 && *people > 0 && *mon > 0){
			if(lang == 1){
			int event = 0;
        	printf("********************\n");
	        printf("Años en el poder[%d]\n",*y);
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [%d]\n",*mon);
			printf("Ejercito [%d]\n", *arm);
			printf("Influencia social [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t   ___ \n");
			printf("\t  |===|\n");
			printf("\t  |   |\n");
			printf("\t O --- O\n");
			printf("\t |#####|  \n");
			printf("\t |#####| \n");

			printf("--------Ejercito--------------\n");
			printf("Los soldados quieren mejores salarios\n");
			printf("[1] = 'Por supuesto se lo merecen'<--- [-20 dinero] y [+15 ejercito]\n");
			printf("[2] = 'No podemos permitirnoslo'<--- [-20 ejercito]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*mon = *mon - 20;
				*arm = *arm + 15;
	    	}else if(event == 2){
	    		*arm = *arm - 20;
			}else{
				printf("\t Opcion incorrecta\n");
			}
		}
	 	*y = *y + 1;
    	}
    
		if(lang == 2){
			int event = 0;
        	printf("********************\n");
	        printf("Years in power [%d]\n",*y);
	        printf("********************\n");
	        printf("------Resource---------\n");
	        printf("Money [%d]\n",*mon);
			printf("Army [%d]\n", *arm);
			printf("Social influence [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t   ___ \n");
			printf("\t  |===|\n");
			printf("\t  |   |\n");
			printf("\t O --- O\n");
			printf("\t |#####|  \n");
			printf("\t |#####| \n");

			printf("--------ARMY--------------\n");
			printf("The soldiers want better wages\n");
			printf("[1] = 'Of course they deserve it'<--- [-20 Money] y [+15 Army]\n");
			printf("[2] = 'We can't afford it'<--- [-20 Army]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*mon = *mon - 20;
				*arm = *arm + 15;
	    	}else if(event == 2){
	    		*arm = *arm - 20;
			}else{
				printf("\t That option does not exist\n");
			}
		}
	 	*y = *y + 1;
    	}
    }
}

void event03_army(int *arm,int *people,int *mon,int *y, int lang){
	system("cls");
	if(*arm > 0 && *people > 0 && *mon > 0){
			if(lang == 1){
			int event = 0;
        	printf("********************\n");
	        printf("Años en el poder[%d]\n",*y);
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [%d]\n",*mon);
			printf("Ejercito [%d]\n", *arm);
			printf("Influencia social [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t   ___ \n");
			printf("\t  |===|\n");
			printf("\t  |   |\n");
			printf("\t O --- O\n");
			printf("\t |#####|  \n");
			printf("\t |#####| \n");

			printf("--------Ejercito--------------\n");
			printf("La gente esta enojada y estan provocando disturbios\n");
			printf("[1] = 'Reprimanlos'<--- [-30 Influencia social] [+20 ejercito]\n");
			printf("[2] = 'Distribuyan el oro de los Lords'<--- [-20 ejercito] [-20 Dinero]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people - 30;
				*arm = *arm + 20;
	    	}else if(event == 2){
	    		*arm = *arm - 20;
	    		*mon = *mon - 20;
			}else{
				printf("\t Opcion incorrecta\n");
			}
		}
	 	    *y = *y + 1;
    	}
    
		if(lang == 2){
			int event = 0;
        	printf("********************\n");
	        printf("Years in power [%d]\n",*y);
	        printf("********************\n");
	        printf("------Resource---------\n");
	        printf("Money [%d]\n",*mon);
			printf("Army [%d]\n", *arm);
			printf("Social influence [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t   ___ \n");
			printf("\t  |===|\n");
			printf("\t  |   |\n");
			printf("\t O --- O\n");
			printf("\t |#####|  \n");
			printf("\t |#####| \n");

			printf("--------ARMY--------------\n");
			printf("People are angry and they are rioting\n");
			printf("[1] = 'Repress them'<--- [-30 People] y [+20 Army]\n");
			printf("[2] = 'Distribute the gold of the lords'<--- [-20 Army] [-20 Money]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people - 30;
				*arm = *arm + 20;
	    	}else if(event == 2){
	    		*arm = *arm - 20;
	    		*mon = *mon - 20;
			}else{
				printf("\t That option does not exist\n");
			}
		}
	 		*y = *y + 1;
    	}
    }
}

void event01_social(int *arm,int *people,int *mon,int *y, int lang){
	system("cls");
	if(*arm > 0 && *people > 0 && *mon > 0){
			if(lang == 1){
			int event = 0;
        	printf("********************\n");
	        printf("Años en el poder[%d]\n",*y);
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [%d]\n",*mon);
			printf("Ejercito [%d]\n", *arm);
			printf("Influencia social [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t   _   |~  _    \n");
			printf("\t  [_]--'--[_]   \n");
			printf("\t  |'|""`""    |'|   \n");
			printf("\t  | |  _  | |   \n");
  			printf("\t  |_|_|I|_|_|   \n");
    		printf("--------Social--------------\n");
			printf("Este año sacamos una gran cosecha, Que preferiria hacer?\n");
			printf("[1] = 'Darsela al pueblo'<--- [-20 ejercito] [+10 Influencia social]\n");
			printf("[2] = 'Darsela al ejercito para proximas expediciones'<--- [+20 ejercito] [-10 Influencia social]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people + 10;
				*arm = *arm - 20;
	    	}else if(event == 2){
	    		*arm = *arm + 20;
	    		*people = *people - 10;
			}else{
				printf("\t Opcion incorrecta\n");
			}
		}
	 	    *y = *y + 1;
    	}
    
		if(lang == 2){
			int event = 0;
        	printf("********************\n");
	        printf("Years in power [%d]\n",*y);
	        printf("********************\n");
	        printf("------Resource---------\n");
	        printf("Money [%d]\n",*mon);
			printf("Army [%d]\n", *arm);
			printf("Social influence [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t   _   |~  _    \n");
			printf("\t  [_]--'--[_]   \n");
			printf("\t  |'|""`""    |'|   \n");
			printf("\t  | |  _  | |   \n");
  			printf("\t  |_|_|I|_|_|   \n");
    		printf("--------Social--------------\n");
			printf("This year we have a great harvest, what would you prefer to do?\n");
			printf("[1] = 'Give it to the people'<--- [-20 Army] [+10 Social influence]\n");
			printf("[2] = 'Give it to the army for future expeditions'<---[+20 Army] [-10 Social influence]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people + 10;
				*arm = *arm - 20;
	    	}else if(event == 2){
	    		*arm = *arm + 20;
	    		*people = *people - 10;
			}else{
				printf("\t That option does not exist\n");
			}
		}
	 		*y = *y + 1;
    	}
    }
}

void event02_social(int *arm,int *people,int *mon,int *y, int lang){
	system("cls");
	if(*arm > 0 && *people > 0 && *mon > 0){
			if(lang == 1){
			int event = 0;
        	printf("********************\n");
	        printf("Años en el poder[%d]\n",*y);
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [%d]\n",*mon);
			printf("Ejercito [%d]\n", *arm);
			printf("Influencia social [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t   _   |~  _    \n");
			printf("\t  [_]--'--[_]   \n");
			printf("\t  |'|""`""    |'|   \n");
			printf("\t  | |  _  | |   \n");
  			printf("\t  |_|_|I|_|_|   \n");
    		printf("--------Social--------------\n");
			printf("Construyamos un hospital, salvaremos muchas vidas\n");
			printf("[1] = '[1] = 'No nos podemos permitir semejante gasto'<--- [-20 personas]\n");
			printf("[2] = 'Por supuesto, comencemos ya '<--- [+20 personas] y [-50 dinero]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people - 20;
				
	    	}else if(event == 2){
	    		*mon = *mon - 50;
	    		*people = *people + 20;
			}else{
				printf("\t Opcion incorrecta\n");
			}
		}
	 	    *y = *y + 1;
    	}
    
		if(lang == 2){
			int event = 0;
        	printf("********************\n");
	        printf("Years in power [%d]\n",*y);
	        printf("********************\n");
	        printf("------Resource---------\n");
	        printf("Money [%d]\n",*mon);
			printf("Army [%d]\n", *arm);
			printf("Social influence [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t   _   |~  _    \n");
			printf("\t  [_]--'--[_]   \n");
			printf("\t  |'|""`""    |'|   \n");
			printf("\t  | |  _  | |   \n");
  			printf("\t  |_|_|I|_|_|   \n");
    		printf("--------Social--------------\n");
			printf("Let's build a hospital, we will save many lives\n");
			printf("[1] = 'We cannot afford such an expense.'<--- [-20 Social influence]\n");
			printf("[2] = 'Of course, let's start now'<---[-50 Money] y [+20 Social influence]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people - 20;
				
	    	}else if(event == 2){
	    		*mon = *mon - 50;
	    		*people = *people + 20;
			}else{
				printf("\t That option does not exist\n");
			}
		}
	 		*y = *y + 1;
    	}
    }
}

void event03_social(int *arm,int *people,int *mon,int *y, int lang){
	system("cls");
	if(*arm > 0 && *people > 0 && *mon > 0){
			if(lang == 1){
			int event = 0;
        	printf("********************\n");
	        printf("Años en el poder[%d]\n",*y);
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [%d]\n",*mon);
			printf("Ejercito [%d]\n", *arm);
			printf("Influencia social [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t   _   |~  _    \n");
			printf("\t  [_]--'--[_]   \n");
			printf("\t  |'|""`""    |'|   \n");
			printf("\t  | |  _  | |   \n");
  			printf("\t  |_|_|I|_|_|   \n");
    		printf("--------Social--------------\n");
			printf("La gente esta hambrienta\n");
			printf("[1] = '[1] = 'Denles comida'<--- [-20 Dinero]  [+20 Influencia social]\n");
			printf("[2] = 'No podemos darles comida por este momento '<--- [-20 personas] \n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people + 20;
				*mon = *mon - 20;
	    	}else if(event == 2){
	    		
	    		*people = *people - 20;
			}else{
				printf("\t Opcion incorrecta\n");
			}
		}
	 	    *y = *y + 1;
    	}
    
		if(lang == 2){
			int event = 0;
        	printf("********************\n");
	        printf("Years in power [%d]\n",*y);
	        printf("********************\n");
	        printf("------Resource---------\n");
	        printf("Money [%d]\n",*mon);
			printf("Army [%d]\n", *arm);
			printf("Social influence [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t   _   |~  _    \n");
			printf("\t  [_]--'--[_]   \n");
			printf("\t  |'|""`""    |'|   \n");
			printf("\t  | |  _  | |   \n");
  			printf("\t  |_|_|I|_|_|   \n");
    		printf("--------Social--------------\n");
			printf("The people are starving\n");
			printf("[1] = 'Give them food'<--- [-20 Money] [+20 Social influence]\n");
			printf("[2] = 'at another time'<--- [-20 Social influence]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people + 20;
				*mon = *mon - 20;
	    	}else if(event == 2){
	    		
	    		*people = *people - 20;
			}else{
				printf("\t That option does not exist\n");
			}
		}
	 		*y = *y + 1;
    	}
    }
}

void event01_economy(int *arm,int *people,int *mon,int *y, int lang){
	system("cls");
	if(*arm > 0 && *people > 0 && *mon > 0){
			if(lang == 1){
			int event = 0;
        	printf("********************\n");
	        printf("Años en el poder[%d]\n",*y);
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [%d]\n",*mon);
			printf("Ejercito [%d]\n", *arm);
			printf("Influencia social [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t      ______ ______  \n");
			printf("\t    _/      Y      \_ \n");
			printf("\t   // ~~ ~~ | ~~ ~  \\  \n");
			printf("\t  // ~ ~ ~~ | ~~~ ~~ \\   \n");
   			printf("\t //________.|.________\\     \n");
   			printf("\t`----------`-'----------' \n");
    		printf("--------Economia--------------\n");
			printf("Subimos los impuestos?\n");
			printf("[1] = 'Por supuesto'<--- [+50 de dinero]  [-50 Influencia social] [+20 Ejercito]\n");
			printf("[2] = 'Mantengamos las cosas como estan [-20 Ejercito] \n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people - 50;
				*mon = *mon + 50;
				*arm = *arm + 20;
	    	}else if(event == 2){
	    		
	    		*arm = *arm - 20;
			}else{
				printf("\t Opcion incorrecta\n");
			}
		}
	 	    *y = *y + 1;
    	}
    
		if(lang == 2){
			int event = 0;
        	printf("********************\n");
	        printf("Years in power [%d]\n",*y);
	        printf("********************\n");
	        printf("------Resource---------\n");
	        printf("Money [%d]\n",*mon);
			printf("Army [%d]\n", *arm);
			printf("Social influence [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t      ______ ______  \n");
			printf("\t    _/      Y      \_ \n");
			printf("\t   // ~~ ~~ | ~~ ~  \\  \n");
			printf("\t  // ~ ~ ~~ | ~~~ ~~ \\   \n");
   			printf("\t //________.|.________\\     \n");
   			printf("\t`----------`-'----------' \n");
    		printf("--------Economy--------------\n");
			printf("we raise taxes my king?\n");
			printf("[1] = 'Yes'<--- [+50 money]  [-50 Social influence] [+20 Army]\n");
			printf("[2] = 'It's a bad time to do that''<--- [-20 Army]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people - 50;
				*mon = *mon + 50;
				*arm = *arm + 20;
	    	}else if(event == 2){
	    		
	    		*arm = *arm - 20;
			}else{
				printf("\t That option does not exist\n");
			}
		}
	 		*y = *y + 1;
    	}
    }
}

void event02_economy(int *arm,int *people,int *mon,int *y, int lang){
	system("cls");
	if(*arm > 0 && *people > 0 && *mon > 0){
			if(lang == 1){
			int event = 0;
        	printf("********************\n");
	        printf("Años en el poder[%d]\n",*y);
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [%d]\n",*mon);
			printf("Ejercito [%d]\n", *arm);
			printf("Influencia social [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t      ______ ______  \n");
			printf("\t    _/      Y      \_ \n");
			printf("\t   // ~~ ~~ | ~~ ~  \\  \n");
			printf("\t  // ~ ~ ~~ | ~~~ ~~ \\   \n");
   			printf("\t //________.|.________\\     \n");
   			printf("\t`----------`-'----------' \n");
    		printf("--------Economia--------------\n");
			printf("Mi rey, desea bajar los impuestos?\n");
			printf("[1] = 'Por supuesto'<--- [-30 de dinero]  [+40 Influencia social] [-20 Ejercito]\n");
			printf("[2] = 'Mantengamos las cosas como estan' [-20 Influencia social] \n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people + 40;
				*mon = *mon - 30;
				*arm = *arm - 20;
	    	}else if(event == 2){
	    		
	    		*people = *people - 20;
			}else{
				printf("\t Opcion incorrecta\n");
			}
		}
	 	    *y = *y + 1;
    	}
    
		if(lang == 2){
			int event = 0;
        	printf("********************\n");
	        printf("Years in power [%d]\n",*y);
	        printf("********************\n");
	        printf("------Resource---------\n");
	        printf("Money [%d]\n",*mon);
			printf("Army [%d]\n", *arm);
			printf("Social influence [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t      ______ ______  \n");
			printf("\t    _/      Y      \_ \n");
			printf("\t   // ~~ ~~ | ~~ ~  \\  \n");
			printf("\t  // ~ ~ ~~ | ~~~ ~~ \\   \n");
   			printf("\t //________.|.________\\     \n");
   			printf("\t`----------`-'----------' \n");
    		printf("--------Economy--------------\n");
			printf("My king, do you want to lower taxes??\n");
			printf("[1] = 'Yes'<--- [-30 money]  [+40 Social influence] [-20 Army]\n");
			printf("[2] = 'It's a bad time to do that''<--- [-20 Social Influence]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people + 40;
				*mon = *mon - 30;
				*arm = *arm - 20;
	    	}else if(event == 2){
	    		
	    		*people = *people - 20;
			}else{
				printf("\t That option does not exist\n");
			}
		}
	 		*y = *y + 1;
    	}
    }
}

void event03_economy(int *arm,int *people,int *mon,int *y, int lang){
	system("cls");
	if(*arm > 0 && *people > 0 && *mon > 0){
			if(lang == 1){
			int event = 0;
        	printf("********************\n");
	        printf("Años en el poder[%d]\n",*y);
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [%d]\n",*mon);
			printf("Ejercito [%d]\n", *arm);
			printf("Influencia social [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t      ______ ______  \n");
			printf("\t    _/      Y      \_ \n");
			printf("\t   // ~~ ~~ | ~~ ~  \\  \n");
			printf("\t  // ~ ~ ~~ | ~~~ ~~ \\   \n");
   			printf("\t //________.|.________\\     \n");
   			printf("\t`----------`-'----------' \n");
    		printf("--------Economia--------------\n");
			printf("Tenemos muchos sirvientes\n");
			printf("[1] = 'Es verdad, echar algunos'<--- [+20 Dinero]  [-10 Influencia social] [-10 Ejercito]\n");
			printf("[2] = 'Es verdad, pero dejarlo asi' [-20 Dinero] \n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people - 10;
				*mon = *mon + 20;
				*arm = *arm - 10;
	    	}else if(event == 2){
	    		
	    		*mon = *mon - 20;
			}else{
				printf("\t Opcion incorrecta\n");
			}
		}
	 	    *y = *y + 1;
    	}
    
		if(lang == 2){
			int event = 0;
        	printf("********************\n");
	        printf("Years in power [%d]\n",*y);
	        printf("********************\n");
	        printf("------Resource---------\n");
	        printf("Money [%d]\n",*mon);
			printf("Army [%d]\n", *arm);
			printf("Social influence [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t      ______ ______  \n");
			printf("\t    _/      Y      \_ \n");
			printf("\t   // ~~ ~~ | ~~ ~  \\  \n");
			printf("\t  // ~ ~ ~~ | ~~~ ~~ \\   \n");
   			printf("\t //________.|.________\\     \n");
   			printf("\t`----------`-'----------' \n");
    		printf("--------Economy--------------\n");
			printf("We have too many servants?\n");
			printf("[1] = 'You're right, let's fire some'<--- [+20 money]  [-10 Social influence] [-10 Army]\n");
			printf("[2] = 'You're right, but i want to keep things how they are'<--- [-20 money] \n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
				*people = *people - 10;
				*mon = *mon + 20;
				*arm = *arm - 10;
	    	}else if(event == 2){
	    		
	    		*mon = *mon - 20;
			}else{
				printf("\t That option does not exist\n");
			}
		}
	 		*y = *y + 1;
    	}
    }
}

void event01_diplomacy(int *arm,int *people,int *mon,int *y, int lang){
	system("cls");
	if(*arm > 0 && *people > 0 && *mon > 0){
			if(lang == 1){
			int event = 0;
        	printf("********************\n");
	        printf("Años en el poder[%d]\n",*y);
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [%d]\n",*mon);
			printf("Ejercito [%d]\n", *arm);
			printf("Influencia social [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t     ()   \n");
			printf("\t     )(      \n");
			printf("\t  o======o   \n");
			printf("\t     ||      \n");
    		printf("\t     ||       \n");
    		printf("\t     ||   \n");
   			printf("\t  ,c88888888b \n");
    		printf("\t ,88888888888b \n");
    		printf("\t 88888888888Y \n");
    		printf("\t,;;Y888888Y,,, \n");
    		printf("--------Diplomacia--------------\n");
			printf("Una princesa de un reino cercano quiere casarse contigo, aceptas?\n");
			printf("[1] = 'Si, sin dudar'<--- [+20 dinero]\n");
			printf("[2] = 'No prefiero estar solo '<--- [-10 Influencia social] \n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
			
				*mon = *mon + 20;
				
	    	}else if(event == 2){
	    		
	    		*people = *people - 10;
			}else{
				printf("\t Opcion incorrecta\n");
			}
		}
	 	    *y = *y + 1;
    	}
    
		if(lang == 2){
			int event = 0;
        	printf("********************\n");
	        printf("Years in power [%d]\n",*y);
	        printf("********************\n");
	        printf("------Resource---------\n");
	        printf("Money [%d]\n",*mon);
			printf("Army [%d]\n", *arm);
			printf("Social influence [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t     ()   \n");
			printf("\t     )(      \n");
			printf("\t  o======o   \n");
			printf("\t     ||      \n");
    		printf("\t     ||       \n");
    		printf("\t     ||   \n");
   			printf("\t  ,c88888888b \n");
    		printf("\t ,88888888888b \n");
    		printf("\t 88888888888Y \n");
    		printf("\t,;;Y888888Y,,, \n");
    		printf("--------Diplomacy--------------\n");
			printf("A princess from a nearby kingdom wants to marry you, do you agree?\n");
			printf("[1] = 'Yes, let's do it''<--- [+20 Money]\n ");
			printf("[2] = 'I prefer to be alone'<--- [-10 Social influence] \n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
			
				*mon = *mon + 20;
				
	    	}else if(event == 2){
	    		
	    		*people = *people - 10;
			}else{
				printf("\t That option does not exist\n");
			}
		}
	 		*y = *y + 1;
    	}
    }
}

void event02_diplomacy(int *arm,int *people,int *mon,int *y, int lang){
	system("cls");
	if(*arm > 0 && *people > 0 && *mon > 0){
			if(lang == 1){
			int event = 0;
        	printf("********************\n");
	        printf("Años en el poder[%d]\n",*y);
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [%d]\n",*mon);
			printf("Ejercito [%d]\n", *arm);
			printf("Influencia social [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t     ()   \n");
			printf("\t     )(      \n");
			printf("\t  o======o   \n");
			printf("\t     ||      \n");
    		printf("\t     ||       \n");
    		printf("\t     ||   \n");
   			printf("\t  ,c88888888b \n");
    		printf("\t ,88888888888b \n");
    		printf("\t 88888888888Y \n");
    		printf("\t,;;Y888888Y,,, \n");
    		printf("--------Diplomacia--------------\n");
			printf("El rey del norte te ofrece un trato, si le das la mitad de tu ejercito, ellos te permitiran negociar mas alla de tus fronteras\n");
			printf("[1] = 'Si, acepto el trato'<--- [+50 Dinero] [-50 Ejercito]\n");
			printf("[2] = 'No me parece sabio aceptar '<--- [+20 Ejercito] [-50 Dinero]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
			
				*mon = *mon + 50;
				*arm = *arm - 50;
				
	    	}else if(event == 2){
	    		*mon = *mon - 50;
	    		*arm = *arm + 20;
			}else{
				printf("\t Opcion incorrecta\n");
			}
		}
	 	    *y = *y + 1;
    	}
    
		if(lang == 2){
			int event = 0;
        	printf("********************\n");
	        printf("Years in power [%d]\n",*y);
	        printf("********************\n");
	        printf("------Resource---------\n");
	        printf("Money [%d]\n",*mon);
			printf("Army [%d]\n", *arm);
			printf("Social influence [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t     ()   \n");
			printf("\t     )(      \n");
			printf("\t  o======o   \n");
			printf("\t     ||      \n");
    		printf("\t     ||       \n");
    		printf("\t     ||   \n");
   			printf("\t  ,c88888888b \n");
    		printf("\t ,88888888888b \n");
    		printf("\t 88888888888Y \n");
    		printf("\t,;;Y888888Y,,, \n");
    		printf("--------Diplomacy--------------\n");
			printf("The king of the north offers you a deal, if you give him half your army, they will allow you to trade beyond your borders\n\n");
			printf("[1] = 'Yes, let's do it''<--- [+50 Money] [-50 Army]\n ");
			printf("[2] = 'I don't sure''<--- [+20 Army] [-50 Money] \n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
			
				*mon = *mon + 50;
				*arm = *arm - 50;
				
	    	}else if(event == 2){
	    		*mon = *mon - 50;
	    		*arm = *arm + 20;
			}else{
				printf("\t That option does not exist\n");
			}
		}
	 		*y = *y + 1;
    	}
    }
}

void event03_diplomacy(int *arm,int *people,int *mon,int *y, int lang){
	system("cls");
	if(*arm > 0 && *people > 0 && *mon > 0){
			if(lang == 1){
			int event = 0;
        	printf("********************\n");
	        printf("Años en el poder[%d]\n",*y);
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [%d]\n",*mon);
			printf("Ejercito [%d]\n", *arm);
			printf("Influencia social [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t     ()   \n");
			printf("\t     )(      \n");
			printf("\t  o======o   \n");
			printf("\t     ||      \n");
    		printf("\t     ||       \n");
    		printf("\t     ||   \n");
   			printf("\t  ,c88888888b \n");
    		printf("\t ,88888888888b \n");
    		printf("\t 88888888888Y \n");
    		printf("\t,;;Y888888Y,,, \n");
    		printf("--------Diplomacia--------------\n");
			printf("Haz una alianza con algun reino\n");
			printf("[1] = 'Alianza con el reino del oeste'<--- [-50 Dinero] [+20 Ejercito] [+15 Influencia social]\n");
			printf("[2] = 'Alianza con el reino del norte  '<--- [+20 Dinero] [-20 Ejercito] [-15 Influencia social]\n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
			
				*mon = *mon - 50;
				*people = *people + 15;
				*arm = *arm + 20;
				
	    	}else if(event == 2){
	    		*mon = *mon + 20;
				*people = *people - 15;
				*arm = *arm - 20;
			}else{
				printf("\t Opcion incorrecta\n");
			}
		}
	 	    *y = *y + 1;
    	}
    
		if(lang == 2){
			int event = 0;
        	printf("********************\n");
	        printf("Years in power [%d]\n",*y);
	        printf("********************\n");
	        printf("------Resource---------\n");
	        printf("Money [%d]\n",*mon);
			printf("Army [%d]\n", *arm);
			printf("Social influence [%d]\n",*people);
			printf("-----------------------\n");
			printf("\t     ()   \n");
			printf("\t     )(      \n");
			printf("\t  o======o   \n");
			printf("\t     ||      \n");
    		printf("\t     ||       \n");
    		printf("\t     ||   \n");
   			printf("\t  ,c88888888b \n");
    		printf("\t ,88888888888b \n");
    		printf("\t 88888888888Y \n");
    		printf("\t,;;Y888888Y,,, \n");
    		printf("--------Diplomacy--------------\n");
			printf("Make an alliance with any kingdom\n\n");
			printf("[1] = 'Alliance with the kingdom of the west'<--- [-50 Money] [-20 Army] [-15 Social influence]\n ");
			printf("[2] = 'Alliance with the kingdom of the north'<--- [+20 Money] [-20 Army] [-15 Social influence] \n\n");
	
			while(event != 1 && event != 2){
			scanf("%d",&event);
			if(event == 1){
			
				*mon = *mon - 50;
				*people = *people + 15;
				*arm = *arm + 20;
				
	    	}else if(event == 2){
	    		*mon = *mon + 20;
				*people = *people - 15;
				*arm = *arm - 20;
			}else{
				printf("\t That option does not exist\n");
			}
		}
	 		*y = *y + 1;
    	}
    }
}



















