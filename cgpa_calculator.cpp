/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[]={3,4,4,4,4,3,4,  3,4,4,4,4,3,2,    3,3,3,4,2,  4,4,6};
    int b[]={9,9,9,7,9,10,10,9,10,8,8,10,9,9,  8,9,8,8,10, 7,8,10}; 
    int totalCreditCount=0,gradeReceived=0,creditCount=0,total=0; 
    //cout<<"Hello World";
    int i=0;
    while(i<22){
        cout<<" i is "<<i<<endl;
        //cin>>gradeReceived;
        total += a[i] * b[i];
        cout<<"total "<<total <<endl;
        //totalgrades+=gradeReceived;
        totalCreditCount+=a[i];
        i++;
    }
    cout<<"totalCreditCount "<<totalCreditCount<<endl;
    cout<< total/((1.00)*totalCreditCount);
    

    return 0;
}
