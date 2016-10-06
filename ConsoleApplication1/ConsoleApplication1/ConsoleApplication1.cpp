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
	int iGuessCounter = 0;
	bool bWinState = false;

	srand(time(NULL));

	iComputerNum = rand() % 1000 + 1;


	do
	{
		cout << "Make your guess! (1 - 100):" << endl;
		cin >> iUserNum;

		if (iUserNum > iComputerNum)
		{
			iGuessCounter++;
			cout << "Lower..." << endl << endl;
			cout << "Guesses = " << iGuessCounter << endl << endl;
			
		}
		else if (iUserNum < iComputerNum)
		{
			iGuessCounter++;
			cout << "Higher..." << endl << endl;
			cout << "Guesses = " << iGuessCounter << endl << endl;
			
		}
		else if (iUserNum = iComputerNum)
		{
			iGuessCounter++;
			cout << "Congratulation :^)" << endl << endl; 
			cout << "Guesses = " << iGuessCounter << endl << endl;
			

			bWinState = true;
		}

	} while (bWinState == false);
	
	system("pause");

    return 0;
}

