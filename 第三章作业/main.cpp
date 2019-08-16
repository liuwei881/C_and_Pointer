#include <stdio.h>
#include "6.h"
#include "7.h"

/*
void test()
{
	static int x;
	x = 100;
	printf("%d\n", x);
}

static char b = 2;

void y()
{

}

int a = 1;
void x()
{
	static float d = 4;
	int c = 3;
}
*/

static int w = 5;
extern int x;

static float func1(int a, int b, int c)
{
	int c, d, e = 1;
	{
		int d, e, w;
		{
			int b, c, d;
			static int y = 2;
		}
	}
	register int a, d, x;
	extern int y;
}

static int y;
float func2(int a)
{
	extern int y;
	static int z;
}


int main()
{
	/*
	enum Liquid jar;
	jar = QUART;
	printf("%d\n", jar);
	jar = enum Liquid (jar + PINT);
	printf("%d\n", jar);
	int a = 10;
	printf("%d\n", a);
	test();
	*/
	return 0;
}

