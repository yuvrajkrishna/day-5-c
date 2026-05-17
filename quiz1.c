#include<stdio.h>

int area_square(int a){
        int area = a*a;
        return area;
    }

int main(){
    int side;
    printf("Enter the side of the square to Get its Area : \n");
    scanf("%d",&side);
    printf("Area of square is : %d ",area_square(side));
    return 0;
}

