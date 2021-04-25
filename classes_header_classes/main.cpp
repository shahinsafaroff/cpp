#include <iostream>
#include "Animal.h"

using namespace std;

int main() {
    Animal cat;

    cat.name = "Mishka";
    cat.mainCategory = "Domestic Cat";
    cat.subCategory = "Siam";
    cat.age = 14;
    cat.printProperties();
    return 0;
}
