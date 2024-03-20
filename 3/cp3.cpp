#include <iostream>
using namespace std;

int main()
{
    int n, digit, num, rev = 0;
    cout << "Input the number: ";
    cin >> n;
    num = n;
    do
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    } while (num != 0);

    cout << "Reversed number: " << rev << endl;
    if (rev == n)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Non-palindrome";
    }

    return 0;
}