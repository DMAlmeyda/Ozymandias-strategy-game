#include "start_end.h"
//Inicio, Tutorial y muertes del jugador
//Story, Tutorial and player deaths
void intro(int *skip, int lang){
	
	
	if(lang == 1){
		while(*skip != 1 && *skip != 2){
			system("cls");
			printf("Quieres saltar la introduccion?\n");
			printf("[1] = Si quiero");
			printf("\t\t[2] = No quiero\n");
			scanf("%d",&*skip);
			if(*skip != 1 && *skip != 2){
				printf("Porfavor selecciona una de las opciones presentadas\n");
				printf("*Presiona cualquier tecla para continuar*\n");
        		system("pause > nul");
			}
		}
	}else if(lang == 2){
		system("cls");
		printf("Do you want to skip the introduction?\n");
		printf("[1] = Yes");
		printf("\t\t[2] = No\n");
		while( *skip != 1 && *skip != 2){
			system("cls");
			printf("Do you want to skip the introduction?\n");
			printf("[1] = Yes");
			printf("\t\t[2] = No\n");
			scanf("%d",&*skip);
			if(*skip != 1 && *skip != 2){
				printf("Please select the correct choice\n");
				system("pause");
			}
		}
	}
	if(*skip == 2 && lang == 1){
		system("cls");
		system("COLOR 4");
		printf("               *********\n");
		printf("             *************\n");
		printf("            *****     *****\n");
		printf("           ***          ***\n");
		printf("          ***             ***\n");
		printf("          **    0     0    **\n");
		printf("          **               **                  ____    \n");
		printf("          ***             ***             //////////   \n");
		printf("          ****           ****        ///////////////   \n");
		printf("          *****         *****    ///////////////////   \n");
		printf("          ******       ******/////////         |  |    \n");
		printf("        *********     ****//////               |  |    \n");
		printf("     *************   **/////*****              |  |    \n");
		printf("    *************** **///***********          *|  |*   \n");
		printf("   ************************************    ****| <=>*  \n");
		printf("  *********************************************|<===>* \n");
		printf("  *********************************************| <==>* \n");
		printf("  ***************************** ***************| <=>*  \n");
		printf("----------------La Muerte------------------------------\n");
		printf("Una vez una alma antigua me dijo\n");
		printf("Hay dos piernas en el desierto\n");
		printf("De piedra y sin tronco\n");
		printf("A su lado cierto rostro yace: la faz rota\n");
		printf("Su frio gesto tirano nos dice que el escultor ha podido salvar la pasion\n");
		printf("Algo ha sido escrito en el pedestal: <<Soy Ozymandias, el gran rey. ¡Mirad mi obra,poderosos!¡Desesperad!\n");
		printf("La ruina es de un naufragio colosal\n");
		printf("A su lado, infinita y legendaria\n");
		printf("Solo queda la arena solitaria\n");
		
		printf("Yo te traje al mundo rey, y yo te voy a a sacar de el \n");
		
		printf("*Presiona cualquier tecla para continuar*\n");
        system("pause > nul");
		
	}
	if(*skip == 2 && lang == 2){
		system("cls");
		system("COLOR 4");
		printf("               *********\n");
		printf("             *************\n");
		printf("            *****     *****\n");
		printf("           ***          ***\n");
		printf("          ***             ***\n");
		printf("          **    0     0    **\n");
		printf("          **               **                  ____    \n");
		printf("          ***             ***             //////////   \n");
		printf("          ****           ****        ///////////////   \n");
		printf("          *****         *****    ///////////////////   \n");
		printf("          ******       ******/////////         |  |    \n");
		printf("        *********     ****//////               |  |    \n");
		printf("     *************   **/////*****              |  |    \n");
		printf("    *************** **///***********          *|  |*   \n");
		printf("   ************************************    ****| <=>*  \n");
		printf("  *********************************************|<===>* \n");
		printf("  *********************************************| <==>* \n");
		printf("  ***************************** ***************| <=>*  \n");
		printf("----------------The Death------------------------------\n");
		printf("Once an antique soul told me\n");
		printf("Near them, on the sand, Half sunk a shattered visage lies\n");
		printf("And wrinkled lip, and sneer of cold command, Tell that its sculptor well those passions read\n");
		printf("On the pedestal, these words appear\n");
		printf("My name is Ozymandias, King of Kings;\n");
		printf("Look on my Works, ye Mighty, and despair!\n");
		printf("Nothing beside remains. Round the decay\n");
		printf("Of that colossal Wreck, boundless and bare\n");
		printf("The lone and level sands stretch far away. \n");
		
		printf("I brought you into the world king, and I'm going to take you out of it \n");
		
		system("pause");
	}
	
}

