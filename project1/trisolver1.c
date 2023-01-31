#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#define PI 3.1415926
 

//check input string contains only digit - return 0 if not digits 
int digitOnly(char arg[])
{
    int i;
    for (i = 0; arg[i] != '\0'; i++)
    {
        if (!isdigit(arg[i]))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char input[30];//read entire string 
    char command[10];//store command - SSS SAS  
    char arg1[10];//store first value 
    char arg2[10];
    char arg3[10];
    int i, j = 0;
    int count = 0;
    double aS, bS, cS; //store sides
    double aA, bA, cA; //store angle
    double val1, val2, val3; 
    double perimeter, s;//store perimeter
    double area;//area 
    double D, max;
    char type[60];

    while (1)
    {
        max = 0;
        j = 0;
        count = 0;
        strcpy(input, " ");
        printf("\n->");
        fflush(stdin);
        scanf("%[^\n]s", &input);
        strupr(input);
        
        for (i = 0; input[i] != '\0'; i++)
        {

            if (input[i] == ' ')
            {
                // command arg1 arg2 arg3s
                if (count == 0)
                {
                    command[j] = '\0';
                }
                else if (count == 1)
                {
                    arg1[j] = '\0';
                }
                else if (count == 2)
                {
                    arg2[j] = '\0';
                }
                else if (count == 3)
                {
                    arg3[j] = '\0';
                }
                count++;

                j = 0;
            }
            else
            {
                if (count == 0)
                {
                    command[j++] = input[i]; // s
                }
                else if (count == 1)
                {
                    arg1[j++] = input[i]; //
                }
                else if (count == 2)
                {
                    arg2[j++] = input[i];
                }
                else if (count == 3)
                {
                    arg3[j++] = input[i];
                }
            }
        }
        arg3[++j] = '\0';

        if (strcmp(command, "BYE") == 0 || strcmp(command, "QUIT") == 0 || strcmp(command, "EXIT") == 0)
        {
            exit(0);
        }
        else if (count < 3)
        {
            printf("Bad command: Format # # #");
            printf("\nwhere Format = SSS|SAS|ASA|SSA");
            printf("\n      # = a real number\n");
        }
        else if (count == 3)
        {
            // logic

            val1 = atof(arg1);
            val2 = atof(arg2);
            val3 = atof(arg3);
            max = 0;

            if (val1 < 0)
            {
                val1 = val1 * -1;
            }
            if (val2 < 0)
            {
                val2 = val2 * -1;
            }
            if (val3 < 0)
            {
                val3 = val3 * -1;
            }

            if (strcmp("SSS", command) == 0)
            { // SSS 3 3 3
                aS = val1;
                bS = val2;
                cS = val3;

                if (aS > bS && aS > cS)
                {
                    max = aS;
                    if (max > (bS + cS))
                    {
                        printf("Impossible triangle");
                        max = -1;
                    }
                }
                else if (bS > aS && bS > cS)
                {
                    max = bS;
                    if (max > (aS + cS))
                    {
                        printf("Impossible triangle");
                        max = -1;
                    }
                }
                else if (cS > aS && cS > bS)
                {
                    max = cS;
                    if (max > (aS + bS))
                    {
                        printf("Impossible triangle");
                        max = -1;
                    }
                }

                if (max != -1)
                {
                    aA = acos((((bS * bS) + (cS * cS) - (aS * aS)) / (2 * bS * cS)));
                    bA = acos((((aS * aS) + (cS * cS) - (bS * bS)) / (2 * aS * cS)));
                    // cA = 180 - (aA + bA);
                    cA = acos((((aS * aS) + (bS * bS) - (cS * cS)) / (2 * aS * bS)));
                    aA = aA * 180 / PI;
                    bA = bA * 180 / PI;
                    cA = cA * 180 / PI;
                }
            }
            else if (strcmp("SAS", command) == 0)
            { // done
                aS = val1;
                bS = val3;
                cA = val2;

                cS = sqrt((aS * aS) + (bS * bS) - (2 * (aS) * (bS)*cos(cA * PI / 180)));
                aA = acos(((bS * bS) + (cS * cS) - (aS * aS)) / ((2 * (bS) * (cS))));
                aA = aA * 180 / PI;
                bA = 180 - aA - cA;

                // aA
            }
            else if (strcmp("ASA", command) == 0)
            {
                // area peri -- done
                //  a=(c)*(sin(x)/sin(c))
                //  b=(c)*(sin(y)/sin(c))
                cS = val2;
                aA = val1;
                bA = val3;
                cA = 180 - aA - bA;
                aS = cS * (sin(aA * PI / 180) / sin(cA * PI / 180));
                bS = cS * (sin(bA * PI / 180) / sin(cA * PI / 180));
            }
            else if (strcmp("SSA", command) == 0)
            {
                bS = val1;
                cS = val2;
                bA = val3;

                D = (cS / bS) * sin(bA / 180 * PI);
                if (D > 1)
                {
                    // 3 34 11
                    printf("\nImpossible triangle");
                }
                else
                {
                     cA = asin(D * PI / 180 );
                  
                    aA = 180 - bA - cA;
                    aS = bS * sin(aA * PI / 180) / sin(bA * PI / 180);
                }
            }
            else{
                max = -1; 
                printf("Unknown command triangle format %s",command);
            }
            if (max != -1)
            {
                perimeter = aS + bS + cS;
                s = (perimeter / 2);
                area = sqrt((s * (s - aS) * (s - bS) * (s - cS)));

                printf("\nFormat: %s", command);

                printf("\na =   %6.3lf\talpha =  %7.3lf", aS, aA);
                printf("\nb =   %6.3lf\tbeta  =  %7.3lf", bS, bA);
                printf("\nc =   %6.3lf\tgamma =  %7.3lf", cS, cA);

                printf("\nPerimeter = %7.3lf", perimeter);
                printf("\nArea      = %7.3lf", area);
                printf("\nType      = ");
                if (aS == bS && bS == cS)
                {
                    printf("equilater, ");
                }
                else if (aS != bS && aS != cS && bS != cS)
                {
                    printf("scalene, ");
                }
                else if (aS == bS || aS == cS || bS == cS)
                {
                    printf("isoscalas, ");
                }

                if (aA > 90 || bA > 90 || cA > 90)
                {
                    printf("obtuse");
                }
                else if (aA < 90 && bA < 90 && cA < 90)
                {
                    printf("acute");
                }
                else if (aA == 90 || bA == 90 || cA == 90)
                {
                    printf("rightangles");
                }
                printf("\n");
            }
        }
        else
        {
            printf("Bad command: Format # # #");
            printf("\nwhere Format = SSS|SAS|ASA|SSA");
            printf("\n      # = a real number\n");
        }
    }
    return 0;
}

// obtuse -> if any ange > 90
// acute ->  if all angl < 90
// rightangle -> if any angl is = 90

// scalene -> if all sides are different
// equilater    -> if all side same
// isoscalas -> two sides are same

// reflex -> if any side > 180 *******
