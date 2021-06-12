#include<iostream>
using namespace std;

// classes is here 
class complex
{
    int n1;
    int n2;
    public:
    friend void swaap(complex &, complex &);
    friend void display(complex ,complex );
    void setnum(int a ,int b)
    {
        n1=a;
        n2=b;


    }

};
// classes is here 
// functions is here 
void swaap(complex &a,complex &b)
{
    int temp=a.n1;
    a.n1=b.n1;
    b.n1=temp;
    int tem2=a.n2;
    a.n2=b.n2;
    b.n2=tem2;
    

}
void display(complex a,complex b)
{
    cout<<"*********************";
    cout<<"a1 = "<<a.n1<<"\na2 = "<<a.n2;
    cout<<"\nb1 = "<<b.n1<<"\nb2 = "<<b.n2;
    cout<<"*********************";
}
// functions is here 


// main program 
int main()
{
complex aa,bb;
cout<<"Before swaping\n\n"<<endl;
aa.setnum(1,2);
bb.setnum(3,4);
display(aa,bb);
swaap(aa,bb);
cout<<"\n\nAfter swaping\n\n"<<endl;
display(aa,bb);

return 0;

}
// main program 