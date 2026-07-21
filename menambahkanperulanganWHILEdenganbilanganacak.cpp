#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int x;

    return 0;
}

srand(time(0));

// Nilai awal x = 1
x = 1 + rand() % 10;

cout << "PERULANGAN WHILE" << endl;

while (x <= 5)
{
    cout << "TI, Bilangan acak = " << x << endl;
    x = rand() % 10;
}