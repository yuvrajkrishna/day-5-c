#include<stdio.h>

int main(){

    int num;
    int fzero = 0;
    int fone = 1;
    int last;

    printf("Enter the end point : ");
    scanf("%d",&num);

    if(num == 1){
        printf("%d", fzero);
    }

    else if(num == 2){
        printf("%d", fone);
    }

    else{

        for(int i = 3; i <= num; i++){

            last = fzero + fone;

            fzero = fone;
            fone = last;

        }

        printf("%d", last);
    }

    return 0;
}