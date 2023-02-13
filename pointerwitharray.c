#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int *p; // address
//     //  p=90;//wrong
//     int x;
//     x = 90;

//     // & =-> address

//     p = &x;
//     printf("\n%d", x);  // x->90
//     printf("\n%d", p);  // x address
//     printf("\n%d", *p); // value
// }
void display(int *p, size_t size)
{
    int i;
    printf("\nArray Data:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", p[i]);
    }
}
void displayD(double *p, size_t size)
{
    int i;
    printf("\nArray Data:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", p[i]);
    }
}
double *duplicate(double *a, size_t size)
{
    double *x;
    int i;
    x = calloc(size, sizeof(double));

    for (i = 0; i < size; i++)
    {
        x[i] = a[i];
    }

    return x;
}
int sig7(int a[],int size){
    int i;
    int cnt=0;
    for(i=0;i<size;i++){
        if(a[i]%10 == 7){
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int *a, i;
    int totalElelemt = 5;
    double *z;
    // calloc malloc
    a = calloc(totalElelemt, sizeof(int));         // 4byte =>20 byte
    a = (int *)malloc(sizeof(int) * totalElelemt); // 20 byte

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter value");
        scanf("%d", &a[i]);
    }
    printf("\nArray Data:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    display(a, totalElelemt);

    z = duplicate(a, totalElelemt);
    displayD(z, totalElelemt);
}

//12 67 54 34 97 

//2 
