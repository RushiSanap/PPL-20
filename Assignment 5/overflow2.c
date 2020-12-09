/*code for checking alignment for assignning the integers
Requested bytes   Assigned space
1 			4
4			8
5			8
8			16
The amount of space for the stack is completely dependent on the compiler. In this case it's most like an alignment issue where the alignment is 16 bytes and you've requested 8, so it gets increased to 16.*/
#include<stdio.h>

void function(int a, int b, int c){
	char buffer1[5];
	char buffer2[10];
}
void main() {
	function(1,2,3);
}

