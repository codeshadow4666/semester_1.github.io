#include<iostream>

using namespace std;

/*
                             Dear Sir

there are total 5 function  

there is an "admin" function which works like an admin .

I have done all work in funcitons instead of mian() program
           

*/





// *********************************************************************************** 

// ................function declaration  or prototypes......................
void showMatrix(int mtx[2][2]);
void showTranspose (int mtx[2][2]);
void showAdjoint(int mtx[2][2]);
void calculateDeterminant(int mtx[2][2]);
void admin(char a);   // supervisor function


// ......................................ending......................


// *********************************************************************************** 

// ..............................main program stating ...........................
int main()
{

char  a='0';


do
{
    cout<<"\n***********************************************\n\n";
cout<<"\n\nPlease Enter Your Choise ..........\n\n";
cout<<"\nEnter 1 to Display matrix & it's transpose ";
cout<<"\n\nEnter 2 to find Adjoint & Determinent of Matrix\n\nPress Any key for Exit....\n\n";
cout<<"\n\n(Note: Please enter only 1 character input !!!";
cout<<"\nAfter 1st character all input will be ignored )\n\nInput = ";
cin>>a;
cout<<endl<<endl;


admin(a);

}while((int(a)>=49)&&(int(a)<=50));//type casting character to integer  , comparing ASCII values
return 0;

}
// ..............................main program ending ...........................
// *********************************************************************************** 
// ..............................functions starting .............................. 


void admin(char a)
{
    // create matrix 
    int mtx[2][2];
mtx[0][0]=8;
mtx[0][1]=-4;
mtx[1][0]=-6;
mtx[1][1]=2;

    // create matrix 



    if(a=='1')
    {
showMatrix(mtx);
showTranspose(mtx);
    }
    else if(a=='2')
    {
    showAdjoint(mtx);
calculateDeterminant(mtx);
    }
    else
    {
        cout<<"\n\n*****************************************************\n\n";
      cout<<"\n\n\n***********Program Successfully Exited************\n\n";
    }

}

// *****************show matrix*************
void showMatrix(int mtx[2][2]){



cout<<"\n\nMatrix is :\n\n";

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        cout<<"\t"<<mtx[i][j]<<"\t";
    }
    cout<<endl;
    
}



cout<<endl<<endl;

}
// *****************show matrix      ending*************
// showTranspose(); staring here 
void showTranspose(int mtx[2][2])
{



cout<<"\n\nTranspose is :\n\n";         //transpose code

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        cout<<"\t"<<mtx[j][i]<<"\t";
    }
    cout<<endl;
    
}
cout<<endl<<endl;
}
// showTranspose(); ending here 
//adjoin matrix function 

void showAdjoint(int mtx[2][2]){

cout<<"\n\nAdjoint  is :\n\n";         //transpose code

for (int i = 1; i >= 0; i--)
{
    for (int j = 1; j >= 0; j--)
    {
        if((i==0)&&(j==1))
        {
            mtx[j][i] = (mtx[j][i]*-1);
        }
        if((i==1)&&(j==0))
        {
            mtx[j][i] = (mtx[j][i]*-1);
        }
        cout<<"\t"<<mtx[j][i]<<"\t";
        
    }
    cout<<endl;
    
}
cout<<endl<<endl;

}

// adjoin matrix function ending
//calculate determinant 
void calculateDeterminant(int mtx[2][2]){
    int drt = (mtx[0][0]*mtx[1][1])-(mtx[0][1]*mtx[1][0]);
    
    cout<<"\n\nDeterminant = "<<drt;
}
//calculate determinant 
// ..............................functions ending .............................. 


                    //  ***********Ending************
// *********************************************************************************** 