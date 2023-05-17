#include <stdio.h> 
#include <math.h>  

int countSquares(int N) {
	int count =0;
       for(int i=1;i<sqrt(N);i++){
            if(i*i<N){
            	count++;
        }
    }
    return count;
    }
int main() {
        int N;
        printf("Enter the number:");
        scanf("%d",&N);
        printf("%d",countSquares(N));
    return 0;
}
// while compiling we must link with the -lms
