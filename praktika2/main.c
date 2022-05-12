#include <8051.h>
void main()
{
	unsigned char i,j; 
	unsigned char massiv [11]=
	{
       0x92, //5
       0x99, //4
       0x82, //6
       0xB0, //3
       0xF8, //7
       0xA4, //2
       0x80, //8
       0xF9, //1	  
       0xFF
	};

	P1=massiv [10]; 	

	while(1)
	{
		if(P30 == 1)
			for(i=0;i<10;i++) 
			{
				P2=massiv[i]; 
				//delay
				for(j=0;j<100;j++)
					continue;
			}
		P2=massiv[10];
	}
}