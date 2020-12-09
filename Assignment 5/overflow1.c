#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//we can use strcat or strcpy like concatenate , no effect

int main(void){
	//stack corruption
	char buf2[16] = "Rushikeshsanap";		//12 characters present
	char buf1[16];
	
 	 //strcpy(buf1,"");   //here there is no effect on buf2
 	 //strcpy(buf1,"Helloworldwelco");		//15 char entered and 16th is NULL, so all printed
 	//strcpy(buf1,"1234567890123456789");	//19 char entered, 3+1NULL char overflow, no effect in buf2 as it is declared first and has address befor it 
 	//strcat(buf2,"123");			//no effect
 	 //strcpy(buf2,"1234567890123456789");	//buf2 overflows and remaining gets stored in buf1
 	/*this is alignment
 	rsp            0x7fffffffdf88      0x7fffffffdf88
 	rsp            0x7fffffffdf80      0x7fffffffdf80
 	rsp            0x7fffffffdf50      0x7fffffffdf50
 	*/
 	//6) strcpy(buf2,"12345678901234567891234567890123456789");	//both arrays get overflow and the stack size changes, segmentation fault(core dumped)	
	
	//buf1 val: 7891234567890123456789
	//buf2 val: 12345678901234567891234567890123456789
	
	//to see the output as "stack smashing detected"
	for(int i=0;i<255;i++){
		buf2[i]='V';
	}
	printf("buf1 val: %s\n",buf1);
	printf("buf2 val: %s\n",buf2);
	printf("buf1 addr: %p\n",(void*)buf1);
	printf("buf2 addr: %p\n",(void*)buf2);
}
