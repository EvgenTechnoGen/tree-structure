#include <iostream>

using namespace std;

struct Tree {
    int age;
    float width;
    float height;
    char name;
};

int main(int argc, const char * argv[]) {
    Tree berezka;
    berezka.age = 45;
    berezka.width = 0.3;
    berezka.height = 6.6;
    berezka.name = 'b';
    
    Tree dubok;
    dubok.age = 120;
    dubok.width = 2.35;
    dubok.height = 25.32;
    dubok.name = 'd';

    Tree sosna;
    sosna.age = 97;
    sosna.width = 0.5;
    sosna.height = 15;
    sosna.name = 's';

    cout << "Tree - berezka." << endl;
    cout << "Berezka's characteristics:" << endl;
    cout << "Berezka's age - " << berezka.age << " years;" << "\n" << "Berezka's width - " << berezka.width << " metres;" << "\n" << "Berezka's height - " << berezka.height << " metres;" << endl;
    
