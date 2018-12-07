/**************************************************************************
	
	Purpose: Exercise 12 in C the Hard Way
	Date: October 26, 2018

****************************************************************************/
#include <stdio.h>

int main( int argc, const char* argv[] )
{
	int areas[] = { 10, 12, 13, 14, 20 };
	char name[] = "Harrison";
	char full_name[] = {
		'H','a','r','r','i','s','o','n',
		' ','B','.',' ',
		'W','o','o','d','s'
	};
	
	//WARNING: On some systems you may have to change the 
	//%ld in this code to %u since it will use unsigned ints
	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of area (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n",
		sizeof(areas) / sizeof(int));
	printf("The first area is %d, the 2nd %d.\n",areas[0],areas[1]);

	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of name (char[]: %ld\n", sizeof(name));
	printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));

	printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
	printf("The number of chars: %ld\n",
		sizeof(full_name) / sizeof(char));

	full_name[18] = 'X';

	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

	return 0;

}