void tutorial(int skip, int lang){
	if(lang == 1 && skip == 2){
			system("cls");
		    printf("\t TUTORIAL\n");
		    printf("********************\n");
	        printf("Años en el poder[0] <--- *Tiempo que estas en el poder* \n");
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [100]            <---.\n");
			printf("Ejercito [100]          <--- *Si uno de estos indicadores llega a 0 es el fin de tu reino*\n");
			printf("Influencia social [100] <---.\n");
			printf("------Opciones------- <--- *Veras que suma o resta dependiendo tus opciones*\n");
			printf("[1] = [-50 dinero] [+10 Ejercito] <--- Imaginemos que elejimos la opcion 1\n");
			printf("[2] = [-50 ] Influencia social\n");
			
			printf("*Presiona cualquier tecla para continuar*\n");
            system("pause > nul");
            
            system("cls");
            printf("\t TUTORIAL\n");
		    printf("********************\n");
	        printf("Años en el poder[1] <--- *Sube un año por cada desicion*\n");
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Dinero [50]            <--- *La variable cambio y resto 50* \n");
			printf("Ejercito [110]          <---  *La variable cambio y subio 10* \n");
			printf("Influencia social [100] \n");
			printf("------Opciones------- \n");
		    
		    printf("*Presiona cualquier tecla para continuar*\n");
            system("pause > nul");
            
	}else if(lang == 2 && skip == 2){
			system("cls");
			printf("********************\n");
	        printf("Years in power [0]<--- *The time you have been in power*\n");
	        printf("********************\n");
	        printf("------Resource---------\n");
	        printf("Money [100]           <---\n");
			printf("Army [100]            <--- *If one of these indicators reaches 0 it is the end of your kingdom*\n");
			printf("Social influence [100]<---\n");
			printf("------Options----------- <--- *You will see that it adds or subtracts depending on your options* \n");
			printf("[1] = [-50 Money] [+10 Army] <--- Let's imagine that we choose option 1\n");
			printf("[2] = [-50 ] Social Influence\n");
			
			system("pause");
			
			system("cls");
			printf("\t TUTORIAL\n");
		    printf("********************\n");
	        printf("Years in power [0]<--- *Go up one year for each decision*\n");
	        printf("********************\n");
	        printf("------Recursos---------\n");
	        printf("Money [50]            <--- *The variable changed and rest 50* \n");
			printf("Army [110]          <---  *The variable changed and went up 10* \n");
			printf("Social influence [100] \n");
			printf("------Options------- \n");
		    
		    system("pause");
		    
	}
}

void death_money(int *mon, int lang){
	if(*mon <= 0 && lang == 1){
		system("cls");
		system("COLOR 4");
		printf("               *********\n");
		printf("             *************\n");
		printf("            *****     *****\n");
		printf("           ***          ***\n");
		printf("          ***             ***\n");
		printf("          **    0     0    **\n");
		printf("          **               **                  ____    \n");
		printf("          ***             ***             //////////   \n");
		printf("          ****           ****        ///////////////   \n");
		printf("          *****         *****    ///////////////////   \n");
		printf("          ******       ******/////////         |  |    \n");
		printf("        *********     ****//////               |  |    \n");
		printf("     *************   **/////*****              |  |    \n");
		printf("    *************** **///***********          *|  |*   \n");
		printf("   ************************************    ****| <=>*  \n");
		printf("  *********************************************|<===>* \n");
		printf("  *********************************************| <==>* \n");
		printf("  ***************************** ***************| <=>*  \n");
		printf("----------------La muerte------------------------------\n");
		printf("ESTAS MUERTO\n");
		printf("Tu reino cayo en bancarrota, el pueblo y el ejercito destruyeron tu castillo y te condenaron a la guillotina\n");
		printf("*Presiona cualquier tecla para continuar*\n");
        system("pause > nul");
	}else if(*mon <= 0 && lang == 1){
		system("cls");
		system("COLOR 4");
		printf("               *********\n");
		printf("             *************\n");
		printf("            *****     *****\n");
		printf("           ***          ***\n");
		printf("          ***             ***\n");
		printf("          **    0     0    **\n");
		printf("          **               **                  ____    \n");
		printf("          ***             ***             //////////   \n");
		printf("          ****           ****        ///////////////   \n");
		printf("          *****         *****    ///////////////////   \n");
		printf("          ******       ******/////////         |  |    \n");
		printf("        *********     ****//////               |  |    \n");
		printf("     *************   **/////*****              |  |    \n");
		printf("    *************** **///***********          *|  |*   \n");
		printf("   ************************************    ****| <=>*  \n");
		printf("  *********************************************|<===>* \n");
		printf("  *********************************************| <==>* \n");
		printf("  ***************************** ***************| <=>*  \n");
		printf("----------------The Death------------------------------\n");
		printf("YOU ARE DEATH\n");
		printf("Your kingdom went bankrupt, the people and army destroyed your castle.They condened you to go to the guillotine\n");
		system("pause");
	}
}

