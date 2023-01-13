#include<stdio.h>
struct marks{
	
	int roll_no;
	char name[100];
	int chemistry;
	int mathematics;
	int physics;
	
};
main(){
	struct marks k;
	int i;
	float percentage;
	
	k.roll_no;
	k.name;
	k.chemistry;
	k.mathematics;
	k.physics;
	
	for(i=0; i<5; i++){
		
		
		printf("Enter the roll_no:\n");
		scanf("%d",&k.roll_no);
		
		printf("Enter the name:\n");
		scanf("%s",&k.name[100]);
		
		printf("Enter the chemistry:\n");
		scanf("%d",&k.chemistry);
		
		printf("Enter the mathematics:\n");
		scanf("%d",&k.mathematics);
		
		printf("Enter the physics:\n");
		scanf("%d",&k.physics);
		
	
	
	
		
	 percentage=(k.chemistry+k.mathematics+k.physics)/300.0*100;
		printf("percentage: %f\n",percentage);
	}
}
