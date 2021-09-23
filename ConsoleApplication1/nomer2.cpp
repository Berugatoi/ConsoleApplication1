#include <iostream>

using namespace std;
double S, n;
double m, pm, r;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "¬ведите S:" << endl;
    cin >> S;

    cout << "¬ведите m:" << endl;
    cin >> m;

    cout << "¬ведите n:" << endl;

    cin >> n;

    for (double p = 0; p < 101; p += 0.1)
    {
        r = p / 100.0;
        if (r == 0)
        {
            pm = S * (n / 12);
        }
        else
        {
            pm = (S * r * pow((1.0 + r), n)) / (12.0 * (pow((1.0 + r), n) - 1.0));
        }
        if (abs(pm - m) < 0.1)
        {
            cout << "p равно: " << p << endl;
            break;
        }
    }
}