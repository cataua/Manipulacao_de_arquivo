
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 10

void main() {
    //char ch1,ch[MAX], vet[100] = {"/home/lourence/Documents/Sistemas/AlgoritmosII/numeros.txt"};
    char content, ch1[4], ch[MAX][4], vet[100] = {"../file.txt"};
    int x = 0;
    FILE *fp;

    fp = fopen(vet, "r"); // read mode

    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    printf("The contents of %s file are:\n", vet);

    while(fgets(ch1, sizeof(ch1), fp))
    {
        if (ch1[4] == '\n') {
            continue;
        }
//        for(int x=0; x<MAX; x++)
//        {
            ch[x][4] = ch1[4];
            x++;
//        }
    }

    fclose(fp);

    int i, j;
    char aux;


    for (i = 0; i < MAX ; i++) {
        for(j = 0; j < MAX -1 ; j++) {
            if(ch[j][4] > ch[j+1][4]) {
                aux = ch[j][4];
                ch[j][4] = ch[j+1][4];
                ch[j+1][4] = aux;
            }
        }
    }
    for (i=0; i < MAX; i++){
        printf("%4d,", ch[i]);
    }

    printf("\n\n");
}
