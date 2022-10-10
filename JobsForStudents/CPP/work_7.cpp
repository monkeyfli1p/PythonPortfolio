#include <iostream>
#include <vector>
using namespace std;

int main() {
setlocale(LC_ALL, "Russian");
vector <vector <int» f = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
vector <int> col;
bool flag = false;

int x = 3;
int y = 6;

for (int i = 0; i < y; i++) {
cout « "Введите 3 значения для строки номер № " « i + 1 « ": ";
for (int j = 0; j < x; j++) {
int x;
cin » x;

f[i][j] = x;
}
}

for (int i = 0; i < y; i++) {
int count = 0;
for (int j = 0; j < x; j++) {
if (f[i][j] == 0) {
count++;
}
if (count >= 2) {
col.push_back(i + 1);
flag = true;
break;
}
}
}

if (flag) {
cout « "Номера строк в которых содержатся 2, или больше, нуля: " « endl;

for (int element : col) {
cout « element « " ";
}
}
else {
cout « "Строк с 2 нулями или более, не имеются";
}

cout « endl;

return 0;
}
