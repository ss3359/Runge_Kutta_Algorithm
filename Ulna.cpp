//
//  Ulna.cpp
//  SKELETON
//
//  Created by Owner on 1/3/25.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <thread>
#include <random>
#include <complex>
#include <iomanip>

#include "Ulna.hpp"

using namespace std; 

void RungeKutta::DoAlgorithm(){
    /*
     This involves four immediate slopes (k1,k2,k3,k4)
     The differential equation is y'(t) = cos(2t)+sin(3t);
     with initial condition y(0)=1;
     */
    double N=(b-a)/h;
    double t=a;
    double w=1;
    
    for(int i=0; i<N; ++i){
        double k1=h*dydt(t,w);
        double k2=h*dydt(t+(h/2),w+(k1/2));
        double k3=h*dydt(t+(h/2), w+(k2/2));
        double k4=h*dydt(t+h,w+k3);
        
        w+=(k1+(2*k2)+(2*k3)+k4)/6; //Compute w_i
        t+=h; //Compute t_i
        
        
        //Output (t,w)
        cout<<fixed<<setprecision(6);
        cout<<"Estimated Point: ("<<t<<","<<w<<")"<<endl;
        cout<<"Actual Point: ("<<t<<","<<f(t)<<")"<<endl;
    }
    
    
}
double dydt(double t, double y){
    return cos(2*t)+sin(3*t);

    /*
     0<t<1 and h=0.25, y(0)=1
     The actual solution is y(t)=(1/2)sin2t -(1/3)cos3t+(4/3).
     */
}
double f(double t){
    return (0.5)*sin(2*t)-(1.0/3.0)*cos(3*t)+(4.0/3.0);
}
