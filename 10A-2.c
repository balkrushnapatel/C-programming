#include<stdio.h>
void main(){
	int n,i=1;
	float avg,num,sum=0;
	printf("Enter number of elements: ");
	scanf("%d" ,&n);
	
	while(i<=n){
		printf("Enter number: %d" ,i);
		scanf("%f" ,&num);
		sum += num;
		i++;
	}
	avg = sum/n;
	printf("\n sum = %f\n" ,sum);
	printf("Average = %f\n" ,avg);
}
