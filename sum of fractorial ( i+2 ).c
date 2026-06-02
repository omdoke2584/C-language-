//Name- Om Amol Doke 
//PRN -2503033111372L001

#include<stdio.h>
int main()
{
	int i,num, sum=0;
	
	printf("Enter the number\t");
	scanf("%d",&num);
	
	for (i=1;i<=num; i=i+2){
		printf("Sum = %d\n", i);
	}
	
	return 0;
}
