#include <iostream>
#include <cmath>
using namespace std;

int main() {
setlocale(LC_ALL, "Russian");
cout.precision(4);
cout.setf(ios::fixed, ios::floatfield);

double A;
double x1;
double dX;

char res;
cout « "Предустановка значений или ввод произвольных значений?(y/n) ";
cin » res;

if (res == 'y') {
A = 0.7;
x1 = 10 * A;
dX = A / 2;
}
else {
cout « "Введите значения A, x1, dX: ";
cin » A » x1 » dX;
}


int n;
cout « "Введите значение n: ";
cin » n;

double x = x1;
double y;

for (int i = 0; i < n; i++) {
if (x <= -6 * A) {
y = -(pow(x + 3 * A, 2)) - 2 * A;
cout « "x = " « '\t' « x « '\t' « "y = " « y « endl;
}
else if (x >= -6 * A) {
y = A * cos(x + 3 * A) - 3 * A;
cout « "x = " « '\t' « x « " y = " « "\t" « y « endl;
}

x += dX;
}

return 0;
}
