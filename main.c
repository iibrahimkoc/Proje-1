#include<stdio.h>

#define N 3
#define M 1
int main(){
    float determinant=0,determinant1=0,determinant2=0,determinant3=0,x1,x2,x3;
    float dizi[N][N]; // A matris iÃ§in
    float dizi1[N][M];
    float gecicidizi1[N][N],gecicidizi2[N][N],gecicidizi3[N][N];
    int i,j;

    printf("     __               __\n");
    printf("    |                   |\n"); 
    printf("    |  a11   a12   a13  |\n");
    printf("A=  |  a21   a22   a23  |\n");
    printf("    |  a31   a32   a33  |\n"); 
    printf("    |__               __|\n");
    printf("\n");

eticket:
    printf("Enter elements of A matrix\n");
    
    for(i=0; i<3; i++){ //A matrix
        for(j=0; j<3; j++){
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%f",&dizi[i][j]);
        }
    }
    determinant=(dizi[0][0]*dizi[1][1]*dizi[2][2]+
                 dizi[1][0]*dizi[2][1]*dizi[0][2]+
                 dizi[2][0]*dizi[0][1]*dizi[1][2])-
                (dizi[1][0]*dizi[0][1]*dizi[2][2]+
                 dizi[0][0]*dizi[2][1]*dizi[1][2]+
                 dizi[2][0]*dizi[1][1]*dizi[0][2]);
    
    if(determinant==0){
        printf("\n");
        printf("\n");
        printf("The determinant value is zero. Please re-enter the matrix values.\n");
        printf("\n");
        printf("\n");
        goto eticket;
    }
        
    


printf("\n");

    printf("A matrix is:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%6.2f\t",dizi[i][j]);
        }
        printf("\n");
    }
    

printf("\n");

    printf("Enter elements of b vector\n");
    
    for(i=0,j=0; i<3; i++){  // b iÃ§in
        printf("Enter b%d%d: ",i+1,j+1);
        scanf("%f",&dizi1[i][j]);
    }

printf("\n");

    printf("b vector is:\n");
    for(i=0,j=0; i<3; i++){
        printf("%5.2f\n",dizi1[i][j]);
    }

printf("\n");

    /*determinant=(dizi[0][0]*dizi[1][1]*dizi[2][2]+
                 dizi[1][0]*dizi[2][1]*dizi[0][2]+
                 dizi[2][0]*dizi[0][1]*dizi[1][2])-
                (dizi[1][0]*dizi[0][1]*dizi[2][2]+
                 dizi[0][0]*dizi[2][1]*dizi[1][2]+
                 dizi[2][0]*dizi[1][1]*dizi[0][2]);*/

    printf("A determinant is: %0.2f",determinant);

printf("\n");

for(i=0; i<3; i++){ //diziyi geÃ§ici diziye aktardÄ±k
        for(j=0; j<3; j++){
            gecicidizi1[i][j]=dizi[i][j];
            gecicidizi2[i][j]=dizi[i][j];
            gecicidizi3[i][j]=dizi[i][j];
        }
        printf("\n");
    }

    printf("A1 matrix is:\n");
    
    for(i=0,j=0; i<3; i++){
        gecicidizi1[i][j]=dizi1[i][j];
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%6.2f\t",gecicidizi1[i][j]);
        }
        printf("\n");
    }

printf("\n");

    printf("A2 matris is:\n");
    for(i=0,j=1; i<3; i++){
        gecicidizi2[i][j]=dizi1[i][j-1];
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%6.2f\t",gecicidizi2[i][j]);
        }
        printf("\n");
    }

printf("\n");

    printf("A3 matris is:\n");
    for(i=0,j=2; i<3; i++){
        gecicidizi3[i][j]=dizi1[i][j-2];
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%6.2f\t",gecicidizi3[i][j]);
        }
        printf("\n");
    }

printf("\n");

    determinant1=(gecicidizi1[0][0]*gecicidizi1[1][1]*gecicidizi1[2][2]+
                 gecicidizi1[1][0]*gecicidizi1[2][1]*gecicidizi1[0][2]+
                 gecicidizi1[2][0]*gecicidizi1[0][1]*gecicidizi1[1][2])-
                (gecicidizi1[1][0]*gecicidizi1[0][1]*gecicidizi1[2][2]+
                 gecicidizi1[0][0]*gecicidizi1[2][1]*gecicidizi1[1][2]+
                 gecicidizi1[2][0]*gecicidizi1[1][1]*gecicidizi1[0][2]);

    determinant2=(gecicidizi2[0][0]*gecicidizi2[1][1]*gecicidizi2[2][2]+
                 gecicidizi2[1][0]*gecicidizi2[2][1]*gecicidizi2[0][2]+
                 gecicidizi2[2][0]*gecicidizi2[0][1]*gecicidizi2[1][2])-
                (gecicidizi2[1][0]*gecicidizi2[0][1]*gecicidizi2[2][2]+
                 gecicidizi2[0][0]*gecicidizi2[2][1]*gecicidizi2[1][2]+
                 gecicidizi2[2][0]*gecicidizi2[1][1]*gecicidizi2[0][2]);

    determinant3=(gecicidizi3[0][0]*gecicidizi3[1][1]*gecicidizi3[2][2]+
                 gecicidizi3[1][0]*gecicidizi3[2][1]*gecicidizi3[0][2]+
                 gecicidizi3[2][0]*gecicidizi3[0][1]*gecicidizi3[1][2])-
                (gecicidizi3[1][0]*gecicidizi3[0][1]*gecicidizi3[2][2]+
                 gecicidizi3[0][0]*gecicidizi3[2][1]*gecicidizi3[1][2]+
                 gecicidizi3[2][0]*gecicidizi3[1][1]*gecicidizi3[0][2]);

    printf("A1 determinant is: %0.2f",determinant1);

printf("\n");

    printf("A2 determinant is: %0.2f",determinant2);

printf("\n");

    printf("A3 determinant is: %0.2f",determinant3);

printf("\n");

    printf("The X vector is:\n");

    x1=determinant/determinant1;
    x2=determinant/determinant2;
    x3=determinant/determinant3;
    printf("%6.2f\n",x1);
    printf("%6.2f\n",x2);
    printf("%6.2f\n",x3);

    return 0;
}