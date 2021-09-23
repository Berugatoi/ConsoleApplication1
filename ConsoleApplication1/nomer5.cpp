#include <iostream>

using namespace std;
char stroka[30] = "йф€цычувскамепинртгоьшлщз";

int main()
{
    setlocale(LC_ALL, "Russian");

    for (int i = 0; i < strlen(stroka); i++)
    {
        for (int k = strlen(stroka) - 1; k > i; k++)
        {
            if (stroka[i] > stroka[k])
            {
                char letter = stroka[k];
                stroka[k] = stroka[i];
                stroka[i] = letter;
            }
        }
    }
    cout << stroka << endl;
}