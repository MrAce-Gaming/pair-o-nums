#include <stdio.h>
#include <stdlib.h>


int main()
{
    int array[10], target; //declaring array and target
    for(int k = 0; k < sizeof(array)/sizeof(array[0]); k++) // for loop for taking input in array
    {
        printf("Enter the number: ");
        scanf("%d", &array[k]);
    }
    printf("Enter the target value: "); // taking target value
    scanf("%d", &target);
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++) //printing a pair that adds up to target
    {
        for(int j =+ i; i < sizeof(array)/sizeof(array[0]); j++)
        {
            if(array[i] + array[j] == target)
            {
                printf("\n");
                printf("The pairs of numbers are: %d and %d", array[i], array[j]);
            }
        }
    }
    printf("\n");
    system("pause"); //halting compiler for "Press any key to continue"
}
