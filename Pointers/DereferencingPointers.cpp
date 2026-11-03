#include<iostream>
using namespace std;

int main(){
    int score = 85;
    int* ptr = &score;
    cout << " Value in score is: "<< score << endl;
    cout << " Value of dereferenced ptr is: "<< *ptr << endl;
    cout << " Address in ptr is: "<< ptr << endl;

    return 0;
}
