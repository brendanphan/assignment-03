/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Brendan Phan <brendanphan1@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* recursive and iterative functions
*/
#include <iostream>
int gcd(int a, int b);
int fib(int n);
int pow(int a, int b);
int tri(int n);
int fib_iter(int n);
int pow_iter(int a, int b);
int gcd_iter(int a, int b);
int tri_iter(int n);
int main()
{
	return 0;
}
int gcd(int a, int b)
{
	if (a < 0)
		a *= -1;
	if (b < 0)
		b *= -1;
	//base case
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	//recursive case
	if (a > b)
		return gcd(a - b, b);
	if (b > a)
		return gcd(a, b - a);
}
int fib(int n)
{
	//base case
	if (n < 2)
		return n;
	//recursive case
	else
		return fib(n - 1) + fib(n - 2);
}
int pow(int a, int b)
{
	//base case
	if (b == 0)
		return 1;
	//recursive case
	else
		return a * pow(a, b-1);
}
int tri(int n)
{
	//base case
	if (n <= 1)
		return n;
	//recursive case
	else
		return n + tri(n - 1);
}
int fib_iter(int n)
{
	int prevPrev = 0;
	int prev = 1;
	int result = 0;
	for (int i = 2; i <= n; i++)
	{
		result = prev + prevPrev;
		prevPrev = prev;
		prev = result;
	}
	return result;
}
int pow_iter(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result *= a;
	}
	return result;
}
int gcd_iter(int a, int b)
{
	while (b!=0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int tri_iter(int n)
{
	int x = 0;
	for (int i = 1; i <= n; i++)
	{
		x += i;
	}
	return x;
}
