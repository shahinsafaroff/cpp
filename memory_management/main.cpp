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

int main() {
    cout<<sizeof (Category)<<endl;
    return 0;
}
