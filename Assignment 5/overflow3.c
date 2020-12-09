#include<stdio.h>
#include<string.h>
void overflow(char *str) {
	char buffer[16];		//character array with size 16
	strcpy(buffer,str);		//copy extra elements in the buffer
}
void main(){
	char large_string[256];	
	int i;
	for(i = 0; i < 255; i++){
		large_string[i] = 'A';
		overflow(large_string);	//string is passed to function
	}	
}
