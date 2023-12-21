#include <stdio.h>
#include <limits.h>
#include <assert.h>

#define MAGIC_NUMBER 0xFFFF7F8F

int main(void)
{

	//Part 1
    /*unsigned short a = 65000;
    unsigned short b =   540;
    unsigned short c =     0;

    c = a + b;
    printf("-----Part 1---------\n");
    printf("Result is %hu + %hu = %hu\n", a, b, c);
    */
    //Part 2
    /*assert(sizeof(short)==2);

	unsigned short us = 0;
	short ss = SHRT_MIN;
	
	us -= 1;
	ss -= 1;

	printf("\n-----Part 2---------\n");
	printf("%hu %hd\n", us, ss);
	*/
	//Part 3
	/*assert(sizeof(short)==2);

	short ss = SHRT_MIN;
	int   si = ss;

	printf("\n-----Part 3---------\n");
	printf("%hd %d\n", ss, si);
	printf("%hx %x\n", ss, si);
	*/

	//Part 4
	/*assert(sizeof(short)==2);

  	unsigned int ui = MAGIC_NUMBER;
  	unsigned short us = ui;
  	unsigned char uc = us;

	int si = MAGIC_NUMBER;
	short ss = si;
	signed char sc = ss;

	printf("\n-----Part 4---------\n");
	printf("%10u %5hu %4hhu\n", ui, us, uc);
	printf("%10x %5hx %4hhx\n", ui, us, uc);
	printf("%10d %5hd %4hhd\n", si, ss, sc);
	printf("%10x %5hx %4hhx\n", si, ss, sc);
    */

	//Part 5
    assert(sizeof(unsigned char)==1);

  	unsigned char uc1 = 0xff;
  	unsigned char uc2 = 0;

  	printf("\n-----Part 5---------\n");
  	if(~uc1 == uc2) {
    	printf("%hhx == %hhx\n", ~uc1, uc2);
  	} else {
    	printf("%hhx != %hhx\n", ~uc1, uc2);
  	}

    return 0;
}