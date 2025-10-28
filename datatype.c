/* Name: Tessa Payne*/

#include <stdio.h>
/* 2 */
int main(void) {
	int i = 42;
	float f = 3.14f;
	double d = 2.718281828;
	char ch = 'G';
printf("2) int=%d, float=%f, double=%f, char=%c\n", i, f, d, ch);

/* 3 */
char a='a', b='b', c='c', x='x', y='y', z='z';
char A='A', B='B', C='C', X='X', Y='Y', Z='Z';
printf("3a) letters: %c %c %c %c %c %c %c %c %c %c %c %c\n",
a,b,c,x,y,z,A,B,C,X,Y,Z);

char a2=97, b2=98, c2=99, x2=120, y2=121, z2=122;
char A2=65, B2=66, C2=67, X2=88,  Y2=89,  Z2=90;
printf("3b) ASCII letters: %c %c %c %c %c %c %c %c %c %c %c %c\n",
a2,b2,c2,x2,y2,z2,A2,B2,C2,X2,Y2,Z2);

/* 4 */
float sf = 1.23e-3f; 
double sd = 9.876e5;
printf("4) scientific float=%e, scientific double=%e\n", sf, sd);

/* 5 */
float val = 7.0f / 3.0f;
printf("5) val with precisions: %.1f | %.2f | %.4f | %.6f\n", val, val, val, val);

/* 6 */
printf("6) sizeof(int)=%zu, sizeof(float)=%zu, sizeof(double)=%zu, sizeof(char)=%zu\n",
sizeof(int), sizeof(float), sizeof(double), sizeof(char));

/* 7 */
int aNum = 7, bNum = 3;
float q = (float)aNum / (float)bNum;
printf("7a) %d/%d as float = %.3f\n", aNum, bNum, q);
printf("7b) as percentage  = %.2f%%\n", q * 100.0f);

/* 8 */
int normalInt = 1000;
double normalDouble = 3.14;
short int small = -100;
unsigned int count = 25u;
long int big = 1234567890L;
long long int veryBig = 9223372036854775807LL;
unsigned long long int huge = 18446744073709551615ULL;
long double precise = 3.141592653589793238L;

 printf("8) Extended types:\n");
    printf("   normalInt     = %d\n",   normalInt);
    printf("   normalDouble  = %lf\n",  normalDouble);
    printf("   small         = %hd\n",  small);
    printf("   count         = %u\n",   count);
    printf("   big           = %ld\n",  big);
    printf("   veryBig       = %lld\n", veryBig);
    printf("   huge          = %llu\n", huge);
    printf("   precise       = %Lf\n",  precise);

return 0;
}
