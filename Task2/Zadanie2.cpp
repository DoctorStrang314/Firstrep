#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    cout << "1 - Лето\n2 - Осень\n3 - Зима\n4 - Весна\n";
    int season;
    cin >> season;
    if (season == 1) {
        cout << "Сейчас лето - жарко ";
    }
    else if (season == 2) {
        cout << "Сейчас осень, холодно и дождливо -сиди дома";
    }
    else if (season == 3) {
        cout << "Сейчас зима, красиво, но холодно";
    }
    else if (season == 4) {
        cout << "Сейчас весна, надевай шапку, еще не лето";
    }
    else {
        cout << "Вы ввели не то";
    }
    return 0;
}
