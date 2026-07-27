#include <iostream>
using namespace std;

int main()
{
    char FirstCharacter;
    char SecondCharacter;
    cout << "Enter your First character:: ";
    cin >> FirstCharacter ;
    cout << "Enter your Second character:: ";
    cin >> SecondCharacter ;

    if( static_cast<int>(FirstCharacter) < static_cast<int>(SecondCharacter) ){
        
        cout << SecondCharacter << " " << static_cast<int>(SecondCharacter) << " is greater than "
             << FirstCharacter << " " << static_cast<int>(FirstCharacter);
    }
    else
        cout << FirstCharacter << " " << static_cast<int>(FirstCharacter) << " is greater than "
             << SecondCharacter << " " << static_cast<int>(SecondCharacter) ;
   
   
    return 0;
}