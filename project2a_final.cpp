#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class SuperHero {

private:
    string name;
    int age;
    string superpower;

public:
    SuperHero() {
        name = "";
        age = 0;
        superpower = "";
}

    friend istream& operator >> (istream& in, SuperHero& data) {

        cout << "Enter name of superhero: ";
        in >> ws;
        getline(in, data.name);

        cout << "Age of superhero? ";
        in >> data.age;

        cout << "Power of superhero? ";
        in >> data.superpower;
        if(data.superpower[0] == 'f'){
            data.superpower = "Flying";
        }
        else if(data.superpower[0] == 'g'){
            data.superpower = "Giant";
        }
        else if(data.superpower[0] == 'h'){
            data.superpower = "Hacker";
        }
        else if(data.superpower[0] == 'n'){
            data.superpower = "None";
        }
        else{
            data.superpower = "Weakling";
        }

        return in;

    }
    friend ostream& operator << (ostream& out, const SuperHero& data) {

        out << data.name << " (" << data.age << "): " << data.superpower << endl;

        return out;
    }
};

int main() {

    SuperHero ofurhetja;

    cin >> ofurhetja;

    ofstream fout;
    fout.open("ofurhetjur.txt", ios::app);

    fout << ofurhetja;

    fout.close();

    return 0;
}
