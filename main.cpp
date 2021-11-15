
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int main() {
    //char ch1,ch[MAX], vet[100] = {"/home/lourence/Documents/Sistemas/AlgoritmosII/numeros.txt"};
    char ch[MAX], vet[100] = {"../file.txt"};
    char line[4];
    int x = 0;
    FILE *fp;

    errno_t  err = fopen_s(&fp, vet, "r"); // read mode

    if (err)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    printf("The contents of %s file are:\n", vet);
    line[4] = fgetc(fp);
    int t = 0;
    while(line[4] != EOF)
    {
        while (line[4] != '\n') {

//        for(int x=0; x<MAX; x++)
//        {
            ch[x] = (char)line[t];
            t++;
            line[4] = fgetc(fp);
//        }
        };
            x++;
    }

    fclose(fp);

    int i, j;
    char aux;


//    for (i = 0; i < MAX ; i++) {
//        for(j = 0; j < MAX -1 ; j++) {
//            if(ch[j] > ch[j+1]) {
//                aux = ch[j];
//                ch[j] = ch[j+1];
//                ch[j+1] = aux;
//            }
//        }
//    }
//    for (i=0; i < MAX; i++){
//        printf("%c,", ch);
//    }

    printf("\n\n");
}
