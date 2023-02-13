#include <stdio.h>

// no return

// void - return type --> no return
//() -> argument parameter --> no argument no parameter

// no return no argument
void add()
{

    int a, b, c;
    printf("\nEnter two numbers");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("\nAddition = %d", c);
}
// no return no argument
void sub(int a, int b)
{
    int c = a - b;
    printf("\nsub = %d", c);
}
unsigned mul(unsigned int a, int b)
{
    int c = a * b;
    return c;
}
int main()
{
    int x, y, ans;
    // scan
    add();
    sub(10, 5); // x,y
    ans = mul(5, 6);
    printf("\n%d", ans);
    return 0;
}