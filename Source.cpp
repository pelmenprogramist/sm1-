//подключение библиотеки
#include <iostream>
using namespace std;
int main(){ 
setlocale(LC_ALL, "Russian");
int a, b, c, d;
int S;
cout << "введите стоимость и количество";
cin >> a >> b >> c >> d;
S = (a * c) + (b * d);
cout << "Сумма покупки = " << S << endl;
}