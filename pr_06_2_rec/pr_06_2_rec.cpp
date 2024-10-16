#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* a, const int size, const int min, const int max, int i)
{
    a[i] = rand() % (max - min + 1) + min;
    if (i < size - 1)
        Create(a, size, min, max, i + 1);
}

void Print(const int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);

    else
        cout << " }" << endl;
}

void Reverse(int* a, const int size, int i)
{

    if (i >= size / 2) 
        return;

    int temp = a[i];
    a[i] = a[size - i - 1];
    a[size - i - 1] = temp;

    Reverse(a, size, i + 1);
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 5;
    int a[n];
    int min = -10;
    int max = 10;

    Create(a, n, min, max, 0);
    cout << "A1 = {";
    Print(a, n, 0);
    Reverse(a, n, 0);
    cout << "A2 = {";
    Print(a, n, 0);

    return 0;
}
