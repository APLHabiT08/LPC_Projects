 #include<lpc214x.h>
void delay(int );
int i;
unsigned char a[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
unsigned char b[]={0x6f,0x7f,0x07,0x7d,0x6d,0x66,0x4f,0x5b,0x06,0x3f};
int main()
{
    IO0DIR=IO0DIR|0xff;
	IO1DIR &= ~(1<<16);     // explicitly making P1.16 as Input
     
    while(1)
		{
	if(! m,(IO1PIN & (1<<16))) // Evaluates to True for a 'LOW' on P1.16
    {
        for(i=0;i<=9;i++)
        {
            IO0SET=IO0SET|a[i];
            delay(1000);
            IO0CLR=IO0CLR|a[i];
        }
    }
	else
   {
     for(i=0;i<=9;i++)
        {
            IO0SET=IO0SET|b[i];
            delay(1000);
            IO0CLR=IO0CLR|b[i];
        }
   }
   
}
		 return 0;
		}
		

void delay(int k)
{
    int i,j;
    for(i=0;i<k;i++)
    for(j=0;j<=1000;j++);
}
