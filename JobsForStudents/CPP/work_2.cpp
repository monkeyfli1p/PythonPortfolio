#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
setlocale(LC_ALL, "Russian");
cout.precision(6);
cout.setf(ios::fixed, ios::floatfield);

double a, b;
int n;

cout « "Введите значения a, b и n: ";
cin » a » b » n;

double h = (b - a) / (double(n) - 1);
double x = a, y;
cout « "Таблица функции" « endl;
cout « "n" « '\t' « "X" « '\t' « "Y" « endl;

for (int i = 1; i <= n; i++) {
y = ((abs(sin(sqrt(10.5 * x)))) / (pow(pow(x, 2), 1.0 / 3) - 0.143)) + (2 * M_PI * x);
cout « i « '\t' « x « '\t' « y « endl;
x += h;
}

system("pause");

return 0;
}
