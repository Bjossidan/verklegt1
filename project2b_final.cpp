#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class SuperHero {

private:
    char name[38];
    int age;
    char superpower[38];

public:
    SuperHero() {
        name[0] = '\0';
        age = 0;
        superpower[0] = '\0';
}

    friend istream& operator >> (istream& in, SuperHero& data) {

        cout << "Enter name of superhero: ";
        in >> data.name;

        cout << "Age of superhero? ";
        in >> data.age;

        cout << "Power of superhero? ";
        in >> data.superpower;

        return in;

    }
    friend ostream& operator << (ostream& out, const SuperHero& data) {

        out << data.name << " (" << data.age << "): ";

        if(data.superpower[0] == 'f'){
            cout << "Flying";
        }
        else if(data.superpower[0] == 'g'){
            cout << "Giant";
        }
        else if(data.superpower[0] == 'h'){
            cout << "Hacker";
        }
        else if(data.superpower[0] == 'n'){
            cout << "None";
        }
        else{
            cout << "Weakling";
        }
        return out;
    }
};

int main() {

    SuperHero ofurhetja1;

    cin >> ofurhetja1;

    ofstream fout;
    fout.open("binary_ofurhetjur.dat", ios::binary|ios::app);

    fout.write((char*)(&ofurhetja1), sizeof(SuperHero));

    fout.close();

    SuperHero ofurhetja2;

    ifstream fin;
    fin.open("binary_ofurhetjur.dat", ios::binary|ios::app);
    if(fin.is_open()) {
    fin.seekg(0, fin.end);
    int records = fin.tellg() / sizeof(SuperHero);
    fin.seekg(0, fin.beg);

    for(int i = 0; i < records; i++) {
        fin.read((char*)(&ofurhetja2), sizeof(SuperHero));
        cout << ofurhetja2 << endl;
        }
    }
    else{
        cout << "Could not open file" << endl;
    }
    fin.close();

    return 0;
}
