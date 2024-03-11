#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define student 5

void function_1(){
    int seat[student];
    for (int i=0; i<student;i++){
        seat[i]=i;
    printf("<student at index %d>, you will take seat %d\n", i, seat[i]);
    }
    }

void function_2(){
    int tab[5]={1,2,4,8,16};
    printf("affichage du contenu.\n");
    for(int i=0;i<5;i++){
        printf("%d\n", tab[i]);
    }
    printf("affichage du contenu dans l'ordre inverse.\n");
    for(int i=4;i>=0;i--){
        printf("%d\n", tab[i]);
    }

}

void function_3(){
    int tab[student];
    int som=0;
    for(int i=0;i<student   /*sizeof(tab)/2*/  ;i++){
        if(tab[i]){
            som+=1;
        }
    }
    printf("il y a %d elements dans le tableau\n", som);
}

void function_4(){
    srand(time(NULL));
    char tab[1000];
    char x;
    int som=0;
    for(int i=0;i<1000;i++){
        tab[i]='A'+rand() %26;
    }
    printf("saisir une lettre majuscule: ");
    scanf("%c", &x);
    for(int i=0;i<1000;i++){
        if(tab[i]==x){
            printf("la lettere est présente \n");
            break;
        }
    }
    for(int i=0;i<1000;i++){
        if(tab[i]==x){
            som+=1;
        }
    }
    printf("le nombre d'occurrences %d", som);

}

void function_5(){
    srand(time(NULL));
    char tab[1000];
    int som=0;
    for(int i=0;i<1000;i++){
        tab[i]='A'+rand() %26;
    }

    for(char i='A';i<='Z';i++){
        som=0;
        for(int j=0;j<1000;j++){
            if(tab[j]==i){
                som+=1;
            }
        }
        printf("le nombre d'occurrences de %c est: %d\n", i, som);
    }
}

void function_6(){
    int tab[7];
    int x,y;
    srand(time(NULL));
    for(int i=0; i<6;i++){
        tab[i]=rand() %9;
        printf("tab[%d]=%d \n", i,tab[i]);
    }

    for( int i=0; i<=6; i++){
        for( int j=i; j<=6; j++){
            if(tab[j]<tab[i]){
                x=tab[j];
                y=j;
            }
        }
        tab[y]=tab[i];
        tab[i]=x;
    }
    printf("____________*************************************____________\n");
    for(int i=0; i<6;i++){
        printf("tab[%d]=%d \n", i,tab[i]);
    }

}



int main()
{
    function_1();
    function_2();
    function_3();
    function_4();
    function_5();
    function_6();
    return 0;
}
