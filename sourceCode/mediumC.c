#include <stdio.h>

int main(){
    char userGuess[20];
    int currentAscii;
    int combinedAscii;


    int keepGoing = 1;
    while(keepGoing != 0){
        combinedAscii = 0;
        int length = 0;

        printf("Enter the password: ");
        scanf("%s", userGuess);

        for(int i = 0; userGuess[i] != '\0'; i++){
            currentAscii = userGuess[i];
            combinedAscii += currentAscii;
            length++;
        }
        if(length >= 5 && combinedAscii == 600){
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