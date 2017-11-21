#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 256 
 
struct person {
	char id[6];
	char sex[2];
	int a_point;
	int b_point;
};

int split( char *str, const char *delim, char *outlist[] ) {
    char    *tk;
    int     cnt = 0;

    tk = strtok( str, delim );
    while( tk != NULL && cnt < N ) {
        outlist[cnt++] = tk;
        tk = strtok( NULL, delim );
    }
    return cnt;
}

int main(void) {
	FILE *fp; 
	char fname[] = "Lesson08_1.txt";
	char str[N];
	struct person p[15];
 
	fp = fopen(fname, "r"); 
	if(fp == NULL) {
		printf("%s file not open!\n", fname);
		return -1;
	}

 
    int num = 0;
	while(fgets(str, N, fp) != NULL) {
    	char    *user[4];
    	int     i, cnt;
    	cnt = split( str, ", " , user );
    	strcpy(p[num].id ,user[0]);
    	strcpy(p[num].sex ,user[1]);
    	p[num].a_point = atoi(user[2]);
    	p[num].b_point = atoi(user[3]);
        num++;
	}
 
	fclose(fp); 
	double a = 0;
	double b = 0;
	int k;
	for(k=0;k<num;k++){
		a+=(double)p[k].a_point;
		b+=(double)p[k].b_point;
	}
	double a_ave = a/(double)num;
	double b_ave = b/(double)num;
	printf("%.1f,%.1f",a_ave,b_ave);

 
	return 0;
}
