#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* input = (char*)calloc(80, sizeof(char));
    char* output = NULL;
    if(input != NULL){
        printf("Enter something: ");
        gets(input);
        output = (char*)realloc(input,strlen(input)+1);
        printf("You entered: %s",output);
    }
    free(input);
    free(output);
    input = NULL;
    output = NULL;
    return 0;
}
