#include<iostream>
#include<stdio.h>
#include<ctype.h>
using namespace std;

int main()
{

int c,lc=0,uc=0,pc=0,dc=0,ws=0,oth=0;
cout<<"Enter Any String : ";
while ((c = getchar()) != '\n') 
 { 
 if (islower(c)) 
 lc++; 
 else if (isupper(c)) 
 uc++; 
 else if (isdigit(c)) 
 dc++; 
 else if (isspace(c)) 
 ws++; 
 else if (ispunct(c)) 
 pc++; 
 else 
 oth++; 
 } 

cout<<"lower case character : "<<lc<<endl<<"upper case characters : "<<uc<<endl<<"Digits : "<<dc<<endl<<"White space : "<<ws<<endl;
cout<<"Punction marks : "<<pc<<endl<<"other : "<<oth;

return 0;

}
