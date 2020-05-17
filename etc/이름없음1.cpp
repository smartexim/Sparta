#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a==10){
		printf(" You are perfect! Please keep studying.");
		
	}
		else if(a>=7){
			printf(" You are great! Please  review and keep studying.");
		}
		else if(a>=4){
			printf("You are good, but you need to review and listen more careful!");
		}
	else printf("Please come to my office after class.");
}

