#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void titel_bank();
void meun();
void retirer();
void Depot();
void tempnams();
void descendants();
void AscendentChiffres();
void DescendantChiffres();

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
        system("cls");
        printf(" ********************************* 1.Creer un user *********************************\n");

        printf("\necrivez votre cin :");
        scanf("%s",clit[indexTabel].cin);

        printf("\necrivez votre nom :");
        scanf("%s",clit[indexTabel].nom);

        printf("\necrivez votre prenom :");
        scanf("%s",clit[indexTabel].prenom);

        printf("\necrivez votre montant :");
        scanf("%d",&clit[indexTabel].montant);

        indexTabel++;

        goto returns ;
        break;

    case 2:

        system("cls");
        printf(" ********************************* 2.Introduire plusieur comptes bancaires *********************************\n\n\n");

        int nomber_client , nombers = 1  ;
        int i , lastIndex = indexTabel ;

        printf("entrez le nombre de client : \n\n\n");
        scanf("%d", &nomber_client);


        for (int i = lastIndex ; i < nomber_client + lastIndex  ; i++)
        {

            printf("Veuillez remplir les champs: %d \n\n\n", nombers );

            printf("\necrivez votre cin :");
            scanf("%s",clit[indexTabel].cin);

            printf("\necrivez votre nom :");
            scanf("%s",clit[indexTabel].nom);

            printf("\necrivez votre prenom :");
            scanf("%s",clit[indexTabel].prenom);

            printf("\necrivez votre montant :");
            scanf("%d",&clit[indexTabel].montant);

            indexTabel = indexTabel + 1 ;
            nombers += 1 ;

        }

        goto returns ;
        break;

    case 3:

        system("cls");
        printf(" ********************************* 3. Operations  *********************************\n\n");

        int menuOperations ;
        returnOperations :

        printf("1. Retrait \n\n");
        printf("2. Depot \n\n");
        printf("3. retour a menu \n\n");

        printf("donnez choix : ");
        scanf("%d", &menuOperations);
            

        switch (menuOperations){
        case  1:
            system("cls");
            retirer();
            goto returns;
            break;
        case  2:
            system("cls");
            Depot();
            goto returns;
            break;
        case  3:

            system("cls");
            goto returns ;
            break;

        default:
            system("cls");
            printf("votre choix doit etre compris entre ( 1 et 3 )  : ");
            goto returnOperations ;
            break;
        };

    case 4 :{

        system("cls");
        int Affichage ;
        printf("1. Par Ordre Ascendant \n\n");
        printf("2. Par Ordre Descendant \n\n");
        printf("3. Par Ordre Ascendant (les comptes bancaires ayant un montant superieur a un chiffre introduit) \n\n");
        printf("4. Par Ordre Descendant (les comptes bancaires ayant un montant superieur a un chiffre introduit) \n\n");
        printf("5. retour a menu \n\n");

        printf("donnez choix : ");
        scanf("%d", &Affichage);

        switch (Affichage)
        {
        case 1:{
            system("cls");
            tempnams();
                for( i=0 ; i < indexTabel ; i++){

                    printf("Client %d:\n",i+1);
                    printf("CIN : %s\n",clit[i].cin);
                    printf("Nom : %s\n",clit[i].nom);
                    printf("Prenom : %s\n",clit[i].prenom);
                    printf("Montant : %d\n",clit[i].montant);
                    printf("\n");
                }
            break;
            }
        case 2:
            system("cls");
            descendants();

                for( i=0 ; i < indexTabel ; i++){

                    printf("Client %d:\n",i+1);
                    printf("CIN : %s\n",clit[i].cin);
                    printf("Nom : %s\n",clit[i].nom);
                    printf("Prenom : %s\n",clit[i].prenom);
                    printf("Montant : %d\n",clit[i].montant);
                    printf("\n");

                }
            break;
        
        case 3:
            system("cls");
            AscendentChiffres();
            goto returns ;
            break;
        
        case 4:
            system("cls");
            DescendantChiffres();
            goto returns ;
            break;
        
        case 5:
            system("cls");
            goto returns ;
            break;
        
        default:
            printf("votre choix doit etre compris entre ( 1 et 5 )  : ");
            system("cls");
            goto returns ;
            break;
        }
 
       break;
    }

    case 5:

        descendants();
        for( i=0 ; i < 3 ; i++){ 

            printf("Client %d:\n",i+1);
            printf("CIN : %s\n",clit[i].cin);
            printf("Nom : %s\n",clit[i].nom);
            printf("Prenom : %s\n",clit[i].prenom);
            printf("Montant : %d\n", clit[i].montant=clit[i].montant * 0.013  );
            printf("\n");
            
        }

        

        break;

    case 6:
        exit(0);
        break;
    default:

        printf("error !! ");
        break;
        
    }

    return 0 ;
}
/* ======================================= start fontion main  ==================================  */  

