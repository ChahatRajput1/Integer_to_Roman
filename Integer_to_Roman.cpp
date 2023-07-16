#include <iostream>
#include <map>
using namespace std;
string ConvertRomanIntoInteger(int num)
{
    int number[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string Roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string result;
    int i = 0;
    for (int i=0;i < 13;i++)
    {
        while (num >= number[i])
        {
            result += Roman[i];
            num -= number[i];
        }
    }
    return result;
}
int main()
{
    int num;
    cout << "Enter  Number" << endl;
    cin >> num;
    cout << ConvertRomanIntoInteger(num);
}