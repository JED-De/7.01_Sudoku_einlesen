#include <iostream>
#include <string>

using namespace std;

int sudoku[9][9] = { 0 };

void sudoku_eingabe()
{
	std::string eingabe[11] = { };
		for (int m = 0; m < 11; m++)
		{
			std::getline(std::cin, eingabe[m]);
		}

	for (int i = 0, l = 0; i < 11; i++)
	{
		if (i % 4 != 3)
		{
			for (int j = 0, k = 0; j < eingabe[i].size(); j++)
			{
				if (eingabe[i].at(j) >= '0' && eingabe[i].at(j) <= '9')
				{
					sudoku[l][k] = eingabe[i].at(j) - '0';
					k++;
				}
			}
			l++;
		}
	}
}

void sudokuprint()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			
			std::cout << ";"<< sudoku[i][j];
			if (j%3 == 2 && j != 8)
			{
				std::cout << ";" << "//";
			}
		}
		std::cout << std::endl;
		if (i % 3 == 2 && i != 8)
		{		
			std::cout << "=======//=======//=======" << std::endl;
		}
	}
}

int main()
{
	cout << "Bitte geben Sie das Sudoku ein:" << endl;
	sudoku_eingabe();
	cout << endl << "Das Sudoku lautet:" << endl;
	sudokuprint();
	system("PAUSE");
	return 0;
}