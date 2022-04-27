#include <8051.h> 
void main() 
{ 
unsigned int i; 
unsigned char *str=" olleH"; 
unsigned char *str2="W o r l d"; 
P0 = 0x38; 
P2 = 0x1; 
P2 = 0x0; 
P0 = 0x80; 
P2 = 0x1; 
P2 = 0x0; 
for(i=5;i>0;i--)
{ 
P0 = str[i];
P2 = 0x3;
P2 = 0x2;
} 
P0 = 0xC0; 
P2 = 0x1; 
P2 = 0x0; 
for(i=0;i<9;i++)
{
P0 = str2[i];
P2 = 0x03;
P2 = 0x02;
}
while(1); 
}