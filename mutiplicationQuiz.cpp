// mutiplicationQuiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    unsigned seed = time(0);
    srand(seed);
    cout << "Welcome to the multiplication quiz" << endl;
    cout << endl;
    cout << endl;
    int pts = 0;

    for (int i = 1; i < 11; i++) {
        int a = rand() % 9 + 1;
        int b = rand() % 9 + 1;
        unsigned int ans;
        cout << "Question #" << i << endl;
        cout << a << " * " << b << " = ";
        cin >> ans;
        if (ans == a * b) {
            cout << "Good job" << endl;
            pts = pts + 1;
            cout << "You have " << pts << " points" << endl;
            cout << endl;
        }
        else if (ans != a*b) {
            cout << "Incorrect" << endl;
            cout << "You have " << pts << " points" << endl;
            cout << endl;
        }
    }
    cout << "You have " << pts << " points" << endl;
    system("pause");
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
