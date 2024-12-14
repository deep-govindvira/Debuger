#include <bits/stdc++.h>
using namespace std;

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
            cout << "\nExpected : " << (char)ch2;
            cout << "\nFound : " << (char)ch1;
            return false;
        }
        cout << ch1;
    }
    file2.get(ch2);
    if (file1.eof() && file2.eof()) return true;
    if (file1.eof()) {
        cout << "\nMissing : " << endl;
        do {
            cout << ch2;
        }
        while (file2.get(ch2));
    }
    else {
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
        cout << "\nAccepted." << endl;
    }
    else {
        cout << "\nFailed" << endl;
    }
    return 0;
}
