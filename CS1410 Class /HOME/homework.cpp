#include <iostream>
using namespace std;

int main()
{
    int empty[5] = {};
    int array[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        empty[i] = array[i];
        cout << empty[i] << " ";
        if (i == 4)
        {
            cout << "\n";
        }
    }
    char fName[] = {"Henry"};
    cout << fName << endl; // only works in characters

    // Comparing 2 arrays
    int counter = 0;
    int first_array[5] = {10, 20, 30, 40, 50};
    int second_array[5] = {10, 20, 30, 40, 50};
    bool isequal = true;
    for (counter = 0; counter < 5; counter++)
    {
        if (first_array[counter] != second_array[counter])
        {
            isequal = false;
        }
    }
    if (isequal)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}
