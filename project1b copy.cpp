#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

    int lines;
        cout << "How many lines of text? " << endl;
        cin >> lines;

    string str;
    cout << "Enter text: " << endl;
    for(int i = 0; i < lines; i++){

    cin >> ws;
    getline(cin, str);

    ofstream fout;
    fout.open("project1b.txt", ios::app);
       if(str[0] == '\\') {
            return 0;
        }
        else {
            fout << str << endl;
        }
    }
    return 0;
}

