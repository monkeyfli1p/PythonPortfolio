#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector <double> CreateCMassive(vector <int> A) {
vector <double> C;

for (int element : A) {
if (element >= 0) {
double lg = log10(double(element));
C.push_back(lg + 5.0);
}
else {
C.push_back(abs(double(element)) - 5.0);
}
}

return C;
}

int main() {
setlocale(LC_ALL, "Russian");
int n, num;
double min_c;

cout « "Введите количество элементов для массива A: ";
cin » n;

vector <int> A(n);

cout « "Введите значения элементов в массиве A: ";
for (int i = 0; i < n; i++) {
cin » A[i];
}

vector <double> C = CreateCMassive(A);

min_c = C[0];
num = 1;

for (int i = 0; i < C.size(); i++) {
if (C[i] < min_c) {
min_c = C[i];
num = i + 1;
}
}

cout « "Формирование массива C, завершено" « endl;

for (double element : C) {
cout « element « " ";
}

cout « endl;

cout « "Минимальное значение массива C " « min_c « " и его порядковый номер " « num « endl;

return 0;
}
