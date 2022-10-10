#include <iostream>
#include <vector>
using namespace std;

int main() {
setlocale(LC_ALL, "Russian");
int n;
int min, max;
bool flag = false;

vector <int> f;
vector <int> numbers;

cout « "Введите количество элементов в массиве (n): ";
cin » n;

n = abs(n);

for (int i = 0; i < n; i++) {
int x;
cin » x;

f.push_back(x);
}

cout « "Введите минимальное значение для диапазона (min): ";
cin » min;

cout « "Введите максимальное значение для диапазона (max): ";
cin » max;

if (max < min) {
max, min = min, max;
}

for (int element : f) {
if (element >= min && element <= max) {
numbers.push_back(element);
flag = true;
}
}

if (flag) {
cout « "Числа входящие в диапазон: " « endl;
for (int element : numbers) {
cout « element « " ";
}
cout « endl;
}
else {
cout « "Чисел входящих в диапазон не имеются" « endl;
}

return 0;

}
