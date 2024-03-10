#include "main.h"

/**
  * _sqrt_recursion_helper - 
  * _sqrt_recursion - 
  *
  *
  */

int recursion_data(int n, int start, int end)
{

	int mid;
	
	if (start > end)
		return -1;
	
	mid = start + (end - start) / 2;

    
	if (mid * mid == n)
		return mid;
	else if (mid * mid < n)
		return recursion_data(n, mid + 1, end);
	else
		return recursion_data(n, start, mid - 1);
}

int _sqrt_recursion(int n)
{
	return recursion_data(n, 0, n);
}
