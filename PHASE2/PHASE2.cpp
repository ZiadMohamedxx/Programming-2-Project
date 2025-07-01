#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
void clear_and_draw_fixed_object(char x[][300], int level, int rel)
{


	for (int r = 0; r < 24; r++)
	{
		for (int c = 0; c < 300; c++)
		{
			x[r][c] = ' ';
		}
	}


	for (int i = 0; i < 200; i++)
	{
		x[0][i] = 205;
	}



	if (level == 1)
	{
		cout << "                                                                    MOVE TO PLAY" << endl;

		//instructions
		x[2][58] = 'I';
		x[2][59] = 'N';
		x[2][60] = 'S';
		x[2][61] = 'T';
		x[2][62] = 'R';
		x[2][63] = 'U';
		x[2][64] = 'C';
		x[2][65] = 'T';
		x[2][66] = 'I';
		x[2][67] = 'O';
		x[2][68] = 'N';
		x[2][69] = 'S';

		//space for jump
		x[4][59] = 'S';
		x[4][60] = 'P';
		x[4][61] = 'A';
		x[4][62] = 'C';
		x[4][63] = 'E';
		x[4][64] = '>';
		x[4][65] = '>';
		x[4][66] = 'j';
		x[4][67] = 'u';
		x[4][68] = 'm';
		x[4][69] = 'p';

		//g for gun
		x[5][59] = 'g';
		x[5][60] = '>';
		x[5][61] = '>';
		x[5][62] = 'g';
		x[5][63] = 'u';
		x[5][64] = 'n';

		//l for left jump
		x[6][59] = 'l';
		x[6][60] = '>';
		x[6][61] = '>';
		x[6][62] = 'l';
		x[6][63] = 'e';
		x[6][64] = 'f';
		x[6][65] = 't';
		x[6][66] = ' ';
		x[6][67] = 'j';
		x[6][68] = 'u';
		x[6][69] = 'm';
		x[6][70] = 'p';

		//r for right jump
		x[7][59] = 'r';
		x[7][60] = '>';
		x[7][61] = '>';
		x[7][62] = 'r';
		x[7][63] = 'i';
		x[7][64] = 'g';
		x[7][65] = 'h';
		x[7][66] = 't';
		x[7][67] = ' ';
		x[7][68] = 'j';
		x[7][69] = 'u';
		x[7][70] = 'm';
		x[7][71] = 'p';

		//a for walk left
		x[8][59] = 'a';
		x[8][60] = '>';
		x[8][61] = '>';
		x[8][62] = 'w';
		x[8][63] = 'a';
		x[8][64] = 'l';
		x[8][65] = 'k';
		x[8][66] = ' ';
		x[8][67] = 'l';
		x[8][68] = 'e';
		x[8][69] = 'f';
		x[8][70] = 't';

		//d for walk right
		x[9][59] = 'd';
		x[9][60] = '>';
		x[9][61] = '>';
		x[9][62] = 'w';
		x[9][63] = 'a';
		x[9][64] = 'l';
		x[9][65] = 'k';
		x[9][66] = ' ';
		x[9][67] = 'r';
		x[9][68] = 'i';
		x[9][69] = 'g';
		x[9][70] = 'h';
		x[9][71] = 't';

		//m multi bullet
		x[10][59] = 'm';
		x[10][60] = '>';
		x[10][61] = '>';
		x[10][62] = 'm';
		x[10][63] = 'u';
		x[10][64] = 'l';
		x[10][65] = 't';
		x[10][66] = 'i';
		x[10][67] = ' ';
		x[10][68] = 'b';
		x[10][69] = 'u';
		x[10][70] = 'l';
		x[10][71] = 'l';
		x[10][72] = 'e';
		x[10][73] = 't';

		//b for single bullet
		x[11][59] = 'b';
		x[11][60] = '>';
		x[11][61] = '>';
		x[11][62] = 's';
		x[11][63] = 'i';
		x[11][64] = 'n';
		x[11][65] = 'g';
		x[11][66] = 'l';
		x[11][67] = 'e';
		x[11][68] = ' ';
		x[11][69] = 'b';
		x[11][70] = 'u';
		x[11][71] = 'l';
		x[11][72] = 'l';
		x[11][73] = 'e';
		x[11][74] = 't';

		int rfirst_screen = 15, cfirst_screen = 48;

		x[rfirst_screen + 2][cfirst_screen + 2] = 191;
		x[rfirst_screen][cfirst_screen] = 191;
		x[rfirst_screen + 2][cfirst_screen + 1] = 192;
		x[rfirst_screen + 3][cfirst_screen + 2] = 192;
		x[rfirst_screen + 1][cfirst_screen + 1] = 191;
		x[rfirst_screen + 1][cfirst_screen] = 192;
		int c = 1;
		//door
		x[rfirst_screen - 1][c + 3] = 188;
		x[rfirst_screen - 1][c - 1] = 200;
		x[rfirst_screen - 1][c + 2] = 205;
		x[rfirst_screen - 1][c + 1] = 205;
		x[rfirst_screen - 1][c] = 205;
		x[rfirst_screen - 7][c + 2] = 205;
		x[rfirst_screen - 7][c] = 205;
		x[rfirst_screen - 7][c + 1] = 205;
		x[8][0] = 201;
		x[8][4] = 187;
		x[rfirst_screen - 4][c + 3] = 186;
		x[rfirst_screen - 6][c + 3] = 186;
		x[rfirst_screen - 5][c + 3] = 186;
		x[rfirst_screen - 3][c + 3] = 186;
		x[rfirst_screen - 2][c + 3] = 186;
		x[rfirst_screen - 6][c - 1] = 186;
		x[rfirst_screen - 5][c - 1] = 186;
		x[rfirst_screen - 3][c - 1] = 186;
		x[rfirst_screen - 2][c - 1] = 186;
		x[rfirst_screen - 4][c - 1] = 186;
		x[rfirst_screen - 4][c + 2] = 233;

		for (int i = 47; i >= 25; i--)
		{
			x[15][i] = 196;
		}
		for (int i = 25; i >= 0; i--)
		{
			x[15][i] = 196;
		}
		for (int i = 0; i < 156; i++)
		{
			x[rfirst_screen + 3][i] = 205;
		}

		int row = 10;
		int col = 20;

		//x[row - 9][col + 0] = 196; // '─'
		//x[row - 9][col + 1] = 196; // '─'
		//x[row - 9][col + 2] = 196; // '─'
		x[row - 9][col + 3] = 220; // '▄'
		x[row - 9][col + 4] = 223; // '▀'
		x[row - 9][col + 5] = 223; // '▀'
		x[row - 9][col + 6] = 223; // '▀'
		x[row - 9][col + 7] = 220; // '▄'
		x[row - 9][col + 8] = 220; // '▄'
		x[row - 9][col + 9] = 220; // '▄'
		x[row - 9][col + 10] = 220; // '▄'
		x[row - 9][col + 11] = 220; // '▄'
		x[row - 9][col + 12] = 220; // '▄'
		x[row - 9][col + 13] = 220; // '▄'
		x[row - 9][col + 14] = 223; // '▀'
		x[row - 9][col + 15] = 223; // '▀'
		x[row - 9][col + 16] = 223; // '▀'
		x[row - 9][col + 17] = 220; // '▄'
		/*x[row - 9][col + 18] = 196; // '─'
		x[row - 9][col + 19] = 196; // '─'
		x[row - 9][col + 20] = 196; // '─'
		x[row - 8][col + 0] = 196; // '─'
		x[row - 8][col + 1] = 196; // '─'
		x[row - 8][col + 2] = 196; // '─'*/
		x[row - 8][col + 3] = 219; // '█'
		x[row - 8][col + 4] = 177; // '▒'
		x[row - 8][col + 5] = 177; // '▒'
		x[row - 8][col + 6] = 176; // '░'
		x[row - 8][col + 7] = 176; // '░'
		x[row - 8][col + 8] = 176; // '░'
		x[row - 8][col + 9] = 176; // '░'
		x[row - 8][col + 10] = 176; // '░'
		x[row - 8][col + 11] = 176; // '░'
		x[row - 8][col + 12] = 176; // '░'
		x[row - 8][col + 13] = 176; // '░'
		x[row - 8][col + 14] = 176; // '░'
		x[row - 8][col + 15] = 177; // '▒'
		x[row - 8][col + 16] = 177; // '▒'
		x[row - 8][col + 17] = 219; // '█'
		/*x[row - 8][col + 18] = 196; // '─'
		x[row - 8][col + 19] = 196; // '─'
		x[row - 8][col + 20] = 196; // '─'
		x[row - 7][col + 0] = 196; // '─'
		x[row - 7][col + 1] = 196; // '─'
		x[row - 7][col + 2] = 196; // '─'
		x[row - 7][col + 3] = 196; // '─'*/
		x[row - 7][col + 4] = 219; // '█'
		x[row - 7][col + 5] = 176; // '░'
		x[row - 7][col + 6] = 176; // '░'
		x[row - 7][col + 7] = 219; // '█'
		x[row - 7][col + 8] = 176; // '░'
		x[row - 7][col + 9] = 176; // '░'
		x[row - 7][col + 10] = 176; // '░'
		x[row - 7][col + 11] = 176; // '░'
		x[row - 7][col + 12] = 176; // '░'
		x[row - 7][col + 13] = 219; // '█'
		x[row - 7][col + 14] = 176; // '░'
		x[row - 7][col + 15] = 176; // '░'
		x[row - 7][col + 16] = 219; // '█'
		/*x[row - 7][col + 17] = 196; // '─'
		x[row - 7][col + 18] = 196; // '─'
		x[row - 7][col + 19] = 196; // '─'
		x[row - 7][col + 20] = 196; // '─'
		x[row - 6][col + 0] = 196; // '─'*/
		x[row - 6][col + 1] = 220; // '▄'
		x[row - 6][col + 2] = 220; // '▄'
		//x[row - 6][col + 3] = 196; // '─'
		//x[row - 6][col + 4] = 196; // '─'
		x[row - 6][col + 5] = 219; // '█'
		x[row - 6][col + 6] = 176; // '░'
		x[row - 6][col + 7] = 176; // '░'
		x[row - 6][col + 8] = 176; // '░'
		x[row - 6][col + 9] = 223; // '▀'
		x[row - 6][col + 10] = 219; // '█'
		x[row - 6][col + 11] = 223; // '▀'
		x[row - 6][col + 12] = 176; // '░'
		x[row - 6][col + 13] = 176; // '░'
		x[row - 6][col + 14] = 176; // '░'
		x[row - 6][col + 15] = 219; // '█'
		//x[row - 6][col + 16] = 196; // '─'
		//x[row - 6][col + 17] = 196; // '─'
		x[row - 6][col + 18] = 220; // '▄'
		x[row - 6][col + 19] = 220; // '▄'
		//x[row - 6][col + 20] = 196; // '─'
		x[row - 5][col + 0] = 219; // '█'
		x[row - 5][col + 1] = 176; // '░'
		x[row - 5][col + 2] = 176; // '░'
		x[row - 5][col + 3] = 219; // '█'
		//x[row - 5][col + 4] = 196; // '─'
		x[row - 5][col + 5] = 223; // '▀'
		x[row - 5][col + 6] = 220; // '▄'
		x[row - 5][col + 7] = 176; // '░'
		x[row - 5][col + 8] = 176; // '░'
		x[row - 5][col + 9] = 176; // '░'
		x[row - 5][col + 10] = 176; // '░'
		x[row - 5][col + 11] = 176; // '░'
		x[row - 5][col + 12] = 176; // '░'
		x[row - 5][col + 13] = 176; // '░'
		x[row - 5][col + 14] = 220; // '▄'
		x[row - 5][col + 15] = 223; // '▀'
		//x[row - 5][col + 16] = 196; // '─'
		x[row - 5][col + 17] = 219; // '█'
		x[row - 5][col + 18] = 176; // '░'
		x[row - 5][col + 19] = 176; // '░'
		x[row - 5][col + 20] = 219; // '█'
		x[row - 4][col + 0] = 219; // '█'
		x[row - 4][col + 1] = 223; // '▀'
		x[row - 4][col + 2] = 223; // '▀'
		x[row - 4][col + 3] = 223; // '▀'
		x[row - 4][col + 4] = 223; // '▀'
		x[row - 4][col + 5] = 223; // '▀'
		x[row - 4][col + 6] = 223; // '▀'
		x[row - 4][col + 7] = 223; // '▀'
		x[row - 4][col + 8] = 223; // '▀'
		x[row - 4][col + 9] = 223; // '▀'
		x[row - 4][col + 10] = 223; // '▀'
		x[row - 4][col + 11] = 223; // '▀'
		x[row - 4][col + 12] = 223; // '▀'
		x[row - 4][col + 13] = 223; // '▀'
		x[row - 4][col + 14] = 223; // '▀'
		x[row - 4][col + 15] = 223; // '▀'
		x[row - 4][col + 16] = 223; // '▀'
		x[row - 4][col + 17] = 223; // '▀'
		x[row - 4][col + 18] = 223; // '▀'
		x[row - 4][col + 19] = 223; // '▀'
		x[row - 4][col + 20] = 223; // '▀'
		x[row - 4][col + 21] = 219; // '█'
		x[row - 3][col + 0] = 219; // '█'
		x[row - 3][col + 1] = 176; // '░'
		x[row - 3][col + 2] = 176; // '░'
		x[row - 3][col + 3] = 203; // '╦'
		//x[row - 3][col + 4] = 196; // '─'
		x[row - 3][col + 5] = 203; // '╦'
		x[row - 3][col + 6] = 201; // '╔'
		x[row - 3][col + 7] = 187; // '╗'
		x[row - 3][col + 8] = 203; // '╦'
		//x[row - 3][col + 9] = 196; // '─'
		x[row - 3][col + 10] = 201; // '╔'
		x[row - 3][col + 11] = 187; // '╗'
		x[row - 3][col + 12] = 201; // '╔'
		x[row - 3][col + 13] = 187; // '╗'
		x[row - 3][col + 14] = 201; // '╔'
		x[row - 3][col + 15] = 203; // '╦'
		x[row - 3][col + 16] = 187; // '╗'
		x[row - 3][col + 17] = 201; // '╔'
		x[row - 3][col + 18] = 187; // '╗'
		x[row - 3][col + 19] = 176; // '░'
		x[row - 3][col + 20] = 176; // '░'
		x[row - 3][col + 21] = 219; // '█'
		x[row - 2][col + 0] = 219; // '█'
		x[row - 2][col + 1] = 176; // '░'
		x[row - 2][col + 2] = 176; // '░'
		x[row - 2][col + 3] = 186; // '║'
		x[row - 2][col + 4] = 186; // '║'
		x[row - 2][col + 5] = 186; // '║'
		x[row - 2][col + 6] = 204; // '╠'
		//x[row - 2][col + 7] = 196; // '─'
		x[row - 2][col + 8] = 186; // '║'
		//x[row - 2][col + 9] = 196; // '─'
		x[row - 2][col + 10] = 186; // '║'
		//x[row - 2][col + 11] = 196; // '─'
		x[row - 2][col + 12] = 186; // '║'
		x[row - 2][col + 13] = 186; // '║'
		x[row - 2][col + 14] = 186; // '║'
		x[row - 2][col + 15] = 186; // '║'
		x[row - 2][col + 16] = 186; // '║'
		x[row - 2][col + 17] = 204; // '╠'
		//x[row - 2][col + 18] = 196; // '─'
		x[row - 2][col + 19] = 176; // '░'
		x[row - 2][col + 20] = 176; // '░'
		x[row - 2][col + 21] = 219; // '█'
		x[row - 1][col + 0] = 219; // '█'
		x[row - 1][col + 1] = 176; // '░'
		x[row - 1][col + 2] = 176; // '░'
		x[row - 1][col + 3] = 200; // '╚'
		x[row - 1][col + 4] = 202; // '╩'
		x[row - 1][col + 5] = 188; // '╝'
		x[row - 1][col + 6] = 200; // '╚'
		x[row - 1][col + 7] = 188; // '╝'
		x[row - 1][col + 8] = 200; // '╚'
		x[row - 1][col + 9] = 188; // '╝'
		x[row - 1][col + 10] = 200; // '╚'
		x[row - 1][col + 11] = 188; // '╝'
		x[row - 1][col + 12] = 200; // '╚'
		x[row - 1][col + 13] = 188; // '╝'
		x[row - 1][col + 14] = 202; // '╩'
		x[row - 1][col + 15] = 196; // '─'
		x[row - 1][col + 16] = 202; // '╩'
		x[row - 1][col + 17] = 200; // '╚'
		x[row - 1][col + 18] = 188; // '╝'
		x[row - 1][col + 19] = 176; // '░'
		x[row - 1][col + 20] = 176; // '░'
		x[row - 1][col + 21] = 219; // '█'
		x[row - 0][col + 0] = 219; // '█'
		x[row - 0][col + 1] = 220; // '▄'
		x[row - 0][col + 2] = 220; // '▄'
		x[row - 0][col + 3] = 220; // '▄'
		x[row - 0][col + 4] = 220; // '▄'
		x[row - 0][col + 5] = 220; // '▄'
		x[row - 0][col + 6] = 220; // '▄'
		x[row - 0][col + 7] = 220; // '▄'
		x[row - 0][col + 8] = 220; // '▄'
		x[row - 0][col + 9] = 220; // '▄'
		x[row - 0][col + 10] = 220; // '▄'
		x[row - 0][col + 11] = 220; // '▄'
		x[row - 0][col + 12] = 220; // '▄'
		x[row - 0][col + 13] = 220; // '▄'
		x[row - 0][col + 14] = 220; // '▄'
		x[row - 0][col + 15] = 220; // '▄'
		x[row - 0][col + 16] = 220; // '▄'
		x[row - 0][col + 17] = 220; // '▄'
		x[row - 0][col + 18] = 220; // '▄'
		x[row - 0][col + 19] = 220; // '▄'
		x[row - 0][col + 20] = 220; // '▄'
		x[row - 0][col + 21] = 219; // '█'



	}
	if (level == 2)
	{
		for (int i = 0; i < 156; i++)
		{
			x[8][i] = 205;
		}
		for (int i = 0; i < 156; i++)
		{
			x[0][i] = 205;
			x[20][i] = 205;
		}
		int rselm = 7, cselm = 0;
		x[rselm - 6][cselm + 0] = 206; // '╬'
		x[rselm - 6][cselm + 1] = 205; // '═'
		x[rselm - 6][cselm + 2] = 206; // '╬'
		x[rselm - 5][cselm + 0] = 206; // '╬'
		x[rselm - 5][cselm + 1] = 205; // '═'
		x[rselm - 5][cselm + 2] = 206; // '╬'
		x[rselm - 4][cselm + 0] = 206; // '╬'
		x[rselm - 4][cselm + 1] = 205; // '═'
		x[rselm - 4][cselm + 2] = 206; // '╬'
		x[rselm - 3][cselm + 0] = 206; // '╬'
		x[rselm - 3][cselm + 1] = 205; // '═'
		x[rselm - 3][cselm + 2] = 206; // '╬'
		x[rselm - 2][cselm + 0] = 206; // '╬'
		x[rselm - 2][cselm + 1] = 205; // '═'
		x[rselm - 2][cselm + 2] = 206; // '╬'
		x[rselm - 1][cselm + 0] = 206; // '╬'
		x[rselm - 1][cselm + 1] = 205; // '═'
		x[rselm - 1][cselm + 2] = 206; // '╬'
		x[rselm - 0][cselm + 0] = 206; // '╬'
		x[rselm - 0][cselm + 1] = 205; // '═'
		x[rselm - 0][cselm + 2] = 206; // '╬'

	}
	if (level == 3)
	{
		for (int i = 0; i < 156; i++)
		{

			x[20][i] = 205;
		}

		int roww = 10;
		int coll = 6;

		x[roww - 4][coll + 0] = 219; // '█'
		x[roww - 4][coll + 1] = 219; // '█'
		x[roww - 4][coll + 2] = 187; // '╗'
		x[roww - 4][coll + 6] = 219; // '█'
		x[roww - 4][coll + 7] = 219; // '█'
		x[roww - 4][coll + 8] = 187; // '╗'
		x[roww - 4][coll + 10] = 219; // '█'
		x[roww - 4][coll + 11] = 219; // '█'
		x[roww - 4][coll + 12] = 219; // '█'
		x[roww - 4][coll + 13] = 219; // '█'
		x[roww - 4][coll + 14] = 219; // '█'
		x[roww - 4][coll + 15] = 219; // '█'
		x[roww - 4][coll + 16] = 187; // '╗'
		x[roww - 4][coll + 18] = 219; // '█'
		x[roww - 4][coll + 19] = 219; // '█'
		x[roww - 4][coll + 20] = 187; // '╗'
		x[roww - 4][coll + 24] = 219; // '█'
		x[roww - 4][coll + 25] = 219; // '█'
		x[roww - 4][coll + 26] = 187; // '╗'
		x[roww - 4][coll + 31] = 219; // '█'
		x[roww - 4][coll + 32] = 219; // '█'
		x[roww - 4][coll + 33] = 187; // '╗'
		x[roww - 4][coll + 38] = 219; // '█'
		x[roww - 4][coll + 39] = 219; // '█'
		x[roww - 4][coll + 40] = 187; // '╗'
		x[roww - 4][coll + 42] = 219; // '█'
		x[roww - 4][coll + 43] = 219; // '█'
		x[roww - 4][coll + 44] = 219; // '█'
		x[roww - 4][coll + 45] = 219; // '█'
		x[roww - 4][coll + 46] = 219; // '█'
		x[roww - 4][coll + 47] = 219; // '█'
		x[roww - 4][coll + 48] = 187; // '╗'
		x[roww - 4][coll + 50] = 219; // '█'
		x[roww - 4][coll + 51] = 219; // '█'
		x[roww - 4][coll + 52] = 219; // '█'
		x[roww - 4][coll + 53] = 187; // '╗'
		x[roww - 4][coll + 57] = 219; // '█'
		x[roww - 4][coll + 58] = 219; // '█'
		x[roww - 4][coll + 59] = 187; // '╗'
		x[roww - 4][coll + 64] = 219; // '█'
		x[roww - 4][coll + 65] = 219; // '█'
		x[roww - 4][coll + 66] = 187; // '╗'
		x[roww - 3][coll + 0] = 200; // '╚'
		x[roww - 3][coll + 1] = 219; // '█'
		x[roww - 3][coll + 2] = 219; // '█'
		x[roww - 3][coll + 3] = 187; // '╗'
		x[roww - 3][coll + 5] = 219; // '█'
		x[roww - 3][coll + 6] = 219; // '█'
		x[roww - 3][coll + 7] = 201; // '╔'
		x[roww - 3][coll + 8] = 188; // '╝'
		x[roww - 3][coll + 9] = 219; // '█'
		x[roww - 3][coll + 10] = 219; // '█'
		x[roww - 3][coll + 11] = 201; // '╔'
		x[roww - 3][coll + 12] = 205; // '═'
		x[roww - 3][coll + 13] = 205; // '═'
		x[roww - 3][coll + 14] = 205; // '═'
		x[roww - 3][coll + 15] = 219; // '█'
		x[roww - 3][coll + 16] = 219; // '█'
		x[roww - 3][coll + 17] = 187; // '╗'
		x[roww - 3][coll + 18] = 219; // '█'
		x[roww - 3][coll + 19] = 219; // '█'
		x[roww - 3][coll + 20] = 186; // '║'
		x[roww - 3][coll + 24] = 219; // '█'
		x[roww - 3][coll + 25] = 219; // '█'
		x[roww - 3][coll + 26] = 186; // '║'
		x[roww - 3][coll + 31] = 219; // '█'
		x[roww - 3][coll + 32] = 219; // '█'
		x[roww - 3][coll + 33] = 186; // '║'
		x[roww - 3][coll + 38] = 219; // '█'
		x[roww - 3][coll + 39] = 219; // '█'
		x[roww - 3][coll + 40] = 186; // '║'
		x[roww - 3][coll + 41] = 219; // '█'
		x[roww - 3][coll + 42] = 219; // '█'
		x[roww - 3][coll + 43] = 201; // '╔'
		x[roww - 3][coll + 44] = 205; // '═'
		x[roww - 3][coll + 45] = 205; // '═'
		x[roww - 3][coll + 46] = 205; // '═'
		x[roww - 3][coll + 47] = 219; // '█'
		x[roww - 3][coll + 48] = 219; // '█'
		x[roww - 3][coll + 49] = 187; // '╗'
		x[roww - 3][coll + 50] = 219; // '█'
		x[roww - 3][coll + 51] = 219; // '█'
		x[roww - 3][coll + 52] = 219; // '█'
		x[roww - 3][coll + 53] = 219; // '█'
		x[roww - 3][coll + 54] = 187; // '╗'
		x[roww - 3][coll + 57] = 219; // '█'
		x[roww - 3][coll + 58] = 219; // '█'
		x[roww - 3][coll + 59] = 186; // '║'
		x[roww - 3][coll + 64] = 219; // '█'
		x[roww - 3][coll + 65] = 219; // '█'
		x[roww - 3][coll + 66] = 186; // '║'
		x[roww - 2][coll + 1] = 200; // '╚'
		x[roww - 2][coll + 2] = 219; // '█'
		x[roww - 2][coll + 3] = 219; // '█'
		x[roww - 2][coll + 4] = 219; // '█'
		x[roww - 2][coll + 5] = 219; // '█'
		x[roww - 2][coll + 6] = 201; // '╔'
		x[roww - 2][coll + 7] = 188; // '╝'
		x[roww - 2][coll + 9] = 219; // '█'
		x[roww - 2][coll + 10] = 219; // '█'
		x[roww - 2][coll + 11] = 186; // '║'
		x[roww - 2][coll + 15] = 219; // '█'
		x[roww - 2][coll + 16] = 219; // '█'
		x[roww - 2][coll + 17] = 186; // '║'
		x[roww - 2][coll + 18] = 219; // '█'
		x[roww - 2][coll + 19] = 219; // '█'
		x[roww - 2][coll + 20] = 186; // '║'
		x[roww - 2][coll + 24] = 219; // '█'
		x[roww - 2][coll + 25] = 219; // '█'
		x[roww - 2][coll + 26] = 186; // '║'
		x[roww - 2][coll + 31] = 219; // '█'
		x[roww - 2][coll + 32] = 219; // '█'
		x[roww - 2][coll + 33] = 186; // '║'
		x[roww - 2][coll + 35] = 187; // '╗'
		x[roww - 2][coll + 36] = 219; // '█'
		x[roww - 2][coll + 38] = 219; // '█'
		x[roww - 2][coll + 39] = 219; // '█'
		x[roww - 2][coll + 40] = 186; // '║'
		x[roww - 2][coll + 41] = 219; // '█'
		x[roww - 2][coll + 42] = 219; // '█'
		x[roww - 2][coll + 43] = 186; // '║'
		x[roww - 2][coll + 47] = 219; // '█'
		x[roww - 2][coll + 48] = 219; // '█'
		x[roww - 2][coll + 49] = 186; // '║'
		x[roww - 2][coll + 50] = 219; // '█'
		x[roww - 2][coll + 51] = 219; // '█'
		x[roww - 2][coll + 52] = 201; // '╔'
		x[roww - 2][coll + 53] = 219; // '█'
		x[roww - 2][coll + 54] = 219; // '█'
		x[roww - 2][coll + 55] = 187; // '╗'
		x[roww - 2][coll + 57] = 219; // '█'
		x[roww - 2][coll + 58] = 219; // '█'
		x[roww - 2][coll + 59] = 186; // '║'
		x[roww - 2][coll + 64] = 219; // '█'
		x[roww - 2][coll + 65] = 219; // '█'
		x[roww - 2][coll + 66] = 186; // '║'
		x[roww - 1][coll + 2] = 200; // '╚'
		x[roww - 1][coll + 3] = 219; // '█'
		x[roww - 1][coll + 4] = 219; // '█'
		x[roww - 1][coll + 5] = 201; // '╔'
		x[roww - 1][coll + 6] = 188; // '╝'
		x[roww - 1][coll + 9] = 219; // '█'
		x[roww - 1][coll + 10] = 219; // '█'
		x[roww - 1][coll + 11] = 186; // '║'
		x[roww - 1][coll + 15] = 219; // '█'
		x[roww - 1][coll + 16] = 219; // '█'
		x[roww - 1][coll + 17] = 186; // '║'
		x[roww - 1][coll + 18] = 219; // '█'
		x[roww - 1][coll + 19] = 219; // '█'
		x[roww - 1][coll + 20] = 186; // '║'
		x[roww - 1][coll + 24] = 219; // '█'
		x[roww - 1][coll + 25] = 219; // '█'
		x[roww - 1][coll + 26] = 186; // '║'
		x[roww - 1][coll + 31] = 219; // '█'
		x[roww - 1][coll + 32] = 219; // '█'
		x[roww - 1][coll + 33] = 186; // '║'
		x[roww - 1][coll + 34] = 219; // '█'
		x[roww - 1][coll + 35] = 219; // '█'
		x[roww - 1][coll + 36] = 219; // '█'
		x[roww - 1][coll + 37] = 187; // '╗'
		x[roww - 1][coll + 38] = 219; // '█'
		x[roww - 1][coll + 39] = 219; // '█'
		x[roww - 1][coll + 40] = 186; // '║'
		x[roww - 1][coll + 41] = 219; // '█'
		x[roww - 1][coll + 42] = 219; // '█'
		x[roww - 1][coll + 43] = 186; // '║'
		x[roww - 1][coll + 47] = 219; // '█'
		x[roww - 1][coll + 48] = 219; // '█'
		x[roww - 1][coll + 49] = 186; // '║'
		x[roww - 1][coll + 50] = 219; // '█'
		x[roww - 1][coll + 51] = 219; // '█'
		x[roww - 1][coll + 52] = 186; // '║'
		x[roww - 1][coll + 53] = 200; // '╚'
		x[roww - 1][coll + 54] = 219; // '█'
		x[roww - 1][coll + 55] = 219; // '█'
		x[roww - 1][coll + 56] = 187; // '╗'
		x[roww - 1][coll + 57] = 219; // '█'
		x[roww - 1][coll + 58] = 219; // '█'
		x[roww - 1][coll + 59] = 186; // '║'
		x[roww - 1][coll + 64] = 200; // '╚'
		x[roww - 1][coll + 65] = 205; // '═'
		x[roww - 1][coll + 66] = 188; // '╝'
		x[roww - 0][coll + 3] = 219; // '█'
		x[roww - 0][coll + 4] = 219; // '█'
		x[roww - 0][coll + 5] = 186; // '║'
		x[roww - 0][coll + 9] = 200; // '╚'
		x[roww - 0][coll + 10] = 219; // '█'
		x[roww - 0][coll + 11] = 219; // '█'
		x[roww - 0][coll + 12] = 219; // '█'
		x[roww - 0][coll + 13] = 219; // '█'
		x[roww - 0][coll + 14] = 219; // '█'
		x[roww - 0][coll + 15] = 219; // '█'
		x[roww - 0][coll + 16] = 201; // '╔'
		x[roww - 0][coll + 17] = 188; // '╝'
		x[roww - 0][coll + 18] = 200; // '╚'
		x[roww - 0][coll + 19] = 219; // '█'
		x[roww - 0][coll + 20] = 219; // '█'
		x[roww - 0][coll + 21] = 219; // '█'
		x[roww - 0][coll + 22] = 219; // '█'
		x[roww - 0][coll + 23] = 219; // '█'
		x[roww - 0][coll + 24] = 219; // '█'
		x[roww - 0][coll + 25] = 201; // '╔'
		x[roww - 0][coll + 26] = 188; // '╝'
		x[roww - 0][coll + 31] = 200; // '╚'
		x[roww - 0][coll + 32] = 219; // '█'
		x[roww - 0][coll + 33] = 219; // '█'
		x[roww - 0][coll + 34] = 219; // '█'
		x[roww - 0][coll + 35] = 201; // '╔'
		x[roww - 0][coll + 36] = 219; // '█'
		x[roww - 0][coll + 37] = 219; // '█'
		x[roww - 0][coll + 38] = 219; // '█'
		x[roww - 0][coll + 39] = 201; // '╔'
		x[roww - 0][coll + 40] = 188; // '╝'
		x[roww - 0][coll + 41] = 200; // '╚'
		x[roww - 0][coll + 42] = 219; // '█'
		x[roww - 0][coll + 43] = 219; // '█'
		x[roww - 0][coll + 44] = 219; // '█'
		x[roww - 0][coll + 45] = 219; // '█'
		x[roww - 0][coll + 46] = 219; // '█'
		x[roww - 0][coll + 47] = 219; // '█'
		x[roww - 0][coll + 48] = 201; // '╔'
		x[roww - 0][coll + 49] = 188; // '╝'
		x[roww - 0][coll + 50] = 219; // '█'
		x[roww - 0][coll + 51] = 219; // '█'
		x[roww - 0][coll + 52] = 186; // '║'
		x[roww - 0][coll + 54] = 200; // '╚'
		x[roww - 0][coll + 55] = 219; // '█'
		x[roww - 0][coll + 56] = 219; // '█'
		x[roww - 0][coll + 57] = 219; // '█'
		x[roww - 0][coll + 58] = 219; // '█'
		x[roww - 0][coll + 59] = 186; // '║'
		x[roww - 0][coll + 64] = 219; // '█'
		x[roww - 0][coll + 65] = 219; // '█'
		x[roww - 0][coll + 66] = 187; // '╗'

	}

}
void cout_mat_to_screen(char x[][300], int level, int& scroll)
{

	system("cls");
	for (int r = 0; r < 24; r++)
	{
		for (int c = 0; c < 80; c++)
		{
			cout << x[r][c];
		}
		cout << endl;
	}
	cout.flush();
}
void scrolling(int scroll, char x[][300], int chero)
{

	int hero_screen_pos = chero - scroll;
	if (hero_screen_pos < 20)
	{
		scroll -= (20 - hero_screen_pos);
		if (scroll < 0)
		{
			scroll = 0;
		}
	}
	else if (hero_screen_pos > 60)
	{
		scroll += (hero_screen_pos - 60);
		if (scroll > 220)
		{
			scroll = 220;
		}
	}

	system("cls");
	for (int r = 0; r < 24; r++)
	{
		for (int c = scroll; c < scroll + 80; c++)
		{
			cout << x[r][c];
		}
		cout << endl;
	}
	cout.flush();

}
void grav(char x[][300], int& r, int& c, int& f)
{
	r++;
	f++;
}
void move_hero(int& rhero, int& chero, char user_move, char x[][300])
{
	if (x[rhero][chero - 3] == ' ')
	{
		if (user_move == 'a')
			chero--;
	}
	if (x[rhero][chero + 3] == ' ')
	{
		if (user_move == 'd')
			chero++;
	}

}
void jump(int& r)
{
	r--;
}
void jump_left(int& r, int& c)
{
	r--;
	c--;
}
void jump_right(int& r, int& c)
{
	r--;
	c++;
}
void draw_hero(int rhero, int chero, char x[][300], int f, int shot, int& shotoff, int ctheal)
{
	x[rhero][chero] = 'O';
	x[rhero + 1][chero] = 219;
	x[rhero + 1][chero + 1] = '\\';
	x[rhero + 1][chero - 1] = '/';
	x[rhero + 2][chero - 1] = '/';
	x[rhero + 2][chero + 1] = '\\';
	//	GUN	
	if (f == 1)
	{
		x[rhero + 1][chero - 2] = 187;
		x[rhero + 1][chero - 3] = 205;
	}
	//health bar

	x[9][chero] = 'H';
	x[9][chero + 1] = 'E';
	x[9][chero + 2] = 'A';
	x[9][chero + 3] = 'L';
	x[9][chero + 4] = 'T';
	x[9][chero + 5] = 'H';
	x[9][chero + 6] = ' ';
	x[9][chero + 7] = 'B';
	x[9][chero + 8] = 'A';
	x[9][chero + 9] = 'R';

	int rheal = 10, cheal = chero;
	for (int i = 0; i < ctheal; i++)
	{
		x[rheal][cheal + i] = 219;

	}
}
void draw_bullet(int& rhero, int& chero, char x[][300])
{
	x[rhero + 1][chero - 6] = '<';

}
void move_bullet(int& c)
{
	c--;
}
void draw_mult_bullet(char x[][300], int i, int r_bullett[], int c_bullett[], int& flag_bul_off, int flags[])
{
	for (int w = 0; w < i + 1; w++)
	{
		if (flags[w] == 1)
		{
			x[r_bullett[w]][c_bullett[w]] = '<';
		}
	}

}
void move_mult_bullet(int i, int r_bullett[100], int c_bullett[100], int flags[])
{
	for (int w = 0; w < i + 1; w++)
	{
		if (flags[w] == 1)
		{
			c_bullett[w]--;
		}
	}
}
void check_bullet(int r_bullet[], int c_bullet[], int i, char x[][300], int flags[], int r, int c, int& f)
{

	for (int w = 0; w < i + 1; w++)
	{
		if (x[r_bullet[w]][c_bullet[w]] != ' ' || c_bullet[w] < -1)
		{
			if (flags[w] == 1)
			{
				flags[w] = 0;
			}

		}
		if (r == r_bullet[w] + 3 && c == c_bullet[w])
		{
			f = 1;
		}
	}
}
void Moveenmy1(int& r, int& c, int& dir, int rhero, int chero, int& ctheal)
{
	if (dir == -1)
	{
		if (c == 8)
		{
			dir *= -1;
		}
	}
	else
	{
		if ((c + 2) == chero - 10)
		{
			dir *= -1;
		}
	}

	c += dir;
	if (rhero == r - 3 && chero == c + 9)
	{

		ctheal--;

	}


}
void Drawenmy1(int r, int c, char x[][300])
{
	x[r - 7][c + 0] = '(';
	x[r - 7][c + 1] = '_';
	x[r - 7][c + 2] = '|';
	x[r - 7][c + 3] = ')';
	x[r - 7][c + 7] = '|';
	x[r - 7][c + 8] = '@';
	x[r - 7][c + 9] = '@';
	x[r - 7][c + 10] = '|';
	x[r - 6][c + 1] = '\\';
	x[r - 6][c + 3] = '\\';
	x[r - 6][c + 4] = '_';
	x[r - 6][c + 5] = '_';
	x[r - 6][c + 7] = '\\';
	x[r - 6][c + 8] = '-';
	x[r - 6][c + 9] = '-';
	x[r - 6][c + 10] = '/';
	x[r - 6][c + 12] = '_';
	x[r - 6][c + 13] = '_';
	x[r - 5][c + 2] = '\\';
	x[r - 5][c + 3] = 'o';
	x[r - 5][c + 4] = '_';
	x[r - 5][c + 5] = '_';
	x[r - 5][c + 6] = '|';
	x[r - 5][c + 7] = '-';
	x[r - 5][c + 8] = '-';
	x[r - 5][c + 9] = '-';
	x[r - 5][c + 10] = '-';
	x[r - 5][c + 11] = '|';
	x[r - 5][c + 14] = '|';
	x[r - 5][c + 18] = '_';
	x[r - 5][c + 19] = '_';
	x[r - 4][c + 6] = '\\';
	x[r - 4][c + 8] = '}';
	x[r - 4][c + 9] = '{';
	x[r - 4][c + 11] = '/';
	x[r - 4][c + 12] = '\\';
	x[r - 4][c + 14] = ')';
	x[r - 4][c + 15] = '_';
	x[r - 4][c + 17] = '/';
	x[r - 4][c + 19] = '_';
	x[r - 4][c + 20] = '\\';
	x[r - 3][c + 6] = '/';
	x[r - 3][c + 7] = '\\';
	x[r - 3][c + 8] = '_';
	x[r - 3][c + 9] = '_';
	x[r - 3][c + 10] = '/';
	x[r - 3][c + 11] = '\\';
	x[r - 3][c + 13] = '\\';
	x[r - 3][c + 14] = '_';
	x[r - 3][c + 15] = '_';
	x[r - 3][c + 16] = 'O';
	x[r - 3][c + 18] = '(';
	x[r - 3][c + 19] = '_';
	x[r - 3][c + 20] = '_';
	x[r - 2][c + 5] = '(';
	x[r - 2][c + 6] = '-';
	x[r - 2][c + 7] = '-';
	x[r - 2][c + 8] = '/';
	x[r - 2][c + 9] = '\\';
	x[r - 2][c + 10] = '-';
	x[r - 2][c + 11] = '-';
	x[r - 2][c + 12] = ')';
	x[r - 2][c + 17] = '\\';
	x[r - 2][c + 18] = '_';
	x[r - 2][c + 19] = '_';
	x[r - 2][c + 20] = '/';
	x[r - 1][c + 5] = '_';
	x[r - 1][c + 6] = ')';
	x[r - 1][c + 7] = '(';
	x[r - 1][c + 10] = ')';
	x[r - 1][c + 11] = '(';
	x[r - 1][c + 12] = '_';
	x[r - 0][c + 4] = '`';
	x[r - 0][c + 5] = '-';
	x[r - 0][c + 6] = '-';
	x[r - 0][c + 7] = '-';
	x[r - 0][c + 8] = '\'';
	x[r - 0][c + 9] = '\'';
	x[r - 0][c + 10] = '-';
	x[r - 0][c + 11] = '-';
	x[r - 0][c + 12] = '-';
	x[r - 0][c + 13] = '`';

}
void Drawenmy2(int r, int c, char x[][300])
{
	x[r][c - 1] = '/';
	x[r][c] = '\\';
	x[r + 1][c - 1] = '|';
	x[r + 1][c] = 248;
	x[r + 1][c + 2] = 248;
	x[r + 2][c] = '\\';
	x[r + 2][c + 1] = '_';
	x[r][c + 1] = '_';
	x[r][c + 2] = '/';
	x[r + 1][c + 3] = '|';
	x[r][c + 3] = '\\';
	x[r + 2][c + 2] = '/';
}
void Drawenmy3(int r, int c, char x[][300])
{
	x[r][c] = 191;
	x[r + 1][c] = 179;
	x[r + 2][c] = 217;
	x[r + 2][c - 1] = 196;
	x[r + 2][c - 2] = 196;
	x[r + 2][c - 3] = 196;
	x[r + 2][c - 4] = 192;
	x[r + 1][c - 4] = 179;
	x[r][c - 4] = 218;
	x[r][c - 3] = 196;
	x[r][c - 2] = 196;
	x[r][c - 1] = 196;
	x[r][c - 1] = 220;
	x[r][c - 3] = 220;
	x[r + 1][c - 2] = 254;


}
void Drawenmy4(int r, int c, char x[][300])
{
	x[r][c] = '(';
	x[r][c + 1] = '(';
	x[r][c + 2] = '_';
	x[r][c + 3] = ',';
	x[r][c + 4] = '.';
	x[r][c + 5] = '.';
	x[r][c + 6] = '.';
	x[r][c + 8] = ',';
	x[r][c + 9] = '-';
	x[r][c + 10] = ')';
	x[r][c + 11] = ')';
	x[r + 1][c + 8] = '|';
	x[r + 1][c + 3] = '|';
	x[r + 1][c + 4] = 'o';
	x[r + 1][c + 7] = 'o';
	x[r + 2][c + 4] = '\\';
	x[r + 2][c + 7] = '/';
	x[r + 3][c + 6] = '^';
	x[r + 3][c + 5] = '^';




}
void Drawenmy5(int r, int c, char x[][300])
{
	x[r][c - 2] = 219;
	x[r][c - 1] = 219;
	x[r][c] = 219;
	x[r - 1][c - 1] = 254;
	x[r + 1][c - 2] = 186;
	x[r + 1][c - 1] = 186;
	x[r][c + 1] = 169;
	x[r + 1][c] = 186;
}
void draw_bull_enmy(int r, int c, char x[][300])
{
	x[r][c] = '-';
}
void move_bull_enmy(int& c, int chero)
{
	c++;
	if (c == chero + 1)
	{
		c = 10;
	}
}
void draw_elevator(char x[][300], int r, int flag_door, int in_elevator, int& rhero, int& chero)
{

	x[r + 4][161] = 219;
	x[r + 4][162] = 219;
	x[r + 4][160] = 219;
	x[r + 4][159] = 219;
	x[r + 4][163] = 219;
	///////////////////
	x[r + 5][161] = 219;
	x[r + 5][162] = 219;
	x[r + 5][160] = 219;
	x[r + 5][159] = 219;
	x[r + 5][163] = 219;
	///////////////////
	x[r + 3][161] = 219;
	x[r + 3][162] = 219;
	x[r + 3][160] = 219;
	x[r + 3][159] = 219;
	x[r + 3][163] = 219;


	if (flag_door == 1)
	{
		x[r - 1][156] = 205;
		x[r - 1][157] = 205;
		x[r - 1][158] = 205;
		x[r - 1][159] = 205;
		x[r - 1][160] = 205;
		x[r - 1][161] = 205;
		x[r - 1][162] = 205;
		x[r - 1][163] = 205;
		x[r - 1][164] = 205;
		x[r - 1][165] = 205;
		x[r - 1][166] = 187;
		/////////////////
		x[r][166] = 186;
		x[r + 1][166] = 186;
		x[r + 2][166] = 186;
		x[r + 3][166] = 186;
		x[r + 4][166] = 186;
		x[r + 5][166] = 186;
		x[r + 6][166] = 188;
		/////////////////
		x[r + 6][165] = 205;
		x[r + 6][164] = 205;
		x[r + 6][163] = 205;
		x[r + 6][162] = 205;
		x[r + 6][161] = 205;
		x[r + 6][160] = 205;
		x[r + 6][159] = 205;
		x[r + 6][158] = 205;
		x[r + 6][157] = 205;
		x[r + 6][156] = 205;
		x[r + 6][155] = 200;
		///////////////////
		x[r][155] = 186;
		x[r + 1][155] = 186;
		x[r + 2][155] = 186;
		x[r + 3][155] = 186;
		x[r + 4][155] = 186;
		x[r + 5][155] = 186;
		x[r - 1][155] = 201;

	}
	if (in_elevator == 1)
	{
		rhero = r + 1;
	}
}
void draw_laser(int r, int c, char x[][300], int ct)
{
	for (int i = 0; i < ct; i++)
	{
		if (i % 2 == 0)
		{
			x[r][c] = '\\';
			r++;
			c++;
		}
		else
		{
			x[r][c] = '/';
			r++;
			c++;
		}
	}
}
void draw_laser2(int r, int c, char x[][300], int ct)
{
	for (int i = 0; i < ct; i++)
	{
		x[r][c] = '/';
		r++;
		c--;
	}
}
void draw_laser3(int r, int c, char x[][300], int ct)
{
	for (int i = 0; i < ct; i++)
	{
		x[r][c] = '|';
		r++;
	}
}
void move_elevator(int& direl, int& r)
{
	if (direl == -1)
	{
		if (r == 1)
		{
			direl *= -1;
		}
	}
	else
	{
		if ((r + 2) == 18)
		{
			direl *= -1;
		}
	}

	r += direl;
}





