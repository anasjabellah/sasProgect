#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void titel_bank();
void meun();

typedef struct{
    
    char cin[8];
    char nom[15] ;
    char prenom[15];
    int montant;

}client;

client clit[150] ;

int indexTabel = 0 ;
int nomber_client ;


/* ======================================= start fontion main ==================================  */  

int main() {


    int menu ;
    
    system("cls");
    returns :
    titel_bank();
    meun();

    do{
        printf("\n\n");
        printf("donnez choix : ");
        scanf("%d", &menu);

        if (menu>8 || menu < 1)
        {
            printf("votre choix doit etre compris entre ( 1 et 8 )  : ");
            scanf("%d", &menu);
        }
        

    } while (menu > 8 || menu < 1);
    

    switch (menu)
    {
    case 1:
        goto returns ;
        break;

    case 2:
        goto returns ;
        break;

    case 3:

        system("cls");
        printf(" ********************************* 3. Operations  *********************************\n\n");

        int menuOperations ;
        returnOperations :
        printf("1. Retrait \n");
        printf("2. Depot \n");
        printf("3. retour a menu \n");

        printf("donnez choix : ");
        scanf("%d", &menuOperations);
            

        switch (menuOperations){
        case  1:
            
            goto returns;
            break;
        case  2:
            
            goto returns;
            break;
        case  3:

            system("cls");
            goto returns ;
            break;

        default:
            printf("votre choix doit etre compris entre ( 1 et 3 )  : ");
            goto returnOperations ;
            break;
        };
    case 4 :
{
        int Affichage ;
        printf("1. Par Ordre Ascendant \n");
        printf("2. Par Ordre Descendant \n");
        printf("3. Par Ordre Ascendant (les comptes bancaires ayant un montant superieur a un chiffre introduit) \n");
        printf("4. Par Ordre Descendant (les comptes bancaires ayant un montant superieur a un chiffre introduit) \n");
        printf("5. retour a menu \n");

        printf("donnez choix : ");
        scanf("%d", &Affichage);

        switch (Affichage)
        {
        case 1:{
            break;
            }
        case 2:
            break;
        
        case 3:
            break;
        
        case 4:
            break;
        
        case 5:
            break;
        
        default:
            break;
        }
 
       break;
}
    default:

        printf("error !! ");
        break;
        
    }

    return 0 ;
}
/* ======================================= start fontion main  ==================================  */  


void titel_bank(){
    printf("===================================================================\n");
    printf("==========================    bank     =============================\n");
    printf("===================================================================\n");
};

void meun(){
    printf("Bonjour qu'est-ce que vous voulez : \n");
    printf("1 .Creer un compte \n");
    printf("2 .Introduire plusieur comptes bancaires :\n");
    printf("3 .Operations :  \n");
    printf("4 .Affichage  \n");
    printf("5 .Fidelisation  \n");
    printf("6 .Quitter  \n");

}