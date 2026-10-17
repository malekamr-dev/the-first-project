#include<iostream>
using namespace std ;
int main (){
double a,b,c; 
cout << "Enter Your Numbers :" << endl ; 
cin >> a >> b >> c;
double avg = (a+b+c)/3;
cout << "The Average Is = :"<< avg << endl ;
double product = a*b*c ;
cout << "The Product Is = :"<<product<<endl ;
if (a>b){if (a>c) {cout<<"The Largest Number Is :"<<a<<endl ;} 
else {cout<<"The Largest Number Is :"<<c<<endl ;}}
else {if (b>c) {cout<<"The Largest Number Is :"<<b<<endl ;} 
else {cout<<"The Largest Number Is :"<<c<<endl ;}}
if (a<b){if (a<c) {cout<<"The smallest Number Is :"<<a<<endl ;} 
else {cout<<"The smallest Number Is :"<<c<<endl ;}}
else {if (b<c) {cout<<"The smallest Number Is :"<<b<<endl ;} 
else {cout<<"The smallest Number Is :"<<c<<endl ;}}



return 0 ;
}