void main()
{
	char x[30][300];
	int rhero = 11, chero = 53;
	int r_enmy1 = 8, c_enmy1 = 10;
	int r_enmy2 = 10, c_enmy2 = 25;
	int r_enmy3 = 10, c_enmy3 = 75;
	int r_enmy4 = 10, c_enmy4 = 125;
	int r_enmy5 = 6;
	int c_enmy5 = 11;
	int renmy_bull = 6;
	int cenmy_bull = 10;
	int r_cat = 14, c_cat = 7;
	char uMove;
	int num_of_level = 1;
	int ffall = 0;
	int ctheal = 5;
	int lose_game = 0;
	int fgun = 0;
	int flag_bullet = 0;
	int flag_bullet_off = 0;
	int cbullet;
	int rbullet;
	int flagbul = 0;
	int  direnmy1 = -1;
	int direnemy5 = -1;
	int ctmult_bul = 0;
	int rmult_bullet = 0;
	int flagmult_bul = 0;
	int c_bullet[100];
	int r_bullet[100];
	int i = -1;
	int scroll = 0;
	int hl = 0;
	int flag_bul_off = 0;
	int flags[100];
	int rel = 16;
	int derel = -1;
	int flag_door = 0;
	int flag_elevator = 0;
	int flag_bullxenmy11 = 0;
	int flag_bullxenmy12 = 0;
	int rlaser = r_enmy2 + 3, claser1 = c_enmy2 + 2;
	int rlaser2 = r_enmy3 + 3, claser2 = c_enmy3 - 4;
	int rlaser3 = r_enmy4 + 3, claser3 = c_enmy4 + 5;
	int ct_laser = 0;
	int ct_time = 0;
	int flag_chase = 0;
	int flag_chase2 = 0;
	int stop_elevator = 0;
	int in_elevator = 0;
	int can_move = 0;
	int flag_level3 = 0;
	int flag_level2 = 0;


	while (1)
	{
		for (; !_kbhit();)
		{
			clear_and_draw_fixed_object(x, num_of_level, rel);
			if (flag_level3 == 1)
			{
				chero = 76;
				rhero = 17;
				flag_level3 = 0;
			}
			if (flag_level2 == 1)
			{
				chero = 3;
				rhero = 17;
				flag_level2 = 0;
			}
			draw_hero(rhero, chero, x, fgun, flag_bullet, flag_bullet_off, ctheal);
			if (num_of_level == 2)
			{
				if (rhero + 3 == 8 && chero == 60)
				{
					flag_chase = 1;
				}
				if (rhero + 3 == 8 && chero == 40)
				{
					flag_chase2 = 1;
				}
				if (flag_bullxenmy11 == 0 && flag_chase == 1)
				{
					Drawenmy1(r_enmy1, c_enmy1, x);



					Moveenmy1(r_enmy1, c_enmy1, direnmy1, rhero, chero, ctheal);

				}
				if (flag_bullxenmy12 == 0 && flag_chase2 == 1)
				{
					Drawenmy5(r_enmy5, c_enmy5, x);
					draw_bull_enmy(renmy_bull, cenmy_bull, x);
					move_bull_enmy(cenmy_bull, chero);



				}

				Drawenmy2(r_enmy2, c_enmy2, x);
				draw_laser(rlaser, claser1, x, ct_laser);

				Drawenmy3(r_enmy3, c_enmy3, x);
				draw_laser2(rlaser2, claser2, x, ct_laser);

				Drawenmy4(r_enmy4, c_enmy4, x);
				draw_laser3(rlaser3, claser3, x, ct_laser);
				ct_laser++;
				if (ct_laser == 8)
				{
					ct_laser = 0;
				}
			}

			//elevator
			draw_elevator(x, rel, flag_door, in_elevator, rhero, chero);
			if (stop_elevator == 0)
			{
				move_elevator(derel, rel);
			}
			else
			{
				ct_time++;
			}
			if (rel == 1 || rel + 2 == 18)
			{
				stop_elevator = 1;
			}
			if (ct_time == 25)
			{
				stop_elevator = 0;
				ct_time = 0;
			}
			if (rel == 1 || rel + 2 == 18)
			{
				flag_door = 0;
			}
			else
			{
				flag_door = 1;
			}
			if (rhero + 3 == rel + 4 && chero > 156)
			{
				in_elevator = 1;
			}
			if (rel + 2 == 18)
			{
				can_move = 1;
			}
			else
			{
				can_move = 0;
			}
			if (chero <= 156)
			{
				in_elevator = 0;
			}


			if (x[rhero + 1][chero] == '<' && hl == 0)
			{
				ctheal--;
				hl = 1;
			}
			else if (x[rhero + 1][chero] != '<')
			{
				hl = 0;
			}
			if (x[rhero + 3][chero] == '|' || x[rhero + 3][chero] == '\\' && hl == 0)
			{
				ctheal--;
				hl = 1;
			}
			else if (x[rhero + 3][chero] != '|')
			{
				hl = 0;
			}
			if (x[rhero][chero] == '\\' || x[rhero][chero] == '/' || x[rhero][chero] == '||')
			{
				ctheal--;
			}
			if (x[rhero + 3][chero] == 'O' && hl == 0)
			{
				ctheal--;
				hl = 1;
			}
			else if (x[rhero + 3][chero] != 'O')
			{
				hl = 0;
			}


			// bullet(single,multiple)
			if (flagbul == 1)
			{
				draw_bullet(rbullet, cbullet, x);
				move_bullet(cbullet);
				if (x[rbullet][cbullet - 6] != ' ' || cbullet < -1)
				{
					flagbul = 0;
				}
				if (rbullet == r_enmy1 && cbullet == c_enmy1)
				{
					flag_bullxenmy11 = 1;
				}
				if (rbullet == r_enmy5 && cbullet == c_enmy5)
				{
					flag_bullxenmy12 = 1;
				}
			}
			if (flagmult_bul == 1)
			{
				draw_mult_bullet(x, i, r_bullet, c_bullet, flag_bul_off, flags);
				move_mult_bullet(i, r_bullet, c_bullet, flags);
				check_bullet(r_bullet, c_bullet, i, x, flags, r_enmy1, c_enmy1, flag_bullxenmy11);
				check_bullet(r_bullet, c_bullet, i, x, flags, r_enmy1, c_enmy1, flag_bullxenmy12);

			}

			// gravity 
			if (x[rhero + 3][chero] == ' ' && in_elevator == 0)
			{
				grav(x, rhero, chero, ffall);

				if (x[rhero + 3][chero] != ' ')
				{
					ffall = 0;

				}
				if (ffall == 4)
				{
					ctheal--;
				}
			}

			if (ctheal == 0)
			{
				lose_game = 1;
				break;
			}
			if (rhero + 3 == 0 && num_of_level == 2)
			{
				num_of_level++;
				flag_level3 = 1;
			}
			if (num_of_level == 2)
			{
				scrolling(scroll, x, chero);
			}
			else
			{
				cout_mat_to_screen(x, num_of_level, scroll);
			}
		}

		if (lose_game == 1)
		{
			cout << "GAME OVER !" << endl;
			break;
		}

		uMove = _getch();

		if (chero == 5 && num_of_level == 1)
		{
			num_of_level++;
			flag_level2 = 1;
		}
		//jump
		if (uMove == ' ')
		{
			jump(rhero);
		}
		if (uMove == ' ')
		{
			jump(rhero);
		}
		//jump right
		if (uMove == 'r')
		{
			jump_right(rhero, chero);
		}
		if (uMove == 'r')
		{
			jump_right(rhero, chero);
		}
		//jump left
		if (uMove == 'l')
		{
			jump_left(rhero, chero);
		}
		if (uMove == 'l')
		{
			jump_left(rhero, chero);
		}
		if (in_elevator == 0 || can_move == 1)
		{
			move_hero(rhero, chero, uMove, x);
			draw_hero(rhero, chero, x, fgun, flag_bullet, flag_bullet_off, ctheal);
		}
		//GUN with bullet
		if (uMove == 'g')
		{
			fgun = 1;
		}
		if (uMove == 'x')
		{
			fgun = 0;
		}
		if (uMove == 'b')
		{
			rbullet = rhero;
			cbullet = chero;
			flagbul = 1;
		}
		if (uMove == 'm')
		{
			if(i < 100)
			{
				i++;
			}
			r_bullet[i] = rhero + 1;
			c_bullet[i] = chero - 6;
			flags[i] = 1;
			flagmult_bul = 1;
		}

	}
}