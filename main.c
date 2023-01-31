
#include<stdio.h>
#include<conio.h>

int main()
{
	 float a,b,c,lg;
	 clrscr();
	 printf("Enter three numbers:\n");
	 scanf("%f%f%f",&a,&b,&c);
	 lg = a;
	 
	 if(b>lg)
	 {
	  lg = b;
	 }
	 
	 if(c>lg)
	 {
	  lg = c;
	 }
	 
	 printf("Largest = %0.2f", lg);
	 getch();
	 
	 return(0);
}
