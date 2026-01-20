#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void mainMenu();
void createInfo();
void viewRecords();
void clrscrn();

int main() {
    mainMenu();
    return 0;
}

void viewRecords() {

}

void createInfo() {
    string fullName;
    string birthDay;
    string cityAdd;
    string emailAdd;
    long long int phoneNum;
    string section;

}

void mainMenu() {
    char condition;

    cout << "\n\t------ MENU ------" << endl;
    cout << "\n\t[1] Add Personal Information" << endl;
    cout << "\n\t[2] View Saved Records" << endl;
    cout << "\n\t[3] Exit Program" << endl;
    cout << "\n\tEnter your Choice: ";
    cin >> condition;

    clrscrn();

    if (condition == '1') {
        createInfo();
    } else if (condition == '2') {
        viewRecords();
    } else if (condition == '3') {
        exit(0);
    } else {
        cout << "\n\tInvalid Input! Please try again." << endl;
        mainMenu();
    }
}

void clrscrn() {
    system("cls");
}