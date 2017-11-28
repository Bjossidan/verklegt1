#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    string txt;
    int stop;
    do{
        if(txt[0]=='\\'){
            break;
        }
        else{
            cin >> ws;
            getline(cin, txt);
            ofstream fout;
            fout.open("project1b.txt", ios::app);
            fout << txt << endl;
            fout.close();
        }
    }
    while(stop != 1000);


return 0;
}
