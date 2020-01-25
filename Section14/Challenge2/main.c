#include <stdio.h>
#include <ctype.h>

int main() {
    FILE* infile = fopen("..\\romeoandjuliet.txt","r");
    if(infile == NULL){
        printf("Failed to read input file.\n");
        return(-1);
    }
    if(infile != NULL) {
        FILE *outfile = fopen("..\\romeoandjuliet_to_upper.txt", "ab+");
        while(!feof(infile)){
            fputc(toupper(fgetc(infile)),outfile);
        }
        fclose(infile);
        fclose(outfile);
        remove("..\\romeoandjuliet.txt");
        rename("..\\romeoandjuliet_to_upper.txt","..\\romeoandjuliet.txt");
    }

    return 0;
}
