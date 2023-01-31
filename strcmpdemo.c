#include<stdio.h>

int main(){
    char n1[20],n2[20];
    int len1=0,len2=0;
    int i;
    int same=1;//same
    printf("\nEnter two name");
    gets(n1);
    gets(n2);

    printf("\nName1 = %s",n1);
    printf("\nName2 = %s",n2);

    // now we want to comapre both are same or not 

    //first we find size of both string 
    for(i=0;n1[i]!='\0';i++){
        len1++;
    }
    for(i=0;n2[i]!='\0';i++){
        len2++;
    }
    printf("\nLength of name1 = %d",len1);
    printf("\nLength of name2 = %d",len2);
       
    if(len1 != len2 ){
        printf("\nStrings are not same");
    }else{
        //compare individual character of both string 
        for(i=0;i<len1;i++){
            if(n1[i] != n2[i]){
                same =0;
            }
        }

        if(same == 0 ){
            printf("\nStrings are not same");        
        }else{
            printf("\nStrings are same");
        }
    }
    return 0;
}