#include <Windows.h>
#include <iostream>
#include <ctime>


using namespace std;
int snake[2][2];
short history=1;
bool lose = 1;
short arr1[21][21];
short apple = 0;
void give_apple() {
	srand(time(0));

	while (apple < 30) {

		int aplleX = rand() % 19;
		int aplleY = rand() % 19;
		if (arr1[aplleX][aplleY] == 0) {

			arr1[aplleX][aplleY] = 5;
			apple++;
		}
	}

}
void tail() {
	arr1[snake[1][0]][snake[1][1]] = 0;

		if (arr1[snake[1][0] - 1][snake[1][1]] == 2) {
			snake[1][0] -= 1;
			arr1[snake[1][0]][snake[1][1]] = 4;
		}
		else if (arr1[snake[1][0] + 1][snake[1][1]] == 2) {
			snake[1][0] += 1;
			arr1[snake[1][0]][snake[1][1]] = 4;
		}
		else if (arr1[snake[1][0]][snake[1][1]-1] == 2) {
			snake[1][1] -= 1;
			arr1[snake[1][0]][snake[1][1]] = 4;
		}
		else if (arr1[snake[1][0]][snake[1][1] + 1] == 2) {
			snake[1][1] += 1;
			arr1[snake[1][0]][snake[1][1]] = 4;
		}
}
void way(int vector) {
	srand(time(0));
	bool success = 0;
	
	while (success == 0) {
		// поедание яблок 
		if (vector == 0 && history != 2&&arr1[snake[0][0] + 1][snake[0][1]] != 1) {
			if (arr1[snake[0][0] + 1][snake[0][1]] == 5) {
				arr1[snake[0][0]][snake[0][1]] = 2;
				snake[0][0] += 1;
				arr1[snake[0][0]][snake[0][1]] = 3;
				success = 1;
				apple--;
			}
			// передвижение вниз?
			else {
				// передвижение головы
				
				arr1[snake[0][0]][snake[0][1]] = 2;
				snake[0][0] += 1;
				arr1[snake[0][0]][snake[0][1]] = 3;
				success = 1;

				// передвижение хвоста
				tail();
			}
		}
		// передвижение направо
		else if (vector == 1 && history != 3 && arr1[snake[0][0]][snake[0][1] + 1] != 1) {
			// поедание яблок 
			if (arr1[snake[0][0]][snake[0][1] + 1] == 5) {
				arr1[snake[0][0]][snake[0][1]] = 2;
				snake[0][1] += 1;
				arr1[snake[0][0]][snake[0][1]] = 3;
				success = 1;
				apple--;
			}
			// передвижение головы
			else {
				arr1[snake[0][0]][snake[0][1]] = 2;
				snake[0][1] += 1;
				arr1[snake[0][0]][snake[0][1]] = 3;
				success = 1;
				// передвижение хвоста
				tail();
			}
		}
		// передвижение наверх
		else if (vector == 2 && history != 0&& arr1[snake[0][0] - 1][snake[0][1]] != 1) {
			// поедание яблок 
			if (arr1[snake[0][0] - 1][snake[0][1]] == 5) {
				arr1[snake[0][0]][snake[0][1]] = 2;
				snake[0][0] -= 1;
				arr1[snake[0][0]][snake[0][1]] = 3;
				success = 1;
				apple--;
			}
			// передвижение головы
			else {
				arr1[snake[0][0]][snake[0][1]] = 2;
				snake[0][0] -= 1;
				arr1[snake[0][0]][snake[0][1]] = 3;
				success = 1;

				// передвижение хвоста 
				tail();
			}
		}
		// передвижение влево
		else if (vector == 3 && history != 1&& arr1[snake[0][0]][snake[0][1] - 1] != 1) {
			// поедание яблок 
			if (arr1[snake[0][0]][snake[0][1] - 1] == 5) {
				arr1[snake[0][0]][snake[0][1]] = 2;
				snake[0][1] -= 1;
				arr1[snake[0][0]][snake[0][1]] = 3;
				success = 1;
				apple--;
			}
			// передвижение головы
			else {
				arr1[snake[0][0]][snake[0][1]] = 2;
				snake[0][1] -= 1;
				arr1[snake[0][0]][snake[0][1]] = 3;
				success = 1;

				// передвижение хвоста 
				tail();
			}
		}
		else {
			lose= 0;
		
		return ;
		}
	}
}

short show() {
	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 21; j++) {
			if (arr1[i][j] == 0) {
				cout << "  ";
			}
			else if (arr1[i][j] == 5) {
				cout << "* ";
			}
			else {
				cout << arr1[i][j] << " ";
			}

		}
		cout << endl;
	}
	return 0;
}

int main()
{
	const int SIZE = 21;
	setlocale(0, "");
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (i == 0 || j == 0 || i == SIZE - 1 || j == SIZE - 1) {
				arr1[i][j] = 1;
			}
			else if (i == 10 && j == 10) {
				arr1[i][j] = 3;
				arr1[i][j - 1] = 2;
				arr1[i][j - 2] = 4;
				snake[0][0] = i;//координаты головы по y
				snake[0][1] = j;//координаты головы по x
				snake[1][0] = i;//координаты хвоста по y
				snake[1][1] = j - 2;//координаты хвоста по x
			}
			else {
				arr1[i][j] = 0;
				
			}
		}
		cout << endl;
	}
	show();
	while (1 == 1)
	{
		give_apple();
		while(GetKeyState('W') & 'W'){
			Sleep(400);
			system("cls");
			way(2);
			show();
			history = 2;
			if (lose==0) {
				system("cls");
				cout << "Вы проиграли ";
				return 0;
			}
			
		}
		while (GetKeyState('A') & 'A') {
			Sleep(400);
			system("cls");
			way(3);
			show();
			history = 3;
			if (lose == 0) {
				system("cls");
				cout << "Вы проиграли ";
				return 0;
			}
			
		}
		while (GetKeyState('S') & 'S') {
			Sleep(400);
			system("cls");
			way(0);
			show();
			history = 0;
			if (lose == 0) {
				system("cls");
				cout << "Вы проиграли ";
				return 0;
			}
			
		}
		while (GetKeyState('C')& 'C') {
			Sleep(400);
			system("cls");
			way(1);
			show();
			history = 1;
			if (lose == 0) {
				system("cls");
				cout << "Вы проиграли ";
				return 0;
			}
			
		}
		
		
		
	}
	system("cls");
	cout << "Вы проиграли ";
	return 0;
}
