#include<stdio.h>

int sum_of_natural_num(int num){
    if(num == 0){
        return 0;
    }
    return  num + sum_of_natural_num(num-1);
}

int main()

{
    int num;
    printf("Enter number to get Sum of its Natural Number : \n");
    scanf("%d",&num);
    printf("The sum of %d Natural Number is : %d ",num,sum_of_natural_num(num));
    
    return 0;
}