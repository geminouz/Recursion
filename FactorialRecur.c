//
// Created by gemin on 13/11/2023.
//
#include "FactorialRecur.h"

long recursiveFactorial(int n){
    if(n==0)
        return(1);
    return(n* recursiveFactorial(n-1));
}