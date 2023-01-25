#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void process(double x, double y, double z, char *choice)
{
    printf("\n%lf %lf %lf", x, y, z);
}
int main()
{
    char choice[30]; // quit  exit bye SSS ASA
    double x, y, z;

    while (1)
    {
        printf("\n->");
        fflush(stdin);
         scanf("%[^\n]s",&choice); //XXX 12 23 34
  //      scanf("%s", &choice); // bye

        strupr(choice);
        // printf("\n%s ", choice);
        if (strcmp(choice, "BYE") == 0 || strcmp(choice, "QUIT") == 0 || strcmp(choice, "EXIT") == 0)
        {
            exit(0);
        }
        else if (strcmp(choice, "AAA") == 0)
        {
            printf("\nUnknown command triangle format 'AAA'");
        }
        else if (strcmp(choice, "SSS") == 0 || strcmp(choice, "ASA") == 0 || strcmp(choice, "SSA") == 0 || strcmp(choice, "SAS") == 0)
        {
            scanf("%lf %lf %lf", &x, &y, &z);
            if (x < 0)
            {
                x = x * -1;
            }
            if (y < 0)
            {
                y = y * -1;
            }
            if (z < 0)
            {
                z = z * -1;
            }
            process(x, y, z, choice);
        }
        else
        {
            printf("Bad command: Format # # #");
            printf("\nwhere Format = SSS|SAS|ASA|SSA");
            printf("\n      # = a real number\n");
        }
    }
}