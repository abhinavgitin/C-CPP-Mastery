#include <stdio.h>

int main() {
    int a = 10;
    printf("the adress of a is %p\n", &a);
    // this was likelt not working -> int *p = a; so i had to use the &
    int *p = &a;
    // same as 
    // int ptr = &a;
    printf("It is %p\n", p); // from the output the this one gives the adress of "a" <IMPORTANT> like : 1583349036 
    // we do the %p cause the p is the address and for the adress the specifier is %p and not %d; -Wall -Wextra
    printf("It is %d\n", *p); // the one with the star gives the same value of the a so a = *p;
    printf("It is %p\n", &p); // this one also gives the adress of the p : 1583349036
    // so the p gives the adress of a and the &p gives the adress of itslef the "p"
    // can i do ?
    int b = *p;
    // now lest see what will this print 
    printf("the value of b is %d\n",b); // this gives the valur the real number as entered which was 10
    printf("The adress of b is %p\n",&b);  // this gives the address of b no of a 

    // can i do this ?
    *p = 89;
    printf("the value of the pointer is = %d\n", *p);
    printf("the value of the pointer is = %p\n", p);
    // so now what will be the adress of a and the value of a?
    printf("The value of a is now : %d\n", a); // leasson learned : when we change the value of the *ptr the value of the a also changes
    // one more question what if the ptr valur linked to a is changing in the loop does for all the iteration of the loop the 
    // value of the a will also change?
    printf("The adress of a is now : %p\n", &a);
    // once the memory area the adress is allocated the element remains there only to the adress of that remains the same as it was
    // how do we ge the adress of the pointer? itself?

    // now one thing to test 
    // int c = &a; // gives an error!!
    // the address of a is being stored into the c
    // printf("The address of a is being stored in the c and its : %d\n", c);
    // printf("The address of c iis  : %d\n", &c); 
    // what are the outputs? ^^^^^^^^^^^^^^^^^?
    return 0;
}


/*----------------------------------------------------notes---------------------------------------------------------------*/
/*| Part | Meaning                      |
| ---- | ------------------------------ |
| `&a` | address of `a`                 |
| `p`  | stores that address            |
| `*p` | go to that address → get value |


*/