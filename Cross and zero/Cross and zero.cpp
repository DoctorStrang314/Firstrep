#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;
const int SIZE1 = 7;
short filde1[SIZE1][SIZE1];
const int SIZE2 = 9;
short filde2[SIZE2][SIZE2];
const int SIZE3 = 11;
short filde3[SIZE3][SIZE3];
int tern = 0;
short win = 2;
short chois=0;//переменная для всех выборов
short variable = 1;
short gameMode = 1;
void show() {
	for (int i = 0; i < SIZE1; i++) {
		for (int j = 0; j < SIZE1; j++) {
			if (filde1[i][j] == 0) {
				cout << "  ";
			}
			else if (filde1[i][j] == 1) {
				cout << "# ";
			}
			else if (filde1[i][j] == 2) {
				cout << "X ";
			}
			else {
				cout << "O ";
			}


		}
		cout << endl;
	}
}
void show2() {
	for (int i = 0; i < SIZE2; i++) {
		for (int j = 0; j < SIZE2; j++) {
			if (filde2[i][j] == 0) {
				cout << "  ";
			}
			else if (filde2[i][j] == 1) {
				cout << "# ";
			}
			else if (filde2[i][j] == 2) {
				cout << "X ";
			}
			else {
				cout << "O ";
			}


		}
		cout << endl;
	}
}
void show3() {
	for (int i = 0; i < SIZE3; i++) {
		for (int j = 0; j < SIZE3; j++) {
			if (filde3[i][j] == 0) {
				cout << "  ";
			}
			else if (filde3[i][j] == 1) {
				cout << "# ";
			}
			else if (filde3[i][j] == 2) {
				cout << "X ";
			}
			else {
				cout << "O ";
			}


		}
		cout << endl;
	}
}
void win1() {
	//значения цикла странные потому что мы работаем с "Виртуальными" клетками
	//их значение расчитывается как 2*i-1 и так от первой до 3 клетки
	
	
	for (int i = 1; i < 4; i++) {
		for (int j = 1; j < 4; j++) {
			//проверки для крестиков
			if (j != 1 && j != 3 && filde1[2*i-1][2*j-1]== 2&& filde1[2 * i - 1][2 * (j + 1) - 1] == 2 && filde1[2 * i - 1][2 * (j - 1) - 1] == 2) {
				
					win = 1;
				
							
			}
			else if (i != 1 && i != 3 && filde1[2 * i - 1][2 * j - 1] == 2&& filde1[2 * (i - 1) - 1][2 * j - 1] == 2 && filde1[2 * (i + 1) - 1][2 * j - 1] == 2) {
				
					win = 1;
			
			}
			else if (j != 1 && j != 3 && i != 1 && i != 3 && filde1[2 * i - 1][2 * j - 1] == 2 && (filde1[2 * (i - 1) - 1][2 * (j-1) - 1] == 2 && filde1[2 * (i + 1) - 1][2 * (j+1) - 1] == 2 || filde1[2 * (i + 1) - 1][2 * (j - 1) - 1] == 2 && filde1[2 * (i - 1) - 1][2 * (j + 1) - 1] == 2)) {

				win = 1;

			}
			//проверки для ноликов 
			else if (j != 1 && j != 3 && filde1[2 * i - 1][2 * j - 1] == 3&& filde1[2 * i - 1][2 * (j - 1) - 1] == 3 && filde1[2 * i - 1][2 * (j + 1) - 1] == 3) {
				
					win = 0;
			
			}
			else if (i != 1 && i != 3 && filde1[2 * i - 1][2 * j - 1] == 3 && filde1[2 * (i - 1) - 1][2 * j - 1] == 3 && filde1[2 * (i + 1) - 1][2 * j - 1] == 3) {				
					win = 0;
			}
			else if (j != 1 && j != 3 && i != 1 && i != 3 && filde1[2 * i - 1][2 * j - 1] == 3 && (filde1[2 * (i - 1) - 1][2 * (j - 1) - 1] == 3 && filde1[2 * (i + 1) - 1][2 * (j + 1) - 1] == 3 || filde1[2 * (i + 1) - 1][2 * (j - 1) - 1] == 3 && filde1[2 * (i - 1) - 1][2 * (j + 1) - 1] == 3)) {

				win = 0;

			}


		}
		
	}
}
void win2() {
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			//проверки для крестиков
			if (j != 1 && j != 4 && filde2[2 * i - 1][2 * j - 1] == 2 && filde2[2 * i - 1][2 * (j + 1) - 1] == 2 && filde2[2 * i - 1][2 * (j - 1) - 1] == 2) {

				win = 1;


			}
			else if (i != 1 && i != 4 && filde2[2 * i - 1][2 * j - 1] == 2 && filde2[2 * (i - 1) - 1][2 * j - 1] == 2 && filde2[2 * (i + 1) - 1][2 * j - 1] == 2) {

				win = 1;

			}
			else if (j != 1 && j != 4 && i != 1 && i != 4 && filde2[2 * i - 1][2 * j - 1] == 2 && (filde2[2 * (i - 1) - 1][2 * (j - 1) - 1] == 2 && filde2[2 * (i + 1) - 1][2 * (j + 1) - 1] == 2 || filde2[2 * (i + 1) - 1][2 * (j - 1) - 1] == 2 && filde2[2 * (i - 1) - 1][2 * (j + 1) - 1] == 2)) {

				win = 1;

			}
			//проверки для ноликов 
			else if (j != 1 && j != 4 && filde2[2 * i - 1][2 * j - 1] == 3 && filde2[2 * i - 1][2 * (j - 1) - 1] == 3 && filde2[2 * i - 1][2 * (j + 1) - 1] == 3) {

				win = 0;

			}
			else if (i != 1 && i != 4 && filde2[2 * i - 1][2 * j - 1] == 3 && filde2[2 * (i - 1) - 1][2 * j - 1] == 3 && filde2[2 * (i + 1) - 1][2 * j - 1] == 3) {
				win = 0;
			}
			else if (j != 1 && j != 4 && i != 1 && i != 4 && filde2[2 * i - 1][2 * j - 1] == 3 && (filde2[2 * (i - 1) - 1][2 * (j - 1) - 1] == 3 && filde2[2 * (i + 1) - 1][2 * (j + 1) - 1] == 3 || filde2[2 * (i + 1) - 1][2 * (j - 1) - 1] == 3 && filde2[2 * (i - 1) - 1][2 * (j + 1) - 1] == 3)) {

				win = 0;

			}


		}

	}
}
void win3() {
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j < 6; j++) {
			//проверки для крестиков
			if (j != 1 && j != 5 && filde3[2 * i - 1][2 * j - 1] == 2 && filde3[2 * i - 1][2 * (j + 1) - 1] == 2 && filde3[2 * i - 1][2 * (j - 1) - 1] == 2) {

				win = 1;


			}
			else if (i != 1 && i != 5 && filde3[2 * i - 1][2 * j - 1] == 2 && filde3[2 * (i - 1) - 1][2 * j - 1] == 2 && filde3[2 * (i + 1) - 1][2 * j - 1] == 2) {

				win = 1;

			}
			else if (j != 1 && j != 5 && i != 1 && i != 5 && filde3[2 * i - 1][2 * j - 1] == 2 && (filde3[2 * (i - 1) - 1][2 * (j - 1) - 1] == 2 && filde3[2 * (i + 1) - 1][2 * (j + 1) - 1] == 2 || filde3[2 * (i + 1) - 1][2 * (j - 1) - 1] == 2 && filde3[2 * (i - 1) - 1][2 * (j + 1) - 1] == 2)) {

				win = 1;

			}
			//проверки для ноликов 
			else if (j != 1 && j != 5 && filde3[2 * i - 1][2 * j - 1] == 3 && filde3[2 * i - 1][2 * (j - 1) - 1] == 3 && filde3[2 * i - 1][2 * (j + 1) - 1] == 3) {

				win = 0;

			}
			else if (i != 1 && i != 5 && filde3[2 * i - 1][2 * j - 1] == 3 && filde3[2 * (i - 1) - 1][2 * j - 1] == 3 && filde3[2 * (i + 1) - 1][2 * j - 1] == 3) {
				win = 0;
			}
			else if (j != 1 && j != 5 && i != 1 && i != 5 && filde3[2 * i - 1][2 * j - 1] == 3 && (filde3[2 * (i - 1) - 1][2 * (j - 1) - 1] == 3 && filde3[2 * (i + 1) - 1][2 * (j + 1) - 1] == 3 || filde3[2 * (i + 1) - 1][2 * (j - 1) - 1] == 3 && filde3[2 * (i - 1) - 1][2 * (j + 1) - 1] == 3)) {

				win = 0;

			}


		}

	}
}
void game(short hardchois) {
	bool endgame = 1;
	
	int lineX = 1;
	int lineY = 1;
	
	srand(time(0));
	switch (hardchois)
	{
		
		case 1: {
			while (endgame==true) {
				system("cls");
				show();
				bool sucsses = 0;
				if (tern % 2 == 0||gameMode==2){
				cout << "Введите номер столбца "<<endl;
				cin >> lineY;
				cout << "Введите номер строки " << endl;
				cin >> lineX;			
				}
				if (tern % 2 == 0) {
					while (sucsses == 0) {

						if (filde1[2 * lineX - 1][2 * lineY - 1] == 0) {
						filde1[2 * lineX - 1][2 * lineY - 1] = 2;//формула нужной секции такая не спрашивай почему просто верь
						sucsses = 1;
						}
						else {
							system("cls");
							show();
							cout << "Поле уже занято введите параметры заново" << endl;
							cout << "Введите номер столбца " << endl;
							cin >> lineY;
							cout << "Введите номер строки " << endl;
							cin >> lineX;
						}
					}
				}
				else {
					while (sucsses == 0) {

						if (filde1[2 * lineX - 1][2 * lineY - 1] == 0 && gameMode==2) {
							filde1[2 * lineX - 1][2 * lineY - 1] = 3;//формула нужной секции такая не спрашивай почему просто верь
							sucsses = 1;
						}
						else if (gameMode == 1) {
							lineX = rand() % 3+1;
							lineY = rand() % 3+1;
							while (filde1[2 * lineX - 1][2 * lineY - 1] != 0)
							{
								lineX = rand() % 3+1;
								lineY = rand() % 3+1;
							}
							filde1[2 * lineX - 1][2 * lineY - 1] = 3;
							sucsses = 1;
						}
						else {
							system("cls");
							show();
							cout << "Поле уже занято введите параметры заново" << endl;
							cout << "Введите номер столбца " << endl;
							cin >> lineY;
							cout << "Введите номер строки " << endl;
							cin >> lineX;
						}
					}
				}
				win1();
				if (win == 1 || win == 0) {
					system("cls");
					show();
					Sleep(1000);
					return;
				}
				tern++;
			}
		
			break;
		}
		case 2: {
			while (endgame == true) {
				system("cls");
				show2();
				bool sucsses = 0;
				if (tern % 2 == 0 || gameMode == 2) {
					cout << "Введите номер столбца " << endl;
					cin >> lineY;
					cout << "Введите номер строки " << endl;
					cin >> lineX;
				}
				if (tern % 2 == 0) {
					while (sucsses == 0) {

						if (filde2[2 * lineX - 1][2 * lineY - 1] == 0) {
							filde2[2 * lineX - 1][2 * lineY - 1] = 2;//формула нужной секции такая не спрашивай почему просто верь
							sucsses = 1;
						}
						else {
							system("cls");
							show();
							cout << "Поле уже занято введите параметры заново" << endl;
							cout << "Введите номер столбца " << endl;
							cin >> lineY;
							cout << "Введите номер строки " << endl;
							cin >> lineX;
						}
					}
				}
				else {
					while (sucsses == 0) {

						if (filde2[2 * lineX - 1][2 * lineY - 1] == 0 && gameMode == 2) {
							filde2[2 * lineX - 1][2 * lineY - 1] = 3;//формула нужной секции такая не спрашивай почему просто верь
							sucsses = 1;
						}
						else if (gameMode == 1) {
							lineX = rand() % 4 + 1;
							lineY = rand() % 4 + 1;
							while (filde2[2 * lineX - 1][2 * lineY - 1] != 0)
							{
								lineX = rand() % 4 + 1;
								lineY = rand() % 4 + 1;
							}
							filde2[2 * lineX - 1][2 * lineY - 1] = 3;
							sucsses = 1;
						}
						else {
							system("cls");
							show2();
							cout << "Поле уже занято введите параметры заново" << endl;
							cout << "Введите номер столбца " << endl;
							cin >> lineY;
							cout << "Введите номер строки " << endl;
							cin >> lineX;
						}
					}
				}
				win2();
				if (win == 1 || win == 0) {
					system("cls");
					show2();
					Sleep(1000);
					return;
				}
				tern++;
			}

			break;
		}
		case 3: {
			while (endgame == true) {
				system("cls");
				show3();
				bool sucsses = 0;
				if (tern % 2 == 0 || gameMode == 2) {
					cout << "Введите номер столбца " << endl;
					cin >> lineY;
					cout << "Введите номер строки " << endl;
					cin >> lineX;
				}
				if (tern % 2 == 0) {
					while (sucsses == 0) {

						if (filde3[2 * lineX - 1][2 * lineY - 1] == 0) {
							filde3[2 * lineX - 1][2 * lineY - 1] = 2;//формула нужной секции такая не спрашивай почему просто верь
							sucsses = 1;
						}
						else {
							system("cls");
							cout << "Поле уже занято введите параметры заново" << endl;
							cout << "Введите номер столбца " << endl;
							cin >> lineY;
							cout << "Введите номер строки " << endl;
							cin >> lineX;
						}
					}
				}
				else {
					while (sucsses == 0) {

						if (filde3[2 * lineX - 1][2 * lineY - 1] == 0 && gameMode == 2) {
							filde3[2 * lineX - 1][2 * lineY - 1] = 3;//формула нужной секции такая не спрашивай почему просто верь
							sucsses = 1;
						}
						else if (gameMode == 1) {
							lineX = rand() % 5 + 1;
							lineY = rand() % 5 + 1;
							while (filde3[2 * lineX - 1][2 * lineY - 1] != 0)
							{
								lineX = rand() % 5 + 1;
								lineY = rand() % 5 + 1;
							}
							filde3[2 * lineX - 1][2 * lineY - 1] = 3;
							sucsses = 1;
						}
						else {
							system("cls");
							show3();
							cout << "Поле уже занято введите параметры заново" << endl;
							cout << "Введите номер столбца " << endl;
							cin >> lineY;
							cout << "Введите номер строки " << endl;
							cin >> lineX;
						}
					}
				}
				win3();
				if (win == 1 || win == 0) {
					system("cls");
					show3();
					Sleep(1000);
					return;
				}
				tern++;
			}

			break;
		}
		  
	default:

		break;
	}
	
}
short create() {
	if (variable == 1) {
		// первый вариант
		
		for (int i = 0;i < SIZE1;i++) {
			for (int l = 0;l < SIZE1;l++) {
				if (i % 2 == 0 || l % 2 == 0) {
					filde1[i][l] = 1;
				}
				else {
					filde1[i][l] = 0;
				}
			}
		}

		
		
		return 0;
	}
	// 2 вариант
	else if (variable == 2) {

		
		for (int i = 0;i < SIZE2;i++) {
			for (int l = 0;l < SIZE2;l++) {
				if (i % 2 == 0 || l % 2 == 0) {
					filde2[i][l] = 1;
				}
				else {
					filde2[i][l] = 0;
				}
			}
		}

		
		
		return 0;
	}
	// 3 вариант
	else if (variable == 3) {

		
		for (int i = 0;i < SIZE3;i++) {
			for (int l = 0;l < SIZE3;l++) {
				if (i % 2 == 0 || l % 2 == 0) {
					filde3[i][l] = 1;
				}
				else {
					filde3[i][l] = 0;
				}
			}
		}

		
		return 0;
	}
	
}

