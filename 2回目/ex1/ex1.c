#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// \‘¢‘Ì‚Ì’è‹`itypedef‚ÅŒ^’è‹`‚µ‚Ä‚¢‚é‚Ì‚ÅAŽg—pŽž‚Éstruct‚ð‚Â‚¯‚È‚­‚Ä—Ç‚¢j
typedef struct Record {
    char id[10];
    char gender[5];
    int score1;
    int score2;
} Record;

int main(void) {
    FILE *fp = fopen("Lesson08_1.txt", "r");
    Record records[20];         // \‘¢‘Ì”z—ñ
    int size = 0;               // \‘¢‘Ì”z—ñ‚Ì—v‘f”‚ð‹L‰¯‚·‚é‚½‚ß‚Ì•Ï”
    char str[20];               // ƒtƒ@ƒCƒ‹‚©‚ç“Ç‚Ýž‚ñ‚¾1s‚Ì•¶Žš—ñ‚ðˆêŽž“I‚É‹L‰¯‚·‚é‚½‚ß‚Ì•Ï”
    
    //ˆês•ª‚ð“Ç‚Ýž‚Ýstr‚É‘ã“ü(sizesof(str)•ª‚ÌƒoƒCƒg”‚ðØ‚èo‚·)
    while (fgets(str, sizeof(str), fp) != NULL) {
        // ID‚ÌØ‚èo‚µ
        char *token = strtok(str, ",");
        //1A001,F,87,87
        strcpy(records[size].id, token);
        
        // «•Ê‚ÌØ‚èo‚µ
        //F,87,87
        token = strtok(NULL, ",");
        strcpy(records[size].gender, token);
        
        // “¾“_1‚ÌØ‚èo‚µ
        token = strtok(NULL, ",");
        records[size].score1 = atoi(token);
        
        // “¾“_2‚ÌØ‚èo‚µ
        token = strtok(NULL, ",");
        records[size].score2 = atoi(token);
        
        size++;
    }
    
    int sum_A, sum_B;
    float average_A, average_B;
    for(int i = 0; i < size; i++){
        sum_A += records[i].score1;
        sum_B += records[i].score2;
    }
    average_A = (float)sum_A/size;
    average_B = (float)sum_B/size;
    
    printf("Average:\n");
    printf("A : %f\n", average_A);
    printf("B : %f\n", average_B);
}



/*#include <stdio.h>
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
*/