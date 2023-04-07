// Use if-else statements to find the largest number 
// of the three numbers entered by the user
// Filename:  lrgst_num.c

// Diane E. Granger
// dianeegranger@gmail.com

#include <stdio.h>

int main() 
{
    int num1, num2, num3;           // declare storage for 3 numbers
    
    printf("Enter number 1: ");     // request number 1 from user
    scanf("%d", &num1);             // read and store dec value in num1
    
    printf("Enter number 2: ");     // request number 2 from user
    scanf("%d", &num2);             // read and store dec value in num2
    
    printf("Enter number 3: ");     // request number 3 from user
    scanf("%d", &num3);             // read and store dec value in num3
    
    
    // is num1 >= num2
    if (num1 >= num2)
    {
        // num1 >= num2, so is num1 > num3?
        if (num1 >= num3)
        {
            printf("\n %d is the largest number.", num1);
        }
        // num1 < num3, so num3 is largest
        else
        {
            printf("\n %d is the largest number.", num3);
        }
    }
    else
    {
        //  num1 < num2, so compare num2 and num3
        if (num2 >= num3)
        {
            // num2 >= num1 and num3, so num2 is largest
            printf("\n %d is the largest number.", num2);
        }
        // num2 < num3, so num3 is largest
        else
        {
            printf("\n %d is the largest number.", num3);
        }
    }

    return 0;
}

// OUTPUT:
// PS C:\Users\diane\ccode>gcc lrgst_num.c
// PS C:\Users\diane\ccode> ./a
// Enter number 1: 56
// Enter number 2: 44
// Enter number 3: 99

//  99 is the largest number.

// PS C:\Users\diane\ccode> ./a
// Enter number 1: 66
// Enter number 2: 66
// Enter number 3: 55

//  66 is the largest number.
// PS C:\Users\diane\ccode>

// Enter number 1: 33
// Enter number 2: 33
// Enter number 3: 33

// 33 is the largest number.