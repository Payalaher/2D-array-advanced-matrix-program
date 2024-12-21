//Write a program to check whether the given matrix is identity or not.

#include<stdio.h>

void identitymatrix(){
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

int identity=0;

for(int i=0; i<row;i++){
    for( int j=0; j<col; j++){
        if((i==j && matrix[i][j]!=1)||(i!=j && matrix[i][j]!=0)){
           identity=1;
        }


    }
}

if(identity==0){
    printf("matrix is identity\n");

}

else{
    printf("matrix is not identity\n");
}




}

int main(){

identitymatrix();


    return 0;
}