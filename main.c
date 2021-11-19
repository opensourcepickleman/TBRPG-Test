#include <stdio.h>

int main()
{
    int number;
    
    printf("Welcome to TBRPG-Test, aka Text Based Role Playing Game-Test\n");
    char name[30];
    printf("enter name: ");
    fgets(name, sizeof(name), stdin);  // reads name, counts size of name.
    printf("name: ");
    puts(name);    // displays name
    printf("Which class do you want to select?\n");
    printf("1. Berzerker\n");
    printf("2. Mage\n");
    scanf("%d", &number); //class selecter, no change as of now
    if (number == 1){
        printf("You selected Berzerker");
    }
    if (number == 2){
        printf("You selected Mage");
    }
    
    
}
