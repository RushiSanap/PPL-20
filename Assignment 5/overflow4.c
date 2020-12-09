#include<stdio.h>
void function(int a, int b, int c) {
	char buffer1[5];
	char buffer2[10];
	char *ret;			//character pointer
	ret = buffer1 + 12;		//address pointer goes to buffer2
	(*ret) += 8;			//pointer crosses buffer2
}
void main() {
	int x;
	x = 0;
	function(1,2,3);		//stack smashes so nothing is printed
	x = 1;
	printf("%d\n",x);
}

//gcc -fno-stack-protector -o overflow4 overflow4.c
//execute with this command to protect stack smashing and get output as 0
