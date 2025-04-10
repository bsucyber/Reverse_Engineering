#include <stdio.h>
#include <string.h>

int main(){
    char userGuess[20];
    int password;

    int keepGoing = 1;
    while(keepGoing != 0){
        char password[] = "aidenthegreat";
        
        printf("Enter the password: ");
        scanf("%s", userGuess);

        if(strcmp(userGuess,password) == 0){
            printf("Great job! You figured it out! \n");
            keepGoing = 0;
        }
        else if(userGuess[0] == 'q'){
            keepGoing = 0;
        }
        else{
            printf("Wrong password! I'm gonna rub some dirt in your eyes. \n");
        }
    }
    return 0;
}