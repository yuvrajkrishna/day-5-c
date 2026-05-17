#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int guess;
    srand(time(0));
    int random = rand() % 100 + 1;
    while(guess!=random){
        printf("Guess the number : \n");
        scanf("%d",&guess);
        if(guess > random){
            printf("Guessed Number is too Big\n");
        }
        else if (guess < random){
            printf("Guessed Number is Small\n");
        }
        else{
            printf("Correct Guess \n");
        }
    }
    

    return 0;
}