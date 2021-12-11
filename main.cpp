#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int dim;
    cin >> dim;
    float numeri[dim];
    for(int i=0; i<dim; i++){
        numeri[i]=0;
    }
    for(int i=0; i<dim; i++){
        cin >> numeri[i];
    }
    cout <<maggiore(numeri,dim)<<endl;
    return 0;
}
