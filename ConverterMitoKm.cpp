#include <iostream>

using namespace std;

void milesToKilometres (double miles)
{
    double km = miles * 1.609;
    cout << "Расстояние в километрах: " << km;
}

int main()
{
    setlocale(LC_ALL, "ru");
    double distance;
    cout << "Конвертер мили в километры.\n"
        << "Введите расстояние в милях:";
    cin >> distance;
    milesToKilometres(distance);
    return 0;
}
