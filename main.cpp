#include <iostream>
using namespace std;
#include <Windows.h>
int main(void)
{
	SetConcoleCp(1251);
	SetConsoleOutputCp(1251);
	cout << "Привет мир!!!";
	return 0;
}