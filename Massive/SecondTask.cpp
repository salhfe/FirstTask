#include <cstdlib> 

#include <ctime> 

#include <algorithm>

#include <array>

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU"); // cout �� �������


    srand((unsigned)time(0)); // ����� �������

    int massive[11];

    for (int i = 1; i <= 10; ++i)
    {
        int random = (rand() % 100) + 1;
        massive[i] = random;
    }

    cout << "�������� �������: ";

    for (int i = 1; i <= 10; ++i)
    {
        cout << massive[i] << " ";
    }

    sort(begin(massive), end(massive));

    cout << "\n\n���������� �������: ";

    for (int i = 1; i <= 10; ++i)
    {
        cout << massive[i] << " ";
    }

    int a;
    cin >> a;

    return 0;
}