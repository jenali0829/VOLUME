#include<stdio.h>
struct distances{
	
	int a;
	int b;
	int c;
	int d;
	int e;
	 int sum;
};
main(){
	
	struct distances l;
	
	l.a;
	l.b;
	l.c;
	l.d;
	int sum;
	
	printf("Enter the first distances value in inch:");
	scanf("%d",&l.a);
	
	printf("Enter the secound distances value in feet:");
	scanf("%d",&l.b);
	
	sum=l.a+l.b;
	
	printf("\n%d\n",sum);
	
	
	printf("Enter the first distances value in inch:");
	scanf("%d",&l.c);
	
	printf("Enter the first distances value in feet:");
	scanf("%d",&l.d);
	
	sum=l.c+l.d;
	printf("%d",sum);
}
