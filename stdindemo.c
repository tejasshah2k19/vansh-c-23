#include<stdio.h>
#include<ctype.h>

int main(){
    char c; 
    
    
    // while(c = getchar()){ 
    //     putchar(c); 
    // }

    while(c != EOF ){//ctrl+Z
        c = getchar();
        putchar(toupper(c));
    }
    return 0;
}
