#include <iostream>
using namespace std;

int calculateBonus(bool completedLevel, bool allCoins)
{
    int LevelComplete = 200;
    int CoinCollected = 300;
    if ( completedLevel && allCoins ){
        return LevelComplete + CoinCollected;
    }
    else if( completedLevel ){
        return LevelComplete;
    }
    else if ( allCoins)
    {
        return CoinCollected;
    }
    else
        return 0;
}

int calculateFinalScore(int &baseScore, int bonus)
{
    return  baseScore = baseScore + bonus;
}

int main()
{
    int x, y;
    cout << " Is Level Complete?? \n";
    cin >> x;
    cout << " are All coins collected?? \n";
    cin >> y;
    int baseScore = 500;
    int Bonus = calculateBonus( x, y);
    int result = calculateFinalScore(baseScore, Bonus);

    cout << " Final Score: "<< baseScore;
    return 0;
}
