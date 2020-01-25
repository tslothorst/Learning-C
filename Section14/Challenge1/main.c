#include <stdio.h>

int main() {
    FILE* infile = fopen("..\\romeoandjuliet.txt","r");
    int linecount = 1;
    if(infile == NULL){
        printf("Error reading from file\n");
        return(-1);
    }
    if(infile !=NULL){
        char c;
        while(!feof(infile)){
           c = fgetc(infile);
           if(c == '\n'){
               ++linecount;
           }
        }
        printf("This file contains %d lines\n",linecount);
    }
    return 0;
}
