#include<stdio.h>
void main(){
	int i=1,n,m=1;
	printf("Enter a number: ");
	scanf("%d" ,&n);
	while(i<=n){
		if(n%i==0){
			printf("%d\t" ,i);
		}
		i++;
	}
}
