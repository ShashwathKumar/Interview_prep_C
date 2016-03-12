#include <stdio.h>

void printBinary(int num){
	int i;
	for(i=31; i>=0; i--){
	    if(((i+1)%8 == 0) && (i!=31)) printf(" ");
	    printf("%d",(num>>i & 1));
	}
}

int main(void) {
	// your code goes here
	int num = -1, i;
    printBinary(num);
	
	return 0;
}
