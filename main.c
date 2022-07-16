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
			while(money > 0 && social_influence > 0 && army > 0){
				
				switch(event){
					case 0: event01_army(&army,&social_influence,&money,&year, lang);
							event01_social(&army,&social_influence,&money,&year, lang);
							event01_economy(&army,&social_influence,&money,&year, lang);
							event01_diplomacy(&army,&social_influence,&money,&year, lang); 
							option = 2;
							break;
					case 1: event02_economy(&army,&social_influence,&money,&year, lang);
							event02_diplomacy(&army,&social_influence,&money,&year, lang);
							event02_army(&army,&social_influence,&money,&year, lang); 
							event02_social(&army,&social_influence,&money,&year, lang);	
							option = 0;
							break;
					case 2: event03_diplomacy(&army,&social_influence,&money,&year, lang);
					 		event03_army(&army,&social_influence,&money,&year, lang);	
							event03_economy(&army,&social_influence,&money,&year, lang);
							event03_social(&army,&social_influence,&money,&year, lang);
							option = 1;
							break;		
				}
				death_money( &money, lang);
				death_army(&army,lang);
				death_social_influence(&social_influence,lang);
			}
		}
		Variable_Reset(&army,&social_influence,&money,&year);
		system("COLOR 6");
		event = rand() % 3;
		option=menu(option,lang);
	}
	
}
