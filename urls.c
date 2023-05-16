#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *fout;

    if((fout=fopen("urls.csv","w"))==NULL){
        puts("couldnt open the csv-file");
        return 1;
    }

    fprintf(fout,"%x,\n",argv[1]);

    printf(argv[1]);

    fclose(fout);
    return 0;
}