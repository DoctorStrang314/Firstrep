#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	int number;
	cout << "[+] Месяца года\n[1]Январь\n[2]Февраль\n[3]Март\n[4]Апрель\n[5]Май\n[6]Июнь"<<endl;
	cout << "[7]Июль\n[8]Август\n[9]Сентябрь\n[10]Октябрь\n[11]Ноябрь\n[12]Декабрь\n";
	cout << "Введите значение:";
	cin >> number;

	switch (number) {
	case 1:
		cout << "Январь - пьянварь";
		break;
	case 2:
		cout << "Февраль - Холодно ";
		break;
	case 3:
		cout << "Март-Теплеет";
		break;
	case 4:
		cout << "Апрель- А у вас тема светлая";
		break;
	case 5:
		cout << "Мир труд май";
		break;
	case 6:
		cout << "Июнь-Жарунь";
		break;
	case 7:
		cout << "Июль-Жарюль";
		break;
	case 8:
		cout << "Август- Последний месяц чила";
		break;
	case 9:
		cout << "Сентябрь- я календарь переверну и снова 3 сентября ";
		break;
	case 10:
		cout << "Октябрь - котябрь";
		break;
	case 11:
		cout << "Ноябрь - Да ";
		break;
	case 12:
		cout << "Декабрь - Возвращение дубака";
		break;
	default:
		cout << "тебе же сказали, от 1 до 12, цыфры в школе не учил?";
	}

	return 0;
}