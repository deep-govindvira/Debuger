#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

void color(string c) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    if(c == "Blue")
        SetConsoleTextAttribute(h, 1);
    else if(c == "Green")
        SetConsoleTextAttribute(h, 2);
    else if(c == "Cyan")
        SetConsoleTextAttribute(h, 3);
    else if(c == "Red")
        SetConsoleTextAttribute(h, 4);
    else if(c == "Purple")
        SetConsoleTextAttribute(h, 5);
    else if(c == "Yellow")
        SetConsoleTextAttribute(h, 6);
    else if(c == "White")
        SetConsoleTextAttribute(h, 7);
    else if(c == "Black")
        SetConsoleTextAttribute(h, 8);
    else if(c == "Light Blue")
        SetConsoleTextAttribute(h, 9);
    else if(c == "Light Green")
        SetConsoleTextAttribute(h, 10);
    else if(c == "Light Cyan")
        SetConsoleTextAttribute(h, 11);
    else if(c == "Light Red")
        SetConsoleTextAttribute(h, 12);
    else if(c == "Light Purple")
        SetConsoleTextAttribute(h, 13);
    else if(c == "Light Yellow")
        SetConsoleTextAttribute(h, 14);
    else if(c == "Light White")
        SetConsoleTextAttribute(h, 15);
}

bool areFilesEqual(const string& filePath1, const string& filePath2) {
    ifstream file1(filePath1, ios::binary);
    ifstream file2(filePath2, ios::binary);
    if(!file1.is_open() || !file2.is_open()) {
        cerr << "Error opening files." << endl;
        return false;
    }
    char ch1, ch2;
    while(file1.get(ch1) && file2.get(ch2)) {
        if(ch1 != ch2) {
            color("Light Cyan");
            cout << "\nExpected : ";
            color("Light Green");
            cout << ch2;
            color("Light Cyan");
            cout << "\nFound : ";
            color("Light Red");
            cout << (int)ch1;
            return false;
        }
        cout << ch1;
    }
    file2.get(ch2);
    if (file1.eof() && file2.eof()) return true;
    if (file1.eof()) {
        color("Light Yellow");
        cout << "\nMissing : " << endl;
        do {
            cout << ch2;
        }
        while (file2.get(ch2));
    }
    else {
        color("Light Purple");
        cout << "\nExtra : " << endl;
        do {
            cout << ch1;
        } while (file1.get(ch1));
    }
    return false;
}

int main() {
    string filePath1 = "output.txt";
    string filePath2 = "correctoutput.txt";
    if(areFilesEqual(filePath1, filePath2)) {
        color("Light Green");
        cout << "\nAccepted." << endl;
    }
    else {
        color("Light Red");
        cout << "\nFailed" << endl;
    }
    color("White");
    return 0;
}
