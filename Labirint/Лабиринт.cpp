﻿
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(0, "");
	srand(time(0));
	
	int  vector,chois;
	
	cout << "[1] Лабиринт 15Х15\n[2] Лабиринт 30Х30\n[3] Лабиринт 50Х50\n ";
	cin >> chois;
	switch (chois)
	{   // результат выбора размера 
		//по хорошему запихнуть бы все в функцию и в кейсы выводить только результат функции, но он говорит что нужна работа с сылками 
		case 1: {
			const int SIZE = 15;
			int Up_Down = 2, Left_Right = SIZE/2+1;//точка старта
			int arr1[SIZE][SIZE];
			//создание поля по размеру
			for (int i = 0; i < SIZE; i++) {
				for (int j = 0; j < SIZE; j++) {
					if (i == 0 && j == SIZE / 2 + 1 || i == 1 && j == SIZE / 2 + 1 || i == 2 && j == SIZE / 2 + 1) {
						arr1[i][j] = 0;
					}
					else {
						arr1[i][j] = 1;
					}
				}
			}

			bool flag = 0;
			int l = 0;
			while (flag == 0) {
				if (l % 2 == 0) { // назначение шага 
					vector = rand() % 4;//определение на правления 
				}
				l++;
				switch (vector)
				{
					case 0: {
						Up_Down++;
						arr1[Up_Down][Left_Right] = 0;
						if (Up_Down == SIZE - 1) {//выход исключительно внизу
							flag = 1;
						}
					}
						  break;
					case 1: {
						Left_Right++;
						arr1[Up_Down][Left_Right] = 0;
						if (Left_Right == SIZE - 2) {//респавн
							Up_Down = 2;
							Left_Right = SIZE / 2 + 1;
						}
					}
						  break;
					case 2: {
						Up_Down--;
						arr1[Up_Down][Left_Right] = 0;
						if (Up_Down == 1) {
							Up_Down = 2;
							Left_Right = SIZE / 2 + 1;
						}
					}
						  break;
					case 3: {
						Left_Right--;
						arr1[Up_Down][Left_Right] = 0;
						if (Left_Right == 1) {
							Up_Down = 2;
							Left_Right = SIZE / 2 + 1;
						}
					}
						  break;

					default:
						break;
				}

			}
			for (int i = 0; i < SIZE; i++) {//отображение
				for (int j = 0; j < SIZE; j++) {

					if (arr1[i][j] == 1) {
						cout << "# ";
					}
					else {
						cout << "  ";
					}



				}
				cout << endl;

			}
		}
		break;
		case 2: {
			const int SIZE = 30;
			int Up_Down = 2, Left_Right = SIZE / 2 + 1;
			int arr1[SIZE][SIZE];

			for (int i = 0; i < SIZE; i++) {
				for (int j = 0; j < SIZE; j++) {
					if (i == 0 && j == SIZE / 2 + 1 || i == 1 && j == SIZE / 2 + 1 || i == 2 && j == SIZE / 2 + 1) {
						arr1[i][j] = 0;
					}
					else {
						arr1[i][j] = 1;
					}
				}
			}

			bool flag = 0;
			int l = 0;
			while (flag == 0) {
				if (l % 4 == 0) {
					vector = rand() % 4;
				}
				l++;
				switch (vector)
				{
					case 0: {
						Up_Down++;
						arr1[Up_Down][Left_Right] = 0;
						if (Up_Down == SIZE - 1) {
							flag = 1;
						}
					}
						  break;
					case 1: {
						Left_Right++;
						arr1[Up_Down][Left_Right] = 0;
						if (Left_Right == SIZE - 2) {
							Up_Down = 2;
							Left_Right = SIZE / 2 + 1;
						}
					}
						  break;
					case 2: {
						Up_Down--;
						arr1[Up_Down][Left_Right] = 0;
						if (Up_Down == 1) {
							Up_Down = 2;
							Left_Right = SIZE / 2 + 1;
						}
					}
						  break;
					case 3: {
						Left_Right--;
						arr1[Up_Down][Left_Right] = 0;
						if (Left_Right == 1) {
							Up_Down = 2;
							Left_Right = SIZE / 2 + 1;
						}
					}
						  break;

					default:
						break;
				}

			}
			for (int i = 0; i < SIZE; i++) {
				for (int j = 0; j < SIZE; j++) {

					if (arr1[i][j] == 1) {
						cout << "# ";
					}
					else {
						cout << "  ";
					}



				}
				cout << endl;

			}
		}
		break;
		case 3: {
			const int SIZE = 50;
			int Up_Down = 2, Left_Right = SIZE / 2 + 1;
			int arr1[SIZE][SIZE];

			for (int i = 0; i < SIZE; i++) {
				for (int j = 0; j < SIZE; j++) {
					if (i == 0 && j == SIZE / 2 + 1 || i == 1 && j == SIZE / 2 + 1 || i == 2 && j == SIZE / 2 + 1) {
						arr1[i][j] = 0;
					}
					else {
						arr1[i][j] = 1;
					}
				}
			}

			bool flag = 0;
			int l = 0;
			while (flag == 0) {
				if (l % 6 == 0) {
					vector = rand() % 4;
				}
				l++;
				switch (vector)
				{
					case 0: {
						Up_Down++;
						arr1[Up_Down][Left_Right] = 0;
						if (Up_Down == SIZE - 1) {
							flag = 1;
						}
					}
						  break;
					case 1: {
						Left_Right++;
						arr1[Up_Down][Left_Right] = 0;
						if (Left_Right == SIZE - 2) {
							Up_Down = 2;
							Left_Right = SIZE / 2 + 1;
						}
					}
						  break;
					case 2: {
						Up_Down--;
						arr1[Up_Down][Left_Right] = 0;
						if (Up_Down == 1) {
							Up_Down = 2;
							Left_Right = SIZE / 2 + 1;
						}
					}
						  break;
					case 3: {
						Left_Right--;
						arr1[Up_Down][Left_Right] = 0;
						if (Left_Right == 1) {
							Up_Down = 2;
							Left_Right = SIZE / 2 + 1;
						}
					}
						  break;

					default:
						break;
				}

			}
			for (int i = 0; i < SIZE; i++) {
				for (int j = 0; j < SIZE; j++) {

					if (arr1[i][j] == 1) {
						cout << "# ";
					}
					else {
						cout << "  ";
					}



				}
				cout << endl;

			}
		}
		break;
		
		//приколы
		default: {
			if (chois > 3) {
				cout << "Любишь побольше? Но нет:)";
			}
			else {
			cout << "Ну я так не играю:(";			
			}
			break;
		}
	}
	

	return 0;
}