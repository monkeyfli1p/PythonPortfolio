#include <iostream>
#include <vector>
using namespace std;

int main() {
setlocale(LC_ALL, "Russian");

int a;
cout « "Введите максимальное значение для проверки (A): ";
cin » a;

int n;
cout « "Введите размер массивов(n): ";
cin » n;

vector <double> x;
vector <double> y;
double res = 0;
int count = 0;

for (int i = 0; i < n; i++) {
double z;
cout « "Значение переменной для массива X: ";
cin » z;
x.push_back(z);

cout « "Значение переменной для массива Y:";
cin » z;
y.push_back(z);

if (x[i] * y[i] <= a) {
res += x[i] + y[i];
count++;
}

}

cout « "Количество произведений элементов X и Y: " « count « endl;
cout « "Сумма данных произведений: " « res « endl;

return 0;
}
