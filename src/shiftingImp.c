#include <stdio.h>

int clearBit(int num, int i){
    return num & ~(1 << i-1);
}
int setBit(int num, int i){
    return num | (1 << i-1);
}
int getBit(int num, int i){
    return ((num & (1 << i-1)) != 0);
}
int clearMSBsTilli(int num, int i){
    return num & ((1<<i-1)-1);
}
int clearLSBsExi(int num, int i){
    return num & (~((1<<i-1)-1));
}
int updateBit(int num, int i, int bitVal){
    return (num & ~(1 << i-1)) | (bitVal << i-1);
}

int main(void) {
	// your code goes here
    int num = -1;
    int myBit;
    
    myBit = getBit(num, 3);
    printf("num at 3: %d\n", myBit);
    
    num = clearBit(num, 3);
    myBit = getBit(num, 3);
    printf("(clearBit) num: %d\n", num);
    printf("num at 3      : %d\n", myBit);
    
    num = setBit(num, 3);
    myBit = getBit(num, 3);
    printf("(setBit) num: %d\n", num);
    printf("num at 3    : %d\n", myBit);
    
    num = clearMSBsTilli(num, 4);
    myBit = getBit(num, 4);
    printf("(clear MSBs till i) num: %d\n", num);
    printf("num at 4               : %d\n", myBit);
    
    num = clearLSBsExi(num, 3);
    myBit = getBit(num, 3);
    printf("(clear LSBs till i(excluded)) num: %d\n", num);
    printf("num at 3               : %d\n", myBit);
    
    num = updateBit(num, 4, 1);
    myBit = getBit(num, 4);
    printf("(clear LSBs till i(excluded)) num: %d\n", num);
    printf("num at 4               : %d\n", myBit);
    
	return 0;
}
