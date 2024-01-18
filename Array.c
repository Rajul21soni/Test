#include<stdio.h>
void main(){

int Matrix1[3][3]; // 2d array

int Matrix2[3][3]; // 2d array

int Matrix3[3][3]; // 2d array

printf("\n Please enter vlaues in Materix 1\n ");

// loop to insert values in matrix
for(int r=0;r<3;r++){    // row 
    for(int c=0;c<3;c++){   // column
        scanf("%d",&Matrix1[r][c]);
    }
    printf("\n");  // to switch to next line
}
printf("\n Please enter vlaues in Materix 2\n ");
for(int r=0;r<3;r++){    // row 
    for(int c=0;c<3;c++){   // column
        scanf("%d",&Matrix2[r][c]);
    }
    printf("\n");  // to switch to next line
}

for(int r=0;r<3;r++){    // row 
    for(int c=0;c<3;c++){   // column
        Matrix3[r][c] = Matrix1[r][c]+Matrix2[r][c];
    }
    
}

printf("\n Addition of Your Matix is : \n");

// loop to print values of matrix
for(int r=0;r<3;r++){    // row 
    for(int c=0;c<3;c++){   // column
        printf(" %d ",Matrix3[r][c]);
    }
    printf("\n");  // to switch to next line
}


}