/* ======================================= start fontion void ==================================  */  

void titel_bank(){
    printf("===================================================================\n");
    printf("==========================    bank     =============================\n");
    printf("===================================================================\n");
};

void meun(){
    printf("Bonjour qu'est-ce que vous voulez : \n\n");
    printf("1 .Creer un compte \n\n");
    printf("2 .Introduire plusieur comptes bancaires :\n\n");
    printf("3 .Operations :  \n\n");
    printf("4 .Affichage  \n\n");
    printf("5 .Fidelisation  \n\n");
    printf("6 .Quitter  \n\n");
}

void retirer(){
    
    int  i ;
    int conter = indexTabel ;
    char cinUser[8] ;
    float nomberRetrait ;

    printf("entre votre Cin :\t");
    scanf("%s",&cinUser);

    for( i = 0 ; i <conter ; i++ )
    {
        if(strstr(cinUser ,clit[i].cin))
        {
            printf("combien : ");
            scanf("%f",&nomberRetrait);

            if(nomberRetrait > clit[i].montant){

                printf("\n impossible votre sold inferieur \n");
                break;

            }

            clit[i].montant -= nomberRetrait;
            printf("Montane : %d \n ",clit[i].montant);
            break;
        }

    }
}


void Depot(){

    int  i ;
    int  conter = indexTabel ;
    char cinUser[8] ;
    float nomberRetrait ;

    printf("entre votre Cin :\t");
    scanf("%s",&cinUser);

    for( i = 0 ; i < conter ; i++ )
    {
        if(strcmp(clit[i].cin , cinUser) == 0 )
        {
            printf("combien : ");
            scanf("%f",&nomberRetrait);

            if(nomberRetrait > clit[i].montant){

                printf("\n impossible votre sold inferieur \n");
                break;

            }

            clit[i].montant += nomberRetrait;
            printf("Montane : %d \n ",clit[i].montant);
            break;
        }

    }
}

void tempnams(){

        client temporaire;
        int i , j ;

    for (i=0 ; i < indexTabel; i++)
        for (j=0 ; j < indexTabel ; j++)
        
        
            if (clit[i].montant < clit[j].montant ) {

                temporaire = clit[i];
                clit[i] = clit[j];
                clit[j] = temporaire ;
            }
    

}

void descendants(){

        client temporaire;
        int i , j ;

    for (i=0 ; i < indexTabel; i++)
        for (j=0 ; j < indexTabel ; j++)
        
        
            if (clit[i].montant > clit[j].montant ) {

                temporaire = clit[i];
                clit[i] = clit[j];
                clit[j] = temporaire ;
            }
}



/* ======================================= end fontion void ==================================  */


void AscendentChiffres(){
    client temporaire[30];
    int i,j=0, tabalcased = 0;
    int chiffres;
    printf("Entrez Un Montant Pour Vous Montrer Les Plus Gros clientes Bancaires : ");
    scanf("%d", &chiffres);

    for(i = 0; i < indexTabel ; i++){
      if(clit[i].montant >= chiffres){
          temporaire[tabalcased] = clit[i];
          tabalcased++;
      }
    }
    client temp;
    for(i = 0; i < tabalcased; i++)
      for(j = 0; j < tabalcased-1; j++)

        if(temporaire[i].montant < temporaire[j].montant){
          temp = temporaire[i];
          temporaire[i] = temporaire[j];
          temporaire[j]= temp;
        }
    
      for(i = 0; i < tabalcased; i++){

            printf("CIN : %s \n", temporaire[i].cin);
            printf("Nom : %s \n", temporaire[i].nom);
            printf("Prenom : %s \n", temporaire[i].prenom);
            printf("Montant : %.d DH \n\n", temporaire[i].montant);

      }
}

void DescendantChiffres(){
    client temporaire[30];
    int i,j=0, tabalcased = 0;
    int chiffres;

    printf("Entrez Un Montant Pour Vous Montrer Les Plus Gros clientes Bancaires : ");
    scanf("%d", &chiffres);

    for(i = 0; i < indexTabel ; i++){
      if(clit[i].montant >= chiffres){
          temporaire[tabalcased] = clit[i];
          tabalcased++;
      }
    }
    client temp;
    for(i = 0; i < tabalcased; i++)
      for(j = 0; j < tabalcased-1; j++)
        if(temporaire[i].montant > temporaire[j].montant){
          temp = temporaire[i];
          temporaire[i] = temporaire[j];
          temporaire[j]= temp;
          }
    
      for(i = 0; i < tabalcased; i++){

        printf(" CIN : %s \n", temporaire[i].cin);
        printf(" Nom : %s \n", temporaire[i].nom);
        printf(" Prenom : %s \n", temporaire[i].prenom);
        printf(" Montant : %d DH \n\n", temporaire[i].montant);

      }
}