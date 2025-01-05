//
//  Ulna.hpp
//  SKELETON
//
//  Created by Owner on 1/3/25.
//

#ifndef Ulna_hpp
#define Ulna_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <thread>
#include <random>
#include <complex>
#include <iomanip>

using namespace std;
/*
 We are going to use Runge Kutta Equations of order 4
 to approximate the solution of a given eqution. 
 */


class RungeKutta{
    
    
public:
    double a=0,b=1,h=0.25; 
    
    void DoAlgorithm();
};

double dydt(double y, double t);
double f(double t);

#endif /* Ulna_hpp */
