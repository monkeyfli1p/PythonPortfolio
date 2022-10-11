#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL, "Russian");

int n1, m1;
int n2, m2;

cout « "Введите количество строк для первого массива: ";
cin » n1;

cout « "Введите количество столбцов для первого массива: ";
cin » m1;

cout « "Введите количество строк для второго массива: ";
cin » n2;

cout « "Введите количество столбцов для второго массива: ";
cin » m2;

int A[100][100];
int B[100][100];

int count1 = 0;
int count2 = 0;

cout « "Заполнение первого массива: ";

for (int i = 0; i < n1; i++) {
cout « "Введите значения для строки №" « i + 1 « ": ";
bool flag = false;
for (int j = 0; j < m1; j++) {
cin » A[i][j];
if (A[i][j] % 2 == 0 && flag == false) {
flag = true;
count1++;
}
}
}

cout « "Заполнение второго массива: ";

for (int i = 0; i < n2; i++) {
cout « "Введите значения для строки №" « i + 1 « ": ";
bool flag = false;
for (int j = 0; j < m2; j++) {
cin » B[i][j];
if (B[i][j] % 2 == 0 && flag == false) {
flag = true;
count2++;
}
}
}

int sum = 0;

if (count1 > count2) {
cout « "Переработка первого массива: " « endl;
for (int i = 0; i < n1 / 2; i++) {
sum += A[i][i];
}

for (int i = 0; i < n1; i++) {
for (int j = 0; j < m1; j++) {
A[i][j] /= 2;
cout « A[i][j] « " ";
}
cout « endl;
}
}
else {
cout « "Переработка второго массива: " « endl;
for (int i = 0; i < n2 / 2; i++) {
sum += B[i][i];
}

for (int i = 0; i < n1; i++) {
for (int j = 0; j < m1; j++) {
B[i][j] /= 2;
cout « B[i][j] « " ";
}
cout « endl;
}
}

return 0;
}
