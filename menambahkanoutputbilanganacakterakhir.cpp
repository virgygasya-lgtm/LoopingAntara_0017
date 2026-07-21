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

cout << "PERULANGAN DO...WHILE" << endl;

do
{
    cout << "TI, Bilangan acak = " << x << endl;
    x = rand() % 10;
}
while (x <= 5);

cout << "Bilangan acak do-while yang terakhir = " << x << endl;
cout << endl;