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
    cout << inf << endl;
    fael1.close();

}