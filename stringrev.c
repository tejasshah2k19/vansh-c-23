#include<stdio.h>

int main(){
    int i;
    char n[20];
    int len=0;
    //royal
    printf("\nEnter name");
    gets(n);

    for(i=0;n[i]!='\0';i++){
        len++;//
    }

    printf("\nTotal Character = %d\n",len);

    for(i=len-1;i>=0;i--){
        printf("%c",n[i]);
    } 
    return 0;
}

//royal -> 5 -> 4
//edu -> 3 -> 2
//canada -> 6 -> 5
