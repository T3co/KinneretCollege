#include<c8051f340.h>
sbit LED=P2^2;
void delay(int x)
{
while(x--)
{
TH0=0x3C;
TL0=0xB0;
TF0=0;
TR0=1;
while(TF0==0);
}
}
void main()
{
    XBR1      = 0x40;
    P2MDOUT   = 0x04;
    PCA0MD    &= ~0x40;
    PCA0MD    = 0x00;
    OSCICN    = 0x83;
    TMOD      = 0x01;
while(1)
{
LED=1;
delay(20);
LED=0;
delay(40);
}
}
