#include <stdio.h>

int main()
{

    int a = 10;
    float roi = 10.75;
    printf("hi\b\b1234");
    printf("\n a = %d", a);
    printf("\n num = %d", 125);
    printf("\n percentage = %f", 12.25);
    printf("\nRoI = %f", roi);
    printf("\nRoI = %.2f", roi);
    printf("\nRoI = %.3f", roi);

    printf("\nRoyalEducation");
    printf("\nName = %s", "RoyalEducation");
    printf("\nName = %.5s", "RoyalEducation");
    printf("\nName = %20.5s", "RoyalEducation");
    // _ _ _ _ _ _ _ _ _ _ _ _ _ Royal
    printf("\nName = %5s", "RoyalEducation");
    printf("\nName =>%20s", "royal");
    printf("\nName =>%-20s%s\n", "royal", "royal");
    printf(":%*s:\n", 30, "Hello");

    printf("\n>>%*s<<", 25, "RoyalEducation");

    printf("\n>>%*.*s<<", 25, 3, "RoyalEducation");

    printf("\n>>%*s<<", -25, "RoyalEducation");

    printf("\n>>%*.*s<<", -25, 3, "RoyalEducation");

    printf("\n----------------------\n");
    printf("\n>>%f<<",12345.12345);
    printf("\n>>%.2f<<",12345.12345);
    printf("\n>>%10.2f<<",12345.12345);//total 10 space -> dot and 2 decimal 
    printf("\n>>%4.2f<<",12345.12345);//total 10 space -> dot and 2 decimal 
    printf("\n>>%5.2f<<",12345.12345);//total 10 space -> dot and 2 decimal 
    
    printf("\n----------------------\n");
    printf("\n>>%g<<",12345.12345);
    printf("\n>>%.2g<<",12345.12345);
    printf("\n>>%10.2g<<",12345.12345);//total 10 space -> dot and 2 decimal 
    printf("\n>>%4.2g<<",12345.12345);//total 10 space -> dot and 2 decimal 
    printf("\n>>%5.2g<<",12345.12345);//total 10 space -> dot and 2 decimal 
    
    
    return 0;
}