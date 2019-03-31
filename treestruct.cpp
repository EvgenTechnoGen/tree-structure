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
    
    cout << "Tree - dubok" << endl;
    cout << "Dubok,s characteristics:" << endl;
    cout << "Dubok's age - " << dubok.age << " years;" << "\n" << "Dubok's width - " << dubok.width << " metres;" << "\n" << "Dubok's height - " << dubok.height << " metres;" << endl;

    cout << "Tree - sosna." << endl;
    cout << "Sosna's characteristics:" << endl;
    cout << "Sosna's age - " << sosna.age << " years;" << "\n" << "Sosna's width - " << sosna.width << " metres;" << "\n" << "Sosna's height - " << sosna.height << " metres;" << endl;
    
