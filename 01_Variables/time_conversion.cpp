// Converting seconds into Hour minute and seconds
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int seconds, hour, minute, total_seconds;
    total_seconds = 468603;
    hour = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600;
    minute = remaining_seconds/60;
    seconds = remaining_seconds%60;

    cout<<"The given seconds = "<<total_seconds<<endl;
    cout<<"Hour conversion = "<<hour<<endl;
    cout<<"Minute conversion = "<<minute<<endl;
    cout<<"Second conversion = "<<seconds;
   
    return 0;
}
