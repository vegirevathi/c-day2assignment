#include <iostream>
using namespace std;

int main()
{
	string str1 = "This is a green apple";
	string str2 = "red";
	str1.replace(10, 5, str2);
	cout << str1;
	return 0;
}
