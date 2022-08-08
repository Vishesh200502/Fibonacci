#include<iostream>
using namespace std;
int main()
{
    int range,i,num1,num2,num3=0;
    cout << "Enter the range uptil you want the Fibonacci sequence = ";
    cin >> range;
    num1 = 0;
    num2 = 1;
    cout << num1 << " ";
    cout << num2 << " ";
    for(i=3;i<=range;i++)
    {
        num3 = num1 + num2;
        cout << num3 << " ";
        num1 = num2;
        num2 = num3;
    }
    return 0;
}