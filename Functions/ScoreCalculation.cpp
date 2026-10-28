#include <iostream>
using namespace std;

int calculateBonus(bool completedLevel, bool allCoins)
{
   int bonus = 0;
    if (completedLevel)
    {
        bonus += 50;
    }
    if (allCoins)
    {
        bonus += 100;
    }

    return bonus;
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
