// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>

using namespace std;


int main()
{
	int iUserNum;
	int iComputerNum;
	bool bWinState = false;

	srand(time(NULL));

	iComputerNum = rand() % 100 + 1;

	do
	{
		cout << "Make your guess! (1 - 100):" << endl;
		cin >> iUserNum;

		if (iUserNum > iComputerNum)
		{
			cout << "Lower..." << endl;
		}
		else if (iUserNum < iComputerNum)
		{
			cout << "Higher..." << endl;
		}
		else if (iUserNum = iComputerNum)
		{
			cout << "Congratulation :^)" << endl;

			bWinState = true;
		}
		
	} while (bWinState == false);
	

		
	

    return 0;
}

