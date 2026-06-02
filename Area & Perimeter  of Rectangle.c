//Name- Om Amol Doke 
//PRN -2503033111372L001

#include<stdio.h>
int main()
{
	int length,width,perimeter,area;
	printf("Enter length :\t");
	scanf("%d",& length);
	 
	 printf("Enter width:\t");
	 scanf("%d",&width);
	 area=length*width;
	 perimeter=2*(length+width);
	 printf("area of rectangle=%d\n",area);
	 printf("perimeter of rectangle=%d",perimeter);
	 return 0;
}
