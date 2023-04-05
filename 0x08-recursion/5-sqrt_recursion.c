#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to return
 *
 * Return: natural square root, -1 if n does not have a natural squareroot
 */
int _find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return(_find_root(n,root + 1));
}


int _sqrt_recursion(int n)
{
	if(n < 0)
		return (-1);

	return (_find_root(n,0));
}
