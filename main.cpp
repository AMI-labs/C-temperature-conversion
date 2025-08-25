/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
  double temp ;
  char unit ;
  
  cout<<"*****************TEMPERATURE CONVERSION*********** \n ";
  
  cout<<"F = Fehrenhit \n";
  cout<<"   C = celsius \n";
  cout<<"what unit you will like to convrt to : ";
  cin>>unit;
  
  
  if(unit == 'f' || unit == 'F'){
      
      cout<<"Enter the temperature in Celius";
      cin>>temp;
      
      temp = ( 1.8 * temp) +32.0;
      cout<<"TEMPERATURE IS :"<<temp<<"F \n";
      
      
  }
  else if (unit == 'c' || unit == 'C'){
      
      cout<<"Entere temperature in fehrenhit";
      cin>>temp;
      
      temp=(temp - 32) / 1.8;
      cout<<"TEMPERATURE IS :"<<temp<<" C \n";
      
      
  }else{
      
      cout<<"Pleas Enter C or F \n";
      
      
  }
  
  
  
  
    
  cout<<"************************************************";
    
    
    
    

    return 0;
}