//Write a function to add two 3*3 matrices and return the result.

#include<stdio.h>

void matrixaddition(){

int row, col;


printf("enter the row:");
scanf("%d",&row);

printf("enter the col:");
scanf("%d",&col);


int matrix1[row][col];

int matrix2[row][col];

int sum[row][col];

printf("enter the element of matrix1\n");

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&matrix1[i][j]);
    }
}

printf(" the element of matrix1\n");

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("%d\t",matrix1[i][j]);
    }
    printf("\n");
}


printf("enter the element of matrix2\n");

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&matrix2[i][j]);
    }
}

printf(" the element of matrix2\n");

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("%d\t",matrix2[i][j]);
    }
    printf("\n");
}

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        sum[i][j]=matrix1[i][j] + matrix2[i][j];
    }
}

printf("\nthe sum of matrix is:\n");

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
}

}

int main(){

    matrixaddition();
}