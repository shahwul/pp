#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int sum = 0;

    do
    {
        sum += n;

        cout << "\nThe sum is " << sum << endl;
        cout << "Enter a number: ";
        cin >> n;
    } while (n >= 0);

    return 0;
}