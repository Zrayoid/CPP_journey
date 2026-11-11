#include <iostream>
#include <string>
using namespace std;

struct book
{
    string title;
    string author;
    float price;
};

book createbook()
{
    book b;
    b.title = "October Junction";
    b.author = "Prakash dubey";
    b.price = 299;

    return b;
}


int main()
{
    book b1 = createbook();
    cout << b1.title;
    return 0;
}
