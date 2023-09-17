#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int min;
    int max;
    int const arraySize = 5;
    int mass[arraySize] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < arraySize; i++)
    {
        cout << mass[i] << " ";
    }
    cout << "\n";

    max = mass[0];
    for (int i = 0; i < arraySize; i++)
    {
        if (mass[i] > max)
            max = mass[i];
    }

    min = mass[0];
    for (int i = 0; i < arraySize; i++)
    {
        if (mass[i] < min)
            min = mass[i];
    }

    cout << "Максимальный элемент = " << max << "\n"
        << "Минимальный элемент = " << min << "\n"
        << "Разность' = " << max - min << endl;

    return 0;
}