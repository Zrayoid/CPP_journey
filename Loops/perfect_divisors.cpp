#include <iostream>
using namespace std;

int main()
{
   int count = 0;
   int count1 = 0;
   int MostPerfectDivision = 0;
   for( int i = 2; i <= 500; i++)
   {
        count = 0;
        for( int j = 1; j < i; j++ )
        {
            if( i % j == 0){
                count++;
            }
        }

        if( count > count1 )
        {
            count1 = count;
            MostPerfectDivision = i;
            // cout << i << " has " << count << " proper divisors\n";

        }
   }

   cout << " Count is---> "<< count1 << endl;
   cout << " Number with Most Perfect Division is---> "<< MostPerfectDivision << endl;
    return 0;
}
