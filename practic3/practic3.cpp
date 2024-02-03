// practic3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

//zadanie1
#define t1 3
#define z1 (1 / tan(t1 + 2)) 
#define y1 4
#define x1 (8 * z1 / (pow(E, t1) + 2) - pow(y1, 2))
#define RESULT1 cout << "Значение x: " << x1 << endl;

//zadanie2
#define x2 -0.85
#define y2 1.25
#define z2 (sqrt(fabs(20 * x2)) / (pow(x2, 2) + pow(y2, 3)))
#define b2 (pow(y2, x2) + pow(z2, 3) * sqrt(fabs(x2) + fabs(y2) * pow(E, x2)))
#define RESULT2 cout << "Значение b: " << b2 << endl;

const double E = 2.7182818284;
const double PI = 3.141592653;

double Zadanie3(double alpha) {
    return 2 * sqrt(2) * cos(alpha) * sin(PI / 4 + 2 * alpha);
}

int main()
{ 
    setlocale(LC_ALL, "ru");
    RESULT1;
    RESULT2;

    cout << "Введите значение альфа: ";
    double alpha;
    cin >> alpha;
    cout << "Значение z: " << Zadanie3(alpha) << endl;

    return 0;



}

