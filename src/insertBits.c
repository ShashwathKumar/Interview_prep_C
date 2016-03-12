#include <stdio.h>

int insertBits(int N, int M, int i, int j){
    int mask = (1 << (j-i+1))-1;
    mask <<= i;
    mask = ~mask;
    
    return (N & mask) | (M<<i);
}
void printBinary(int newN){
	int i;
	for(i=31; i>=0; i--){
	    if(((i+1)%8 == 0) && (i!=31)) printf(" ");
	    printf("%d",(newN>>i & 1));
	}
}

int main(void) {
	// your code goes here
	int N = ~0, M = 14, i =4, j =7;
	int newN = insertBits(N,M,i,j);
	printBinary(newN);
	//printf("%d\n",newN);
	return 0;
}

