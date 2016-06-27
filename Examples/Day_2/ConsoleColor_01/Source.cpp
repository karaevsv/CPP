// https://www.daniweb.com/programming/software-development/code/216345/add-a-little-color-to-your-console-text
//color your text in Windows console mode
// colors are 0=black 1=blue 2=green and so on to 15=white
// colorattribute = foreground + background * 16
// to get red text on yellow use 4 + 14*16 = 228
// light red on yellow would be 12 + 14*16 = 236
// a Dev-C++ tested console application by vegaseat 07nov2004

#include <iostream>
#include <windows.h> // WinApi header

using namespace std; // std::cout, std::cin

void main()
{
	HANDLE hConsole;
	int k;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < 8; i++)
	{
		for (int k = i % 2; k < 8; k++)
		{
			SetConsoleTextAttribute(hConsole, k%2 * 240);
			cout << " ";
		}

		cout << endl;
	}
	system("pause");	
}