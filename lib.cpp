#include "lib.h"

float maggiore(float numeri[], int dim){
    float max=numeri[0];
    for(int i=1; i<dim; i++){
        if(numeri[i]>max){
            max=numeri[i];
        }
    }
    return max;
}
