#include <stdio.h>

int main(void) {
	// your code goes here
	int num = -1, i;
	num <<= 1;
	printf("%d\n",num);
	printf("size of num is: %d\n",sizeof(num));
	
	//display bits of num
	//disadvantage of this method is that u shud know the number
	//of bits in the number beforehand
	for(i=31; i>=0; i--){
	    printf("%d",(num>>i & 1));
	    if(((i+1)%8 == 0) && (i!=31)) printf(" ");
	}
	
	return 0;
}