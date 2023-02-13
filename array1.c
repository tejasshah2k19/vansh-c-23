#include<stdio.h>

int main(){
    int a[5]; //5 values 
    int i;
    //a[0] a[1] a[2] a[3] a[4]
    //0 1 2 3 4 -> index 
    //always start with 0 and ends with size-1 

    printf("\nEnter 5 values");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("\n Elements in Array \n");
    for(i=0;i<5;i++){
        printf("\n%d",a[i]);
    }
    return 0;
}