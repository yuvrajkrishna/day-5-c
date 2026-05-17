#include<stdio.h>

int average_of_three(int a , int b , int c){
    return  printf("The average of 3 Number is : %d",(a+b+c)/3);
}
int main()

{
    int num1,num2,num3;
    printf("Enter the number 1 :");
    scanf("%d",&num1);
    printf("Enter the number 2 :");
    scanf("%d",&num2);
    printf("Enter the number 3 :");
    scanf("%d",&num3);
    average_of_three(num1,num2,num3);
    return 0;
}