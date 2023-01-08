#include <stdio.h>


int main(void)
{
	int x;
	fprintf(stdout , "Please give a 5 digit number\n");
	fscanf(stdin , "%d" , &x);
	fprintf(stdout , "Number given is : %d\n\n" ,  x);
	
	int digit = x / 10000;
	x = x % 10000;
	fprintf(stdout , "the first digit of the number is %d\n" , digit);
	fprintf(stdout , "the remainder of the number is %d\n" , x);
	
	 digit = x / 1000;
	x = x % 1000;
	fprintf(stdout , "the first digit of the number is %d\n" , digit);
	fprintf(stdout , "the remainder of the number is %d\n" , x);
	 digit = x / 100;
	x = x % 100;
	fprintf(stdout , "the first digit of the number is %d\n" , digit);
	fprintf(stdout , "the remainder of the number is %d\n" , x);
	digit = x / 10;
	x = x % 10;
	fprintf(stdout , "the first digit of the number is %d\n" , digit);
	fprintf(stdout , "the remainder of the number is %d\n" , x);
	
	
	/*digit = x / 10000;
	x = x % 10000;
	fprintf(stdout , "the first digit of the number is %d\n" , digit);
	fprintf(stdout , "the remainder of the number is %d\n" , x);
	*/
	
	
	
	return 0;
}
