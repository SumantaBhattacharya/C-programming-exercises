#include <iostream> 
 using namespace std; 
 int addition (int a, int b) 
 { 
    return a+b; 
 } 
 double addition (double a, double b) 
 { 
    return a+b; 
 } 
 int main () 
 { 
    cout<< addition (35,20) << ";"; 
    cout<< addition (34.1,12.7); 
    return 0; 
 } 