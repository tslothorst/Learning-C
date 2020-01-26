#include <stdio.h>

int main() {
    FILE* infile = fopen("..\\romeoandjuliet.txt","r");
    if(infile == NULL){
        printf("\nError opening file.\n");
        return(-1);
    }
    if(infile != NULL) {
        FILE* outfile = fopen("..\\romeoandjuliet_reverse.txt","ab+");
        fseek(infile, 0, SEEK_END);
        int len;
        len = ftell(infile);
        for (int i = 0; i < len; ++i) {
            char c = fgetc(infile);
            fputc(c,outfile);
            fseek(infile,(i*-1),SEEK_END);
        }
        fclose(infile);
        fclose(outfile);
    }
    return 0;
}
