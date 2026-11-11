#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Books
{
    string Title;
    string Author;
    float Price;
};

int main()
{
    string bookName;
    Books arr[5];
    bool found;
    int counter = 0;
    int selfCount;

    for (int i = 0; i < 5; i++)
    {
        cout << " BOOK " << i + 1 << " DETAILS" << endl;
        cout << " Enter Book Name: ";
        getline(cin, arr[i].Title);
        cout << " Enter Author Name: ";
        getline(cin, arr[i].Author);

        while (true)
        {
            cout << " Enter the Price: ";
            cin >> arr[i].Price;

            if (!cin.fail())
                break;

            cout << " Wrong Input.\n Enter a numeric Value.\n";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    while (counter != 4)
    {
        cout << "\n<--------------Menu------------->\n";
        cout << " Press 1 to Display Book list.\n";
        cout << " Press 2 to Search a book.\n";
        cout << " Press 3 to Update book price.\n";
        cout << " Press 4 to exit.\n";

        cout << " Use search book to find the self number before updating the price.\n";

        cin >> counter;

        switch (counter)
        {
        case 1:

            for (int i = 0; i < 5; i++)
            {
                cout << " BOOk found at self " << i << endl;
                cout << " Book Name: " << arr[i].Title << endl;
                cout << " Book Author: " << arr[i].Author << endl;
                cout << " Book Price: " << arr[i].Price << endl;
                cout << endl;
            }
            break;
        case 2:
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            found = false;
            cout << " Enter the name of the book you are looking for: ";
            getline(cin, bookName);

            for (int i = 0; i < 5; i++)
            {
                if (arr[i].Title == bookName)
                {
                    cout << " BOOk found at self " << i << endl;
                    cout << " Book Name: " << arr[i].Title << endl;
                    cout << " Book Author: " << arr[i].Author << endl;
                    cout << " Book Price: " << arr[i].Price << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << " Book not found.\n";
            }
            break;

        case 3:
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter the selfNo: ";
            cin >> selfCount;
            if (selfCount >= 0 && selfCount < 5)
            {

                while (true)
                {
                    cout << " Enter the Price: ";
                    cin >> arr[selfCount].Price;

                    if (!cin.fail())
                        break;

                    cout << " Wrong Input.\n Enter a numeric Value.\n";

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << " Book Name: " << arr[selfCount].Title << endl;
                cout << " Author: " << arr[selfCount].Author << endl;
                cout << " Updated price: " << arr[selfCount].Price << endl;
            }
            else
                cout << " Enter a valid selfCount.\n";
            break;
        case 4:
            return 0;

        default:
            cout << " Invalid input.\n";
            break;
        }
    }

    return 0;
}
