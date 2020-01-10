#include <stdio.h>
#include <string.h>

int main() {
    char temp[100];
    printf("Type in a string: ");
    scanf("%s",temp);
    _strrev(temp);
    printf("\nString in reverse:\n");
    printf("%s", temp);
    return 0;
}
