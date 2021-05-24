#include<iostream>
using namespace std;
void copy(char *a,char *b){
   while (*a !='\0')
   {
      *(b++)=*(a++);
      /* code */
   }
   *b++='\0';
  
   
}
int main()
{
char a[]="Mera watan";
char b[15];
char *pta=a;
char *ptb=b;
copy(pta,ptb);
 cout<<" a = "<<a;
 cout<<"\n b = "<<b[1];

return 0;

}