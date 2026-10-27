#include <iostream>
using namespace std;

int main()
{
    int Unit, Tens, Hundred;
    int temp, count = 0;

    for (int i = 100; i <= 300; i++)
    {
        // ---------My way-------------
        // Unit = i % 10;
        // temp = i / 10;
        // Tens = temp % 10;
        // temp = temp / 10;
        // Hundred = temp % 10;
        // ------------Learnt a better way------------
        Unit = i % 10;
        Tens = ( i/10 ) % 10;
        Hundred = ( i/100 ) % 10;

        if ( Unit == Tens || Unit == Hundred || Tens == Hundred)
            continue;
       
        cout << " These are unique:: " << i << endl;
        count++;
       
    }
    
    cout << " The final Count is:: " << count;
    return 0;
}
