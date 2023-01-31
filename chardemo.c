#include <stdio.h>

int main()
{
    int i;
    char c;
    int count=0;
    char name[20]; // name -> hold 20 values -> character type
    c = 'V';
    // vansh
    printf("\n%c", c);

    printf("\nEnter name");
    // scanf("%s",&name);
    gets(name); // royal

    printf("\nName = %s", name);

    printf("\n%c", name[0]); // r
    printf("\n%c", name[1]); // o
    printf("\n%c", name[2]); // y
    printf("\n%c", name[3]); // a
    printf("\n%c", name[4]); // l

    printf("\ncontent\n");
    for(i=0;name[i]!='\0';i++){
        if(name[i] >= 'a' && name[i] <= 'z'){
            count++;
            name[i] = name[i] - 32;
        }
        printf("\n%c",name[i]);
    }

    printf("\ntotal lower = %d",count);

    return 0;
}

// name[0] name[1] name[2] name[3] ...... name[19]
// 0  1 2 3 4 .. 19 ->index

// name[0] = 'r'
// name[1] = 'o'
// name[2] = 'y'
// name[3] = 'a'
// name[4] = 'l'


//a => 97 , b => 98
//A => 65 , B => 62 


