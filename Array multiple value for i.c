Name- Om Amol Doke
PRN-2503033111372L001

#include<stdio.h>
   int main(){
   	int i, a[5];
   	
   	for(i=0; i<=4;i++){
   		printf("Enter the %dth element:\t",i+1);
   		scanf("%d",&a[i]);
	   }
	   
	   for(i=0;i<=4;i++){
	   	printf("%d\t",a[i]);
	   }
	   return 0;
   }