void Settings() {
	system("cls");
	cout << "[1] Размер поля\n";
	cout << "[2] Цвет\n";
	cout << "[3] Режим игры\n";
	cout << "[4] порядок ходов\n";
	chois = 0;
	while (chois < 1 || chois > 2)
	{
		cin >> chois;
		switch (chois)
		{ 
			case 1: {
				system("cls");
				cout << "[1] поле 3х3\n";
				cout << "[2] поле 5х5\n";
				cout << "[3] поле 7х7\n";
				chois = 0;
				while (chois < 1 || chois > 3)
				{

					cin >> chois;
					switch (chois)
					{
						case 1: {
							variable = 1;
							}
						break;
						case 2: {
							variable = 2;
						}
						break;
						case 3: {
							variable = 3;
						}
							  break;
					default:
						cout << "Этой команды нет в списке\n";
						cout << "Введите команду: ";
						break;
					}
				}
			}
			break;
		
			case 2: {
				cout << "Скоро тут что-нибудь будет ";
			}
			break;
			case 3: {
				system("cls");
				cout << "[1] игра с компьютером "<<endl;
				cout << "[2] игра с другим игроком" << endl;
				chois = 0;
				while (chois < 1 || chois > 2)
				{

					cin >> chois;
					switch (chois)
					{
					case 1: {
						gameMode = 1;
					}
						  break;
					case 2: {
						gameMode = 2;
					}
						  break;
					
					default:
						cout << "Этой команды нет в списке\n";
						cout << "Введите команду: ";
						break;
					}
				}
			}
				  break;
			case 4: {
				system("cls");
				cout << " Выберите порядок ходов"<<endl;
				cout << "[1] первые крестики" << endl;
				cout << "[2] первые нолики" << endl;
				chois = 0;
				while (chois < 1 || chois > 2)
				{

					cin >> chois;
					switch (chois)
					{
					case 1: {
						tern = 0;
					}
						  break;
					case 2: {
						tern = 1;
					}
						  break;

					default:
						cout << "Этой команды нет в списке\n";
						cout << "Введите команду: ";
						break;
					}
				}
			}
				  break;

			default:
				cout << "Этой команды нет в списке\n";
				cout << "Введите команду: ";
				break;
		}
		system("cls");
		break;
	}
	
}
void rule(){
	cout << "Какой идиот не знает правил этой игры?";
	cout << "Ты все знаешь вперед:)";
}
int main()
{
	setlocale(0, "");
	
	while (true) {
		win = 2;
		cout << "                                            Крестики нолики\n";
		cout << "[1] Играть\n";
		cout << "[2] Настройки\n";
		cout << "[3] Правила\n";
		cout << "[4] Выйти\n";
		chois = 0;
		while (chois<1|| chois > 4)
		{

			cin >> chois;
			switch (chois)
			{
				case 1: {
					char contune;
					create();
					game(variable);
					if (win==1){

						system("cls");
						cout << "выйграли крестики"<<endl;
						cout << "Нажмите любую кнопку" << endl;
						cin >> contune;
						system("cls");
					}
					else if (win == 0) {
						system("cls");
						cout << "выйграли нолики" << endl;
						cout << "Нажмите любую кнопку" << endl;
						cin >> contune;
						system("cls");
					}
				}
				break;
				case 2: {
					Settings();
				}
				break;
				case 3: {
					rule();
				}
				 break;
				case 4: {
					return 0;
				}
				 break;

				default:
				cout << "Этой команды нет в списке\n";
				cout << "Введите команду: ";
				break;
			}
		}
		
	}
}
