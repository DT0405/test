#include<stdio.h>
using namespace std;
 
int main() {
   int M[3][3] = {{1, 0, 1}, {0, 0, 0}, {0, 0, 1}};
   int N[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
   printf("ma tran M la: \n");
   for(int i = 0; i < 3; i++) {
   	int a = 0, b=0;
      for(int j=0; j<3; j++){
      	printf("%d ", M[i][j]);
        if(M[i][j]==1){
          a= i; 
		  b= j;
          for(int x = 0; x<3; x++){
           	N[a][x] = 1;         	
		  }
			for(int x = 0; x<3; x++){
	          	N[x][j] = 1;   			
			}
        }
      }
      printf("\n");
    }
    printf("ma tran N la: \n");
    for(int i = 0; i < 3; i++) {
      for(int j=0; j< 3; j++){
        printf("%d ", N[i][j]);
      }
      printf("\n");
    }
    
   return 0;
}
