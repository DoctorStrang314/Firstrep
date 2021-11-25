#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

void clear()
{
	system("cls");
}

void backcolor()
{
	system("color 9F");
}

void color()
{
	system("color 2");
}

int sum(int a,int b)
{
	
	return a+b;
}

int IntSize()
{
	int a = sizeof(int);
	cout << a << " байта";
	return 0;
}

int what()
{
	system("cls");
	for (int i = 0;i < 1000;i++) {
		cout << "Что?" ;
	}
	
	return 0;
}

int GhostBuster()
{
	
	cout << "Если здесь кто-нибудь есть дайте знак"<<endl;
	Sleep(1000);
	for (int i = 10;i >= 0;i--) {
		Sleep(1000);
		system("cls");
		cout << "Компьютер отключится через: "<<i<<endl;
		if (i == 0) {
			cout << "Ха Ха пошутил ";
			cin >> i;
		}
	}
	return 0;
}

int labirint()
{
	setlocale(0, "");
	srand(time(0));

	int  vector;
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
	return 0;
}



void message()
{
	cout << "Проверяйте дальше, не задерживайтесь.";
	return ;
}

int square()
{
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 7;j++) {

		
				cout << "# ";
			
		}
		cout << endl;
	}
	return 0;
}


int main()
{
	setlocale(0, "");

	cout << "выберите действие:"<<endl;
	cout << "[1] - очищение консоли"<<endl;
	cout << "[2] - изменение цвета фона "<<endl;
	cout << "[3] - изменение цвета текста "<<endl;
	cout << "[4] - складывание чисел"<<endl;
	cout << "[5] - вывод размера типа данных int"<<endl;
	cout << "[6] - Что?" << endl;
	cout << "[7] - Здесь кто-нибудь есть?" << endl;
	cout << "[8] - лабиринт" << endl;
	cout << "[9] - вывод сообщения "<< endl;
	cout << "[10] - вывод прямоугольника" << endl;

	short menu;
	cin >> menu;
	switch (menu)
	{
	case 1: clear();
		break;

	case 2: backcolor();
		break;

	case 3: color();
		break;

	case 4: 
		int a, b;
		cout << "Введите первое число: ";
		cin >> a;
		cout << "Введите второе число: ";
		cin >> b;
		cout<<"ответ: "<<sum(a,b);
		
		break;

	case 5: IntSize();
		break;

	case 6: what();
		break;

	case 7:GhostBuster();
		break;

	case 8:  labirint();
		break;

	case 9: message();
		break;

	case 10: square();

	default:
		break;
	}
	return 0;
}