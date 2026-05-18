#include<stdio.h>
// void pattern_print(int n){
//     for(int i = 0; i<n;i++){
//         for(int j = 0; j<=i;j++){
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }

void printStars(int n){
    if( n == 0 ){
        return ;
    }
    printf(" * ");
    printStars(n-1);
}

void printPattern(int line,int n){
    if(line>n){
        return ;
    }
    printStars(2 * line - 1);

    printf("\n");

    printPattern(line + 1,n);
}

void main(){
    int n = 3;
    // pattern_print( n);
    printPattern(1,n);
    
}