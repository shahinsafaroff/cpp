#include <iostream>
# include <vector>
using namespace std;

std::vector<double> getdoubles(int numdoubles){
    std::vector<double> darray( numdoubles );
    for (int i = 0; i < darray.size(); i++)
    {
        darray[i] = ( (i+1.0)/3.0 );
    }
    return darray;
}

int main()
{
    const auto vec = getdoubles(5);
    for ( const auto v : vec ){
        std::cout << v << '\n';
    }
}