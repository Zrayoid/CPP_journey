#include<iostream>
#include<limits>
using namespace std;

int main(){
    // 1.Signed Integers
    int a = numeric_limits<int>::max();
    short b = numeric_limits<short>::max();         
    long c = numeric_limits<long>::max();
    long long d = numeric_limits<long long>::max();

    // 2.Unsigned Integers
    unsigned long p = numeric_limits<unsigned long>::max();
    unsigned long long ull = numeric_limits<unsigned long long>::max();

    // 3.Floating-Point Types
    float h = numeric_limits<float>::max();
    double e = numeric_limits<double>::max();
    long double f = numeric_limits<long double>::max();
    
    char g = 'a';
    bool i = true;

    cout<<"int a: "<< a <<" a + 1 "<< a+1 <<"\n"<<" Size of a "<<sizeof(a)<<"bytes"<<endl;
    cout<<endl;
    
    
    cout<<"short b: "<< b <<" b + 1 "<< b+1 <<"\n"<<" Size of b "<<sizeof(b)<<"bytes"<<endl;
    cout<<endl;
    cout<<"long c: "<< c <<" c + 1 "<< c+1 <<"\n"<<" Size of c "<<sizeof(c)<<"bytes"<<endl;
    cout<<endl;
    cout<<"long long d: "<< d <<" d + 1 "<< d+1 <<"\n"<<" Size of d "<<sizeof(d)<<"bytes"<<endl;
    cout<<endl;
    cout<<"unsigned long p: "<< p <<" p + 1 "<< p+1 <<"\n"<<" Size of p "<<sizeof(p)<<"bytes"<<endl;
    cout<<endl;
    cout<<"unsigned long long ull: "<< ull <<"ull + 1 "<< ull+1 <<"\n"<<" Size of ull "<<sizeof(ull)<<"bytes"<<endl;
    cout<<endl;
    cout<<"float h: "<< h <<" h + 1 "<< h+1 <<"\n"<<" Size of h "<<sizeof(h)<<"bytes"<<endl;
    cout<<endl;
    cout<<"double e: "<< e <<" e + 1 "<< e+1 <<"\n"<<" Size of e "<<sizeof(e)<<"bytes"<<endl;
    cout<<endl;
    cout<<"long double f: "<< f <<" f + 1 "<< f+1 <<"\n"<<" Size of f "<<sizeof(f)<<"bytes"<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"char g: "<< g <<" g + 1 "<< g+1 <<"\n"<<" Size of g "<<sizeof(g)<<"bytes"<<endl;
    cout<<endl;
    cout<<"bool i: "<< i <<" i + 1: "<< i+5 <<"\n"<<" Size of i: "<<sizeof(i)<<"bytes"<<endl;
    
    return 0;
}