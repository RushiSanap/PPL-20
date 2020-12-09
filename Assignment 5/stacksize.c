#include<stdio.h>
int main(){
	//char buffer[8];	stacksize is 0x20 i.e 32 bytes decimal, here also rsp returns +8 value
	
	
	char buffer[17];
	/*(gdb) print $rsp
	$1 = (void *) 0x7fffffffdfb0
	(gdb) print $rsp
	$2 = (void *) 0x7fffffffdf90
	(gdb) print $rsp
	$10 = (void *) 0x7fffffffdfb8
	*/
	return 0;
}
