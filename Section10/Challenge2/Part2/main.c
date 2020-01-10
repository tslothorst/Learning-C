#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void sortStrings(char arr[][100], int n);

int main() {
    char stringarr[][100] = { "zero","one","two" };

    int n = sizeof(stringarr)/sizeof(stringarr[0]);
    sortStrings(stringarr, n);

    printf("The strings appears after sorting: ");
    for (int i=0; i<n; i++){
        printf("\n%s", stringarr[i]);
    }

    return 0;
}

void sortStrings(char arr[][100], int n)
{
    char temp[100];

    // Sorting strings using bubble sort
    bool swapped;
    for (int j=0; j<n-1; j++)
    {
        swapped = false;
        for (int i=j+1; i<n; i++)
        {
            if (strcmp(arr[j], arr[i]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }
    }
}