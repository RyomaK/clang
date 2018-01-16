#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]){
	FILE *fp;
	int cr;
	fp = fopen(argv[1],"r");
	if(fp == NULL){
		printf("err:%s",argv[1]);
	}
	
	fseek(fp,0,SEEK_END);
	printf("file size : %d byte",ftell(fp));
}
	

