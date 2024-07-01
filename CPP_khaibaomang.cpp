// CPP_khaibaomang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void swapNum(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}
int main() 
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "nhap phan tu thu" << i << ": ";
        cin >> arr[i];
    }
    for (int x : arr) {
        cout << x << " ";
    }
        int vitrimax = 0;
        int somax = 0;
        for (int i = 0; i < 5; i++)
        {
            if (somax < arr[i])
            {
                somax = arr[i];
                vitrimax = i;
            }
        }
        cout << "\nso max: " << somax;
        cout << "\nSau khi swap\n";
        swapNum(arr[0], arr[vitrimax]);
        for (int i : arr) {
            cout << i << " ";
        }
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
