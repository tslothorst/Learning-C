#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* input = (char*)calloc(80, sizeof(char));
    if(input != NULL){
        printf("Enter something: ");
        gets(input);
        input = (char*)realloc(input,strlen(input)+1);
        printf("\nYou entered: %s",input);
    }
    if(input == NULL){
        printf("\nFailed to allocate memory. Aborting...\n");
        abort();
    }
    free(input);
    input = NULL;
    return 0;
}
