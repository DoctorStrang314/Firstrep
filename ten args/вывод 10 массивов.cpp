
#include <iostream>
using namespace std;
const int SIZE = 10;
int main()
{
    setlocale(0, "");
    
    
    cout << "целые числа" << endl;
    int num[SIZE];
    for (int i = 0; i < SIZE; i++) {
        num[i] = i + 1;
        cout << num[i]<<endl;
    }
    cout << "Дробные"<<endl;
    float fnum[SIZE];
    for (int i = 1; i < SIZE; i++) {
        fnum[i] =(float)i/10;
        cout << fnum[i] << endl;
    }
    cout << "Дробные double" << endl;
    double dnum[SIZE];
    for (int i = 1; i < SIZE; i++) {
        dnum[i] = (double)i / 5;
        cout << dnum[i] << endl;
    }
    cout << "целые числа short" << endl;
    short snum[SIZE];
    for (short i = 0; i < SIZE; i++) {
        snum[i] = i *2;
        cout << snum[i] << endl;
    }
    cout << "целые числа long" << endl;
    long lnum[SIZE];
    for (long i = 0; i < SIZE; i++) {
        lnum[i] = i * 20;
        cout << lnum[i] << endl;
    }
    cout << "cтрока" << endl;
    string stnum[SIZE];
    for (int i = 0; i < SIZE; i++) {
        stnum [i] = "Значение ";
        cout << stnum[i]<<i*20 <<endl;
    }
    cout << "символ" << endl;
    char chnum[SIZE];
    for (int i = 0; i < SIZE; i++) {
        chnum[i] = 'а'+i;
        cout << chnum[i] << endl;
    }
    cout << "лог. значение" << endl;
    bool bnum[SIZE];
    for (int i = 0; i < SIZE; i++) {
        bnum[i] = i % 2;
        if (bnum[i] == 0) {
            cout << "false" << endl;
        }
        else {
            cout << "true" << endl;
        }
    }
    return 0;
}