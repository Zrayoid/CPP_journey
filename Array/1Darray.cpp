#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int x, n;
    for (int i = 0; i < 5; i++)
    {
        cout << " Enter " << i + 1 << " score: ";
        cin >> a[i];
    }
    cout << " Enter the indice you wanna exchange. ";
    cin >> n >> x;
    int temp = a[n];
    a[n] = a[x];
    a[x] = temp;
    cout << " AFter swap\n";
    for (int i = 0; i < 5; i++)
    {
      cout << a[i] << " ";
    }



    return 0;
}
