#include<stdio.h>
#define MAX_SIZE 20

int main()
{
    int i;
    char name[MAX_SIZE]={0};
    printf("\nEnter name");
    scanf("%s",&name);

    printf("\nName = %s",name);//vansh

    for(i=0;i<5;i++){ // 0 1 2 3 4
        printf("\n%c",name[i]);//v a n s h 
    }

    //4 3 2 1 0 
    for(i=4;i>=0;i--){
         printf("\n%c",name[i]);
    }


    //palindrome ?
    // car - rac 
    // madam - madam 
    // race - ecar 
    // vansh - hsnav

    //v a n s h 
    //
    
    //h s n a v 

    //0


    return 0;
}