void death_army(int *army, int lang){
	if(*army <= 0 && lang == 1){
		system("cls");
		system("COLOR 4");
		printf("               *********\n");
		printf("             *************\n");
		printf("            *****     *****\n");
		printf("           ***          ***\n");
		printf("          ***             ***\n");
		printf("          **    0     0    **\n");
		printf("          **               **                  ____    \n");
		printf("          ***             ***             //////////   \n");
		printf("          ****           ****        ///////////////   \n");
		printf("          *****         *****    ///////////////////   \n");
		printf("          ******       ******/////////         |  |    \n");
		printf("        *********     ****//////               |  |    \n");
		printf("     *************   **/////*****              |  |    \n");
		printf("    *************** **///***********          *|  |*   \n");
		printf("   ************************************    ****| <=>*  \n");
		printf("  *********************************************|<===>* \n");
		printf("  *********************************************| <==>* \n");
		printf("  ***************************** ***************| <=>*  \n");
		printf("----------------La muerte------------------------------\n");
		printf("ESTAS MUERTO\n");
		printf("Tu ejercito hace un golpe de estado, tu fuieste exiliado y tu muerte fue solitaria\n");
		printf("*Presiona cualquier tecla para continuar*\n");
        system("pause > nul");
	}else if(*army <= 0 && lang == 2){
		system("cls");
		system("COLOR 4");
		printf("               *********\n");
		printf("             *************\n");
		printf("            *****     *****\n");
		printf("           ***          ***\n");
		printf("          ***             ***\n");
		printf("          **    0     0    **\n");
		printf("          **               **                  ____    \n");
		printf("          ***             ***             //////////   \n");
		printf("          ****           ****        ///////////////   \n");
		printf("          *****         *****    ///////////////////   \n");
		printf("          ******       ******/////////         |  |    \n");
		printf("        *********     ****//////               |  |    \n");
		printf("     *************   **/////*****              |  |    \n");
		printf("    *************** **///***********          *|  |*   \n");
		printf("   ************************************    ****| <=>*  \n");
		printf("  *********************************************|<===>* \n");
		printf("  *********************************************| <==>* \n");
		printf("  ***************************** ***************| <=>*  \n");
		printf("----------------The Death------------------------------\n");
		printf("YOU ARE DEATH\n");
		printf("Your army made coup, you was exiled and your death was lonely\n");
		system("pause");
	}
	
}

void death_social_influence(int *people, int lang){
	if(*people <= 0 && lang == 1){
		system("cls");
		system("COLOR 4");
		printf("               *********\n");
		printf("             *************\n");
		printf("            *****     *****\n");
		printf("           ***          ***\n");
		printf("          ***             ***\n");
		printf("          **    0     0    **\n");
		printf("          **               **                  ____    \n");
		printf("          ***             ***             //////////   \n");
		printf("          ****           ****        ///////////////   \n");
		printf("          *****         *****    ///////////////////   \n");
		printf("          ******       ******/////////         |  |    \n");
		printf("        *********     ****//////               |  |    \n");
		printf("     *************   **/////*****              |  |    \n");
		printf("    *************** **///***********          *|  |*   \n");
		printf("   ************************************    ****| <=>*  \n");
		printf("  *********************************************|<===>* \n");
		printf("  *********************************************| <==>* \n");
		printf("  ***************************** ***************| <=>*  \n");
		printf("----------------La muerte------------------------------\n");
		printf("ESTAS MUERTO\n");
		printf("Tu ejercito hace un golpe de estado, tu fuiste exiliado y tu muerte fue solitaria\n");
		printf("*Presiona cualquier tecla para continuar*\n");
        system("pause > nul");
	}else if(*people <= 0 && lang == 1){
		system("cls");
		system("COLOR 4");
		printf("               *********\n");
		printf("             *************\n");
		printf("            *****     *****\n");
		printf("           ***          ***\n");
		printf("          ***             ***\n");
		printf("          **    0     0    **\n");
		printf("          **               **                  ____    \n");
		printf("          ***             ***             //////////   \n");
		printf("          ****           ****        ///////////////   \n");
		printf("          *****         *****    ///////////////////   \n");
		printf("          ******       ******/////////         |  |    \n");
		printf("        *********     ****//////               |  |    \n");
		printf("     *************   **/////*****              |  |    \n");
		printf("    *************** **///***********          *|  |*   \n");
		printf("   ************************************    ****| <=>*  \n");
		printf("  *********************************************|<===>* \n");
		printf("  *********************************************| <==>* \n");
		printf("  ***************************** ***************| <=>*  \n");
		printf("----------------The Death------------------------------\n");
		printf("YOU ARE DEATH\n");
		printf("Your people storm your castle and they set fire to your body while they were celebrating\n");
		system("pause");
	}
}
