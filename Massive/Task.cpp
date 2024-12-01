#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    const int max = 21;

   int* max_temp = const_cast<int*>(&max); // указатели...  присвоил переменной max свое значение

   x:

   cout << "\nВведите количество элементов: ";

   cin >> *max_temp;

   if (*max_temp > 20)
   {
       cout << "\n\nОшибка, максимальное количество элементов: 20";
       goto x;
   }

    int massive[max];

    for (int i = 1; i <= *max_temp; ++i)
    {
        cout << "\nВведите число под номером " << i << ": ";
        cin >> massive[i];
    }

    for (int i = 1; i <= *max_temp; ++i)
    {
        cout << massive[i] << " ";
    }

    int a;
    cin >> a;

    return 0;
}