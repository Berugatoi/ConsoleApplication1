#include <iostream>
#include <fstream>

using namespace std;
char inf[50];

int main()
{
    setlocale(LC_ALL, "Russian");

    ofstream fael("test.txt");
    fael << "1234567890abc";
    fael.close();

    ifstream fael1("test.txt");
    fael1.getline(inf, 50);
    for (int i = 0; i < strlen(inf); i++)
    {
        if (isdigit(inf[i]))
        {
            cout << inf[i];
        }

    }
    fael1.close();

}