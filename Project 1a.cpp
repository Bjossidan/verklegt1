#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    string txt;
    for(int i; i<10; i++){
        cin >> ws;
        getline(cin, txt);
        ofstream fout;
        fout.open("project1a.txt", ios::app);
        fout << txt << endl;
        fout.close();
        }
    char choose;
    cout << "Do you wish to continue (y/n)?" << endl;
    cin >> choose;
    if(choose == 'y'){
        return main();
    }
    else if(choose == 'n'){
        return 0;
    }

}
