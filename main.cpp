
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>
#include <stdexcept>

#include <math.h>
using namespace std;
void hardy();

int main(){
 hardy();
}
void hardy(){
    double alt; double gen; double het;
 cout << "\n Enter frequency of alt allele: ";
 cin >> alt;
 double altsq = alt * alt;
 gen = 1 - alt;
 double gensq = gen * gen;
  het = 1 - gensq - altsq;
 cout << "\n";
 cout << "P 2 alt -   P 1 alt  - P 0 alt \n";
 cout << "  -   " << altsq << "  -   " << het << "  -   " << gensq;
 main();
}
