#include <iostream>
using namespace std;
int add(int x, int y); //function declaration
int main()
{
	int a = 5;
	int b = 6;
	int c;
	c = add(a, b);
	cout << c; //function calling
}
int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}