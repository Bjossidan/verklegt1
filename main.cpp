#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()

{
    cout << "Welcome to the text file editor" << endl;
    cout << "Please enter wanted function" << endl;
    cout << "If you want to write input: w " << endl;
    cout << "If you want to read input: r " << endl;
    cout << "To quit input: q " << endl;

    char input;
    ifstream fin;
    fin.open("Input.txt");

   cin >> input;
    if(input == 'r'){
            string txt;


            ifstream fin;
            fin.open("Input.txt");

            if(fin.is_open()){
                while(!fin.eof()){
                    getline(fin, txt);
                    fin>>txt;


                    cout <<  txt << endl;
                }
            }
            else{
                cout << "Text file not open" << endl;
            }
            return main();
            }
               else if(input == 'w'){


                    string txt;
                    cout << "Enter text:";
                    cin >> ws;
                    getline(cin, txt);

                    //string txt;
                    ofstream fout;
                    fout.open("Input.txt", ios::app);
                    fout  << txt << endl;

                    fout.close();
                    return main();



    }

    else if(input == 'q'){
        return 0;

    }
    else {
        cout << "Incorrect input try again " << endl;
        return main();
    }
    while(input !='q')

    fin.close();



    }

