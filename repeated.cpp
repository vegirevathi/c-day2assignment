#include <iostream>
using namespace std;

int main() {
	int i, x, n;
	int array[10];
	int counter = 0;

	n = sizeof(array)/ sizeof(array[0]);

	for ( i=1; i<= 100; i++ )
	{
		x = (( i % 10 ) * 11 );
		if ( x == i )
		{
			array[counter++] = x;
		}
	}
	for (i = 0; i < n-1; ++i)
	{
		cout << array[i] << " ";
	}
}
