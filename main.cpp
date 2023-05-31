#include<iostream>
#include<string>
using namespace std;

void showGrid(char g[3][3], string name1, string name2);
void player1(char g[3][3], string name1, string name2);
void player2(char g[3][3], string name1, string name2);
int checkWin(char g[3][3]);

int main()
{
	string playerA, playerB;
	int result = 0;
	char mark = 'X';
	char grid[3][3] = { {'-','-','-'},{'-','-','-'},{'-','-','-'} };
	cout << endl << endl << endl << endl;
	cout << endl << endl << endl;
	cout << "\t\t\t\tEnter player 1 name: ";
	getline(cin, playerA);
	cout << "\t\t\t\tEnter player 2 name: ";
	getline(cin, playerB);

	system("cls");


	cout << endl;
	cout << "\t\t\t\t\t" << playerA << " will play first!" << endl << endl;
	showGrid(grid, playerA, playerB);

	for (int i = 0; i < 9; i++)
	{
		if (i == 0 || i == 2 || i == 4 || i == 6 || i == 8)
		{
			player1(grid, playerA, playerB);
		}
		else if (i == 1 || i == 3 || i == 5 || i == 7)
		{
			player2(grid, playerA, playerB);
		}
		result = checkWin(grid);
		if (result == 1)
		{
			cout << endl;
			cout << "\t\t\t" << playerA << " wins!" << endl;
			break;
		}
		else if (result == 2)
		{
			cout << endl;
			cout << "\t\t\t" << playerB << " wins!" << endl;
			break;
		}
	}
}
void player1(char g[3][3], string name1, string name2)
{
	int mark;
	cout << endl << endl << endl;
	cout << "\t\t\t" << name1 << ": ";
	cin >> mark;
	if (mark == 1 && g[0][0] != 'X' && g[0][0] != 'O')
	{
		g[0][0] = 'X';
	}
	else if (mark == 2 && g[0][1] != 'X' && g[0][1] != 'O')
	{
		g[0][1] = 'X';
	}
	else if (mark == 3 && g[0][2] != 'X' && g[0][2] != 'O')
	{
		g[0][2] = 'X';
	}
	else if (mark == 4 && g[1][0] != 'X' && g[1][0] != 'O')
	{
		g[1][0] = 'X';
	}
	else if (mark == 5 && g[1][1] != 'X' && g[1][1] != 'O')
	{
		g[1][1] = 'X';
	}
	else if (mark == 6 && g[1][2] != 'X' && g[1][2] != 'O')
	{
		g[1][2] = 'X';
	}
	else if (mark == 7 && g[2][0] != 'X' && g[2][0] != 'O')
	{
		g[2][0] = 'X';
	}
	else if (mark == 8 && g[2][1] != 'X' && g[2][1] != 'O')
	{
		g[2][1] = 'X';
	}
	else if (mark == 9 && g[2][2] != 'X' && g[2][2] != 'O')
	{
		g[2][2] = 'X';
	}
	system("cls");
	cout << endl << endl << endl;
	showGrid(g, name1, name2);
}
void player2(char g[3][3], string name1, string name2)
{
	int mark;
	cout << endl << endl << endl;
	cout << "\t\t\t" << name2 << ": ";
	cin >> mark;
	if (mark == 1 && g[0][0] != 'X' && g[0][0] != 'O')
	{
		g[0][0] = 'O';
	}
	else if (mark == 2 && g[0][1] != 'X' && g[0][1] != 'O')
	{
		g[0][1] = 'O';
	}
	else if (mark == 3 && g[0][2] != 'X' && g[0][2] != 'O')
	{
		g[0][2] = 'O';
	}
	else if (mark == 4 && g[1][0] != 'X' && g[1][0] != 'O')
	{
		g[1][0] = 'O';
	}
	else if (mark == 5 && g[1][1] != 'X' && g[1][1] != 'O')
	{
		g[1][1] = 'O';
	}
	else if (mark == 6 && g[1][2] != 'X' && g[1][2] != 'O')
	{
		g[1][2] = 'O';
	}
	else if (mark == 7 && g[2][0] != 'X' && g[2][0] != 'O')
	{
		g[2][0] = 'O';
	}
	else if (mark == 8 && g[2][1] != 'X' && g[2][1] != 'O')
	{
		g[2][1] = 'O';
	}
	else if (mark == 9 && g[2][2] != 'X' && g[2][2] != 'O')
	{
		g[2][2] = 'O';
	}
	system("cls");
	cout << endl << endl << endl;
	showGrid(g, name1, name2);
}
void showGrid(char g[3][3], string name1, string name2)
{
	cout << "\t\t\t\t\t" << name1 << ": X";
	cout << "\t\t   " << name2 << ": O" << endl;
	cout << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t            " << g[0][0] << "  |  " << g[0][1] << "  |  " << g[0][2] << "  " << endl;
	cout << "\t\t\t\t\t          _____|_____|_____" << endl;
	cout << "\t\t\t\t\t            " << g[1][0] << "  |  " << g[1][1] << "  |  " << g[1][2] << "  " << endl;
	cout << "\t\t\t\t\t          _____|_____|_____" << endl;
	cout << "\t\t\t\t\t            " << g[2][0] << "  |  " << g[2][1] << "  |  " << g[2][2] << "  " << endl;
	cout << "\t\t\t\t\t               |     |     " << endl;
}
int checkWin(char g[3][3])
{
	int flag = 0;
	if (g[0][0] == g[0][1] && g[0][0] == g[0][2] && g[0][0] == 'X')
	{
		flag = 1;
	}
	else if (g[1][0] == g[1][1] && g[1][0] == g[1][2] && g[1][0] == 'X')
	{
		flag = 1;
	}
	else if (g[2][0] == g[2][1] && g[2][0] == g[2][2] && g[2][0] == 'X')
	{
		flag = 1;
	}
	else if (g[0][0] == g[1][0] && g[0][0] == g[2][0] && g[0][0] == 'X')
	{
		flag = 1;
	}
	else if (g[0][1] == g[1][1] && g[0][1] == g[2][1] && g[0][1] == 'X')
	{
		flag = 1;
	}
	else if (g[0][2] == g[1][2] && g[0][2] == g[2][2] && g[0][2] == 'X')
	{
		flag = 1;
	}
	else if (g[0][0] == g[1][1] && g[0][0] == g[2][2] && g[0][0] == 'X')
	{
		flag = 1;
	}
	else if (g[0][2] == g[1][1] && g[0][2] == g[2][0] && g[0][2] == 'X')
	{
		flag = 1;
	}
	// for O
	else if (g[0][0] == g[0][1] && g[0][0] == g[0][2] && g[0][0] == 'O')
	{
		flag = 2;
	}
	else if (g[1][0] == g[1][1] && g[1][0] == g[1][2] && g[1][0] == 'O')
	{
		flag = 2;
	}
	else if (g[2][0] == g[2][1] && g[2][0] == g[2][2] && g[2][0] == 'O')
	{
		flag = 2;
	}
	else if (g[0][0] == g[1][0] && g[0][0] == g[2][0] && g[0][0] == 'O')
	{
		flag = 2;
	}
	else if (g[0][1] == g[1][1] && g[0][1] == g[2][1] && g[0][1] == 'O')
	{
		flag = 2;
	}
	else if (g[0][2] == g[1][2] && g[0][2] == g[2][2] && g[0][2] == 'O')
	{
		flag = 2;
	}
	else if (g[0][0] == g[1][1] && g[0][0] == g[2][2] && g[0][0] == 'O')
	{
		flag = 2;
	}
	else if (g[0][2] == g[1][1] && g[0][2] == g[2][0] && g[0][2] == 'O')
	{
		flag = 2;
	}
	return flag;
}