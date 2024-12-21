// upper tringular matrix

#include<stdio.h>


void lowertringuler(){

      int row,col;

printf("enter the row in the matrix:");
scanf("%d",&row);

printf("enter the col in the matrix:");
scanf("%d",&col);

int matrix[row][col];

int Sum=0;



printf("\nenter the matrix:\n");

for(int i=0; i<row;i++){
    for( int j=0; j<col; j++){
        scanf("%d",&matrix[i][j]);
    }
}

printf("\nthe matrix are:\n");


for(int i=0; i<row;i++){
    for( int j=0; j<col; j++){
        printf("%d\t",matrix[i][j]);
    }

printf("\n");

}

printf("\n lower tringuler  matrix:\n");

for(int i=0; i<row;i++){
    for( int j=0; j<col; j++){
       if(i>=j){
        printf("%d\t",matrix[i][j]);
       }

       else{
        printf("0\t",matrix[i][j]);
       }
    }
    printf("\n");
}







}

int main(){

lowertringuler();

    return 0;
}