#include <stdio.h>

int matrix[1000][1000];
int size;

int main() {
    //"nested for loop" for scan entries from user.
    scanf("%d" , &size);
    for(int i = 0 ; i < size ; i++) {

        for(int j = 0 ; j < size ;j++) {

            scanf("%d" , &matrix[i][j]);
        }
        printf("\n");
    }


    //"nested for loop" for print matrix :)

    for(int i = 0 ; i < size ; i++) {

        for(int j = 0 ; j < size ;j++) {

            if(j<=i) {

               printf("%d\t" , matrix[i][j]);

            }else{ printf("%d\t",0);}


        }
        printf("\n");
    }
}
