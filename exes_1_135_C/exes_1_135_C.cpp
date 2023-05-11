#include <iostream>
using namespace std;

int Ahmad[71];
int n;
int i;

void input()
{
    while (true)
    {
        cout << "Enter the number of element is the Ahmad: ";
        cin >> n;
        if ((n > 0) && (n <= 71))
            break;
        else
            cout << "\nAhmad should have minimum 1 and maximum 71 element.\n\n";
    }

    cout << "\n---------------------\n";
    cout << " Enter Ahmad element \n";
    cout << "\n---------------------\n";
    for (i = 0; i < n-1; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> Ahmad[i];
    }
}


void AlgorithmSearch()
{
    char ch;
    int ctrl;

    do
    {
        cout << "\nEnter the element you want to search: ";
        int item;
        cin >> item;

        ctrl = 0;
        for (i = 0; i < n-1; i++)
        {
            ctrl++;
            if (Ahmad[i] == item)
            {
                cout << "\n" << item << " found at position " << (i - 1) << endl;
                cout << "\n" << item << " found at position " << (i + 1) << endl;
                break;
            }
        }

        if (i == n)
            cout << "\n" << item << "not found in the Ahmad\n";
        cout << "\nNumber of comparisons: " << ctrl << endl;

        cout << "\nContinue search (y/n): ";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'Y'));
}
int main()
{
    input;
    AlgorithmSearch;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
