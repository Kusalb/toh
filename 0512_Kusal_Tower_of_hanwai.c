/* 
*
*	Program: To show the solution of Tower of Hanoi problem using recursive method.
* 	Author Kusal Bista
* 	Date: 07/18/2016
*   Ref: Data Structure using C and C++,chap 3, page 144,145
*/
#include<stdio.h>
void towers(int,char, char,char);
int main()
{
	int n;
	printf("enter a numbers:\n");
	scanf("%d",&n);
	towers(n, 'A','C','B');
}
void towers(int n, char frompeg, char topeg, char auxpeg)
{
	if(n==1)
	{
		printf("\n%s %c %s %c", "move disk 1 from peg",frompeg, "to peg",topeg);
		return;
	}
	towers(n-1,frompeg,auxpeg, topeg);
	printf("\n%s %d %s %c %s %c", "move dish", n, "from peg", frompeg," to peg ", topeg);
	towers(n-1,auxpeg, topeg, frompeg);
}



