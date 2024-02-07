



#include <stdio.h>


void max_min_array(int const A[],int size,int Results[]){
    
    int i;
    if( A[0] < A[1] ){
        Results[0]=0;Results[1]=1;
    }else{
        Results[0]=1; Results[1]=0;
    }
    
    for( i = 2; i < size; i++ ){
        if(A[i] < A[Results[0]]) Results[0] = i;
        else if(A[i] > A[Results[1]]) Results[1] = i;
        
    }
    
}
    

int main() {
    int A[12] = { 400,400,400, 2, 3, -444, 5, 3, 3, 9, 3, 3 };
    int B[2] ={0};
    
   
   max_min_array( A, 12, B );
       printf( "min of A: %d with index: %d, max of A: %d with index %d\n",
           A[B[0]], B[0], A[B[1]], B[1]);
    
    return 0;
}
