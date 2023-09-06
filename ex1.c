#include<C8051F340_defs.h>

sbit PB = P2^0;
sbit LED = P2^2;

void main(){

	 XBR1      = 0x40;	
     P2MDOUT   = 0x04; 

	 PCA0MD    &= ~0x40;
     PCA0MD    = 0x00;

	while (1)
	{
		PB = !LED;
	}
	
}
