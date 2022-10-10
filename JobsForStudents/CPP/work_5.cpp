#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
setlocale(LC_ALL, "Russian");
int n, min_x;
vector <int> A;

cout « "Введите количество элементов (n): ";
cin » n;

cout « "Добавьте элементы в массив: ";

for (int i = 0; i < n; i++) {
int x;
cin » x;

A.push_back(x);
}

min_x = A[0];

if (n % 2 != 0) {
n -= 1;
}
else {
n -= 2;
}

for (int i = 0; i < n; i++) {
if(abs(A[i]) - abs(A[n - i + 1]) < min_x) {
min_x = abs(A[i]) - abs(A[n - i + 1]);
}
}

cout « "Наименьшее из разностей массива: " « min_x « endl;

return 0;
}
