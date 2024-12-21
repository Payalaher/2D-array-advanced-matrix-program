//Write a program to find the transpose of the given 4*4 Matrix.



#include<stdio.h>


void  transpose(){

int row,col;

printf("enter the row:");
scanf("%d",&row);

printf("enter the col:");
scanf("%d",&col);

int arr[row][col];

int Sum=0;



printf("\nenter the elements:\n");

for(int i=0; i<row;i++){
    for( int j=0; j<col; j++){
        scanf("%d",&arr[i][j]);
    }
}

printf("\nthe elements are:\n");


for(int i=0; i<row;i++){
    for( int j=0; j<col; j++){
        printf("%d\t",arr[i][j]);
    }

printf("\n");

}


printf("\n");

for(int i=0; i<row;i++){
    for( int j=0; j<col; j++){
        if(i<j){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("\n");
}

printf("\nthe transpose are:\n");


for(int i=0; i<row;i++){
    for( int j=0; j<col; j++){
        printf("%d\t",arr[i][j]);
    }

printf("\n");

}



}

int main(){

    transpose();

    return 0;
}