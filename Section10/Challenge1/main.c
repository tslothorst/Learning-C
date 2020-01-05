#include <stdio.h>
#include <stdbool.h>

int length(char str[]);
void concatenate(char result[], char str1[], char str2[]);
bool compare(char str1[], char str2[]);

int main() {
    char string1[] = "hiya!";
    char string2[] = "hello";
    char string3[] = "world!";

    printf("The length of hello is: %d\n",length(string2)); // Should be 5.
    printf("The length of hello is: %d\n",length(string3)); // Should be 6.
    printf("The string is the same: %d\n", compare(string2,string2)); // Should print 1 for true
    printf("The string is the same: %d\n", compare(string2,string3)); // Should print 0 for false
    printf("The string is the same: %d\n", compare(string2,string1)); // Should print 0 for false

    return 0;
}

int length(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        ++i;
    }
    return i;
}

void concatenate(char result[], char str1[], char str2[]){
    int size = length(str1) + length(str2) + 1;

}

bool compare(char str1[], char str2[]){
    if(length(str1) != length(str2)){
        return false;
    }

    if(length(str1) == length(str2)){
        for (int i = 0; i < length(str1); ++i) {
            if(str1[i] != str2[i]){
                return false;
            }
        }
    }
    return true;
}
