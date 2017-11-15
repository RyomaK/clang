/*
 * * 100までの素数を求めるプログラム
 * * version 1
 * */

#include <stdio.h>

void sosu(int n){
	int a ,b;
	for(a = 2;a <= n;a++){
		int sum =0;
		for(b = 1;b<=a;b++){
			if(a%b==0)sum++;
		}
		if(sum==2){
			printf("%5d",a);
		}
	}	
}
int main(void) {
	sosu(50);		   
}	
