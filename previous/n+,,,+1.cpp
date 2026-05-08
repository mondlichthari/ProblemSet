#include<iostream>
using namespace std;
int recu(int a)
{
	if (a == 1) return 1;
	else return a + recu(a-1);
}

int main()
{
	int sum, a;
	cin >> a;

	cout << recu(a);
	return 0;
}

