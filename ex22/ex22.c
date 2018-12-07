/**************************************************************************
	Purpose: Exercise 22 from C The Hard Way. Learn the where variables
		 are created, exist, and die. Once we learn where things are
		 the concept of scope becomes easier.

	Date: Saturday, November 24, 2018

****************************************************************************/
#include <stdio.h>
#include "ex22.h"
#include "dbg.h"

int THE_SIZE = 1000;

static int THE_AGE = 37;

int get_age()
{
	return THE_AGE;
}

void set_age(int age)
{
	THE_AGE = age;

}

double update_ratio(double new_ratio)
{
	static double ratio = 1.0;

	double old_ratio = ratio;
	ratio = new_ratio;

	return old_ratio;

}

void print_size()
{
	log_info("I think size is: %d", THE_SIZE);
}

