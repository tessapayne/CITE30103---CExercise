/* Name: Tessa Payne */

#include <stdio.h>
#include <stdbool.h>

int main(void) {

/* 2 */

/* This is x++ */
int x = 0;
printf("/* 2 */ Post-increment\n");
printf("Start: x = %d\n", x);
int returned_post_inc = x;
x = x + 1;
printf("x++ returned (old x): %d\n", returned_post_inc);
printf("After x++, x = %d\n\n", x);

/* This is ++x */
x = 0;
printf("Pre-increment\n");
printf("Reset: x = %d\n", x);
x = x + 1;
int returned_pre_inc = x;
printf("++x returned (new x): %d\n", returned_pre_inc);
printf("After ++x, x = %d\n\n", x);

/* This is x-- */
x = 0;
printf("Post-decrement\n");
printf("Reset: x = %d\n", x);
int returned_post_dec = x;
x = x - 1;
printf("x-- returned (old x): %d\n", returned_post_dec);
printf("After x--, x = %d\n\n", x);

/* This is --x */
x = 0;
printf("Pre-decrement\n");
printf("Reset: x = %d\n", x);
x = x - 1;
int returned_pre_dec = x;
printf("--x returned (new x): %d\n", returned_pre_dec);
printf("After --x, x = %d\n\n", x);

/* 3 */
printf("/* 3 */ Compound assignments with a=9, b=5\n");
int a, b;

a = 9; b = 5; a -= b;  printf("a=9;  a -= b  -> a=%d\n", a);
a = 9; b = 5; a += b;  printf("a=9;  a += b  -> a=%d\n", a);
a = 9; b = 5; a *= b;  printf("a=9;  a *= b  -> a=%d\n", a);
a = 9; b = 5; a /= b;  printf("a=9;  a /= b  -> a=%d  (integer division)\n", a);
a = 9; b = 5; a %= b;  printf("a=9;  a %%= b -> a=%d\n", a);

a = 9; b = 5; a &= b;  printf("a=9;  a &= b  -> a=%d  (bitwise AND)\n", a);
a = 9; b = 5; a |= b;  printf("a=9;  a |= b  -> a=%d  (bitwise OR)\n", a);
a = 9; b = 5; a ^= b;  printf("a=9;  a ^= b  -> a=%d  (bitwise XOR)\n", a);
a = 9; a >>= 1;   printf("a=9;  a >>= 1 -> a=%d  (right shift by 1)\n", a);
a = 9; a <<= 2;   printf("a=9;  a <<= 2 -> a=%d  (left  shift by 2)\n\n", a);

/* 4 */
printf("/* 4 */ Boolean snippet with <stdbool.h>\n");
bool isLoggedIn = true;
bool isAdmin    = false;
printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");
printf("Has access:  %s\n", (isLoggedIn ||  isAdmin) ? "true" : "false");
printf("Not logged in:%s\n\n", (!isLoggedIn) ? "true" : "false");

printf("Same logic using int equivalents (1=true, 0=false)\n");
int isLoggedInI = 1;  /* true */
int isAdminI    = 0;  /* false */
printf("Regular user: %s\n", (isLoggedInI && !isAdminI) ? "true" : "false");
printf("Has access:  %s\n", (isLoggedInI ||  isAdminI)  ? "true" : "false");
printf("Not logged in:%s\n\n", (!isLoggedInI) ? "true" : "false");

/* 5 */
printf("/* 5 */ Logical expressions with a=1, b=0, c=1\n");
int aL = 1, bL = 0, cL = 1;
printf("a) a && b || c -> %d\n", (aL && bL) || cL);
printf("b) (a && b) || c -> %d\n", (aL && bL) || cL);
printf("c) a || b && c -> %d  (&& has higher precedence than ||)\n", aL || (bL && cL));
printf("d) (a || b) && c -> %d\n", (aL || bL) && cL);
printf("e) !a && b -> %d\n", (!aL) && bL);

return 0;

}
