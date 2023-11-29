#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>

void make_toks(char *s , char *tok[]){
    int i = 0;
    char *p;

    p = strtok(s , " ");
    while (p != NULL)
    {
        tok[i++] = p;
        p = strtok(NULL , " ");
    }
    tok[i] = NULL;
    
}

void typeline(char *fn , char *op){
    int i , j , n , fh;
    char ch;

    fh = open(fn , O_RDONLY);

    if(fh == -1){
        printf("File was empty...");
        return;
    }

    if(strcmp(op , "-a") == 0){
        while (read(fh , &c , 1) > 0)
        {
            printf("%c", ch);
        }
        close(fh);
        return;        
    }
}