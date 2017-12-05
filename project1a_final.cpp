#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string str;
    ifstream fin;
    int count = 0;
    char ans;

    fin.open("text.txt");
    do {
        while(count < 10 && !fin.eof()) {

            getline(fin, str);
            cout << str << endl;
            count ++;
        }
        if (fin.eof ()) {
            return 0;
        }
        cout << "Do you wish to continue (y/n)? " << endl;
        cin >> ans;
        count = 0;
        if(ans == 'n'|| ans == 'N') {
            return 0;
        }
        if (!(ans == 'y'|| ans == 'Y')) {
            cout << "Do you wish to continue (y/n)? " << endl;
            cin >> ans;
        }
        if (fin.eof ()) {
            return 0;
        }

    }while (ans == 'y'|| ans == 'Y');
    fin.close();

    return 0;
}
