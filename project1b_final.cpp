#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string texti(){
    string str;
    cin >> ws;
    getline(cin, str);
    ofstream fout;
    fout.open("project1b.txt", ios::app);
       if(str[0] == '\\') {
            return str;
    }
    else{
    fout << str << endl;
    }
    return texti();
}

int main() {

    cout << "Enter text: " << endl;
    texti();

    return 0;
}

