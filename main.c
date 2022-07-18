#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#include<string.h>
#include "event.h"
#include "start_end.h"
#include "menu_functions.h"


main(){
	int money = 100;
	int social_influence = 100;
	int army = 100;
	int year = 0;
	int lang;
	int option;
	int event;
	int skip = 0;
	int year1 = 0;
	int year2 = 0;
	int year3 = 0;
	int score_op = 0;
	int size_name = 0;
	int aux = 0;
	char name[10];
	char name1[10];
	char name2[10];
	char name3[10];
	
	language(&lang);
	system("COLOR 6");
	option=menu(option,lang);
	srand(time(NULL));
	event = rand() % 3;
	while(option != 0){
		if(option == 1){
			intro(&skip,lang);
			system("COLOR 6");
			tutorial(skip,lang);
			printf("[NAME][NOMBRE] <= 5 Letters/Letras\n");
			scanf("%s",&name);
			size_name = strlen(name);
			while(size_name > 5){
				printf("Please try again/Intenta de nuevo\n");
				scanf("%s",&name);
				size_name = strlen(name);
			}
			while(money > 0 && social_influence > 0 && army > 0){
				
				switch(event){
					case 0: event01_army(&army,&social_influence,&money,&year, lang);
							event01_social(&army,&social_influence,&money,&year, lang);
							event01_economy(&army,&social_influence,&money,&year, lang);
							event01_diplomacy(&army,&social_influence,&money,&year, lang); 
							event = 2;
							break;
					case 1: event02_economy(&army,&social_influence,&money,&year, lang);
							event02_diplomacy(&army,&social_influence,&money,&year, lang);
							event02_army(&army,&social_influence,&money,&year, lang); 
							event02_social(&army,&social_influence,&money,&year, lang);	
							event = 0;
							break;
					case 2: event03_diplomacy(&army,&social_influence,&money,&year, lang);
					 		event03_army(&army,&social_influence,&money,&year, lang);	
							event03_economy(&army,&social_influence,&money,&year, lang);
							event03_social(&army,&social_influence,&money,&year, lang);
							event = 1;
							break;		
				}
				death_money( &money, lang);
				death_army(&army,lang);
				death_social_influence(&social_influence,lang);
				if(money <= 0 || army <= 0 || social_influence <= 0){
					score_op++;
					switch(score_op){
						case 1: strcpy(name1, name);
								year1 = year;
				        		break;
						case 2: strcpy(name2, name); 
								year2 = year;
				            	break;       
						case 3: strcpy(name3, name);
								year3 = year;
								break;
						default: aux = year;
								 break;		        
					}	
				}
				
			}
		}else if(option == 2){
			score(name,name1,name2,name3,year1,year2,year3,score_op,aux);
		}
		Variable_Reset(&army,&social_influence,&money,&year);
		system("COLOR 6");
		event = rand() % 3;
		option=menu(option,lang);
	}
	
}
