/*
If the expression is true then execute the statement
If the expression is false then skip the statement
*/
#include <iostream>
using namespace std;

int main()
{
    int num{};
    const int min{10};
    const int max{100};

    cout << "Enter a number betwwen 10 and 100 : ";
    cin >> num;

    if (num >= min) // number should be 
    {
        cout << "\n================If statement 1 ================="
             << "\n";
        cout << num << " is greater than " << min << "\n";

        int diff{num - min};
        cout << num << " is " << diff << " greater than " << min << "\n";
    }

    if (num <= max)
    {
        cout << "\n================If statement 2 ================="
             << "\n";
        cout << num << " is less than or equal to " << max << "\n";

        int diff{max - num};
        cout << num << " is " << diff << " less than " << max << "\n";
    }

    if (num >= min && num <= max)
    {
        cout << "\n================If statement 3 ================= \n";
        cout << num << " is in range \n";
        cout << "This means satements 1 and 2 must also display! \n";
    }

    if (num == min || num == max)
    {
        cout << "\n================If statement 4 ================= \n";
        cout << num << " is right on a boundary.\n ";
        cout << "This means all 4 statements display\n";
    }

    return 0;
}