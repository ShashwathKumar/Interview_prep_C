#include <stdio.h>

int decimalFracToBinary(double frac){
    int bin = 0, intPart;
    int i;
    
    for(i=32; i>0 && frac!=0; i--){
        frac = frac*2;
        intPart = frac;
        bin = (bin<<1)|intPart;
        
        frac -= intPart;
    }
    if(frac == 0) return bin;
    else return -1; //representing ERROR
}
int decFracToBinary2(double frac){
    //here, instead of multiplying the i/p fraction by 2
    //we can compare it with 0.5, 0.25 etc..
    int bin = 0, i;
    double fracCompare=0.5;
        
    for(i=32; i>0 && frac!=0; i--){
        if(frac >= fracCompare){ bin=(bin<<1)|1;  frac -= fracCompare; }
        else{ bin=bin<<1; }
        
        fracCompare /= 2;
    }
    
    if(frac == 0) return bin;
    else return -1; //ERROR
}
//In Java you could actually use a stringBuilder: append a '.' and
//then start appending 1s and 0s
void printBinary(int num){
	int i;
	for(i=31; i>=0; i--){
	    if(((i+1)%8 == 0) && (i!=31)) printf(" ");
	    printf("%d",(num>>i & 1));
	}
}

int main(void) {
	// your code goes here
	double frac = 0.625;
	int bin = decFracToBinary2(frac);
	
	printBinary(bin);
	return 0;
}

