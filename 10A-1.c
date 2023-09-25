#include<stdio.h>
void main(){
	int num,first_digit,last_digit;
	printf("enter a number: ");
	scanf("%d",&num);
	last_digit = num % 10;
	first_digit = num;
	while(first_digit>=10){
		first_digit = first_digit / 10;}
		int sum = first_digit + last_digit;
		printf("The sum of first and last digit is: %d\n", sum);
	}
