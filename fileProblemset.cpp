// fileProblemset.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

double readBalance() {
    ifstream fin;

    fin.open("data.txt");

    string line;
    while (getline(fin, line)) {
        if (fin.fail()) {
            cout << "ERROR: File not found" << endl;
        }


    }
    fin.close();
    return stod(line);

}

void displayBalance(double balance) {
    cout << "Account Balance: $" << balance << endl;
}

double updateBalance(double initialValue) {
    double change;
    cout << "Change: $";
    cin >> change;
    initialValue += change; 
    return initialValue; 
    
}

void writeBalance(double balance) {
    ofstream fout;
    fout.open("data.txt");

    if (fout.fail()) {
        cout << "ERROR: File not found";
    }

    else {
        fout << balance;
    }

    fout.close();
    cout << "Account Balance: $" << balance << endl;


}

int main()
{
    double initialValue = readBalance();
    displayBalance(initialValue);
    double balance = updateBalance(initialValue);
    writeBalance(balance); 


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
