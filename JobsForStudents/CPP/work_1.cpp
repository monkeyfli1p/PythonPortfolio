#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
setlocale(LC_ALL, "Russian");
double x;

cout « "Введите значение x: ";
cin » x;

double res = ((abs(sin(sqrt(10.5 * x)))) / (pow(pow(x, 2), 1.0 / 3) - 0.143)) + (2 * M_PI * x);

cout « res « endl;

return 0;
}
