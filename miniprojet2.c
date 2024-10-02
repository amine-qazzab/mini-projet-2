// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_contact 70
#define nom_contact 20
#define phone_contact 25
#define email_contact 60

typedef struct {
char nom[nom_contact];
char phone[phone_contact];
char email[email_contact];
} contact;

contact contacts[max_contact];
int contact_count = 0;

void ajouter_contact(){
    if (contact_count >= max_contact) { 
    printf("mémoire saturée\n");
    return;
}
printf("entrez le nom de contact :  ");
scanf("%s" , contacts[contact_count].nom);
printf("entrez le numéro de téléphone  :  ");
scanf("%s" , contacts[contact_count].phone);
printf("entrez l'adress mail :  ");
scanf("%s" , contacts[contact_count].email);
contact_count++;
printf("le contact ajouter avec succès.\n");
}
void afficher_contact(){
    if(contact_count == 0){
    printf("le carnet est vide\n");
    }else{
    printf("-----la liste des contacts-----\n");
    for(int i=0; i<contact_count; i++){
        printf("nom : %s , phone : %s , email : %s\n" , contacts[i].nom, contacts[i].phone, contacts[i].email);
    }
}
}
void rechercher_contact(){
    char nom[nom_contact];
    printf("entrez le nom de contact recherche : ");
    scanf("%s" , nom);
    for (int i=0; i<contact_count; i++){
    if (strcmp(contacts[i].nom, nom) == 0){
        printf("contact trouvé : nom : %s , phone : %s , email: %s\n" , contacts[i].nom, contacts[i].phone, contacts[i].email);
        return;
    }
    }
    printf("contact non trouvé\n");

}
void modifier_contact(){
    char nom[nom_contact];
    printf("entrez le nom de contact a modifier :");
    scanf("%s" , nom);
    for (int i=0; i<contact_count; i++){
        if(strcmp(contacts[i].nom , nom) == 0){
            printf("entrez le nouveau nom de contact : ");
            scanf("%s" , contacts[i].nom);
            printf("entrez la nouvelle numéro de téléphone : ");
            scanf("%s" , contacts[i].phone);
            printf("entrez la nouvelle email adress de contact : ");
            scanf("%s" , contacts[i].email);
            return;
        }
    }
            printf("contact non trouvé.");
        }
        
void supprimer_contact(){
    char nom[nom_contact];
    printf("entrez le nom de contact veut supprimer : ");
    scanf("%s" ,nom);
    for (int i=0; i<contact_count; i++){
        if (strcmp(contacts[i].nom, nom) == 0){
    for (int j=i; j<contact_count; j++){
        contacts[j] = contacts[j + 1];
    }
    contact_count--;
    printf("contact supprimé avec succès.\n");
    return;
        }
    }
    }
    
        

int main() {
    int choix;
    do {
        printf("------carnet de contact------\n");
        printf("1.ajouter un contact\n");
        printf("2.rechercher un contact\n");
        printf("3.modifier un contact\n");
        printf("4.supprimer un contact\n");
        printf("5.afficher tous les contacts\n");
        printf("6.quitter\n");
        printf("-----------------------------\n");
        printf("choisissez un option : ");
      scanf("%d" , &choix);
    
switch(choix){
        case 1 : 
        ajouter_contact();
        break;
        case 2 : 
        rechercher_contact();
        break;
        case 3 :
        modifier_contact();
        break;
        case 4 : 
        supprimer_contact();
        break;
        case 5 : 
        afficher_contact();
        break;
        case 6 :
        printf("au revoir!\n");
        break;
        default :
        printf("choix invalide , réessayer.\n");
        break;
    }
}while (choix != 6);

    return 0;
}
