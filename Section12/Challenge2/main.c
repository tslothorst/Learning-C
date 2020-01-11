#include <stdio.h>

int strlength(const char* str);

int main() {
    printf("The length of the word hello is %d", strlength("hello"));
    return 0;
}

int strlength(const char* str){
    int i = 0;
    while (*str != '\0'){
        ++str;
        ++i;
    }
    return i;
}
