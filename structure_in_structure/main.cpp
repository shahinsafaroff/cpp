#include <iostream>
using namespace std;
struct Category{
    string name;
    int itemQuantity;
};
struct Departments{
    string name;
    bool open;
    int quantityOfAll;
    Category categoryOptions;
};
void removeFromStock(Departments* department, int howManySold ){
    department->categoryOptions.itemQuantity -=howManySold;
    department->quantityOfAll -= howManySold;
}
int main() {
    Departments dep1 = {"Pasteries", 1, 200,{"Pasta", 130}};
    cout << dep1.name <<" "<<dep1.open<<" "<<dep1.quantityOfAll<<" "<<dep1.categoryOptions.name<<" "<<dep1.categoryOptions.itemQuantity<<endl;
    removeFromStock(&dep1, 30);
    cout << dep1.name <<" "<<dep1.open<<" "<<dep1.quantityOfAll<<" "<<dep1.categoryOptions.name<<" "<<dep1.categoryOptions.itemQuantity<<endl;
    return 0;
}
