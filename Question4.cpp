//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n ;
    int m ;
    int product ,temp,check;
    int max = 0;
    
      for(n=100;n<=999;n++){
          for(m=100;m<=999;m++){
              product = n*m;
              temp = 0;
              check = product;
              while(product!=0){
                  temp = (temp*10) +(product%10);
                  product = product/10;

                  if(check==temp){
                       if(temp>max)
                           max=temp; 
                }
              }  
          }
      }
     
     cout<<max;
    return 0;
}
//output - 906609
