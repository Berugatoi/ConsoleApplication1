#include <iostream>

using namespace std;
float S, p, n, m;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Введите S:" << endl;
    cin >> S;

    cout << "Введите p:" << endl;
    cin >> p;

    cout << "Введите n:" << endl;
    cin >> n;

    if (p == 0)
    {
        m = S / (n * 12);
    }

    else
    {
        float r = p / 100;
        m = ((S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1)));
    }
    
    cout << "m равно: " << m << endl;
}