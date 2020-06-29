#include <iostream> 
using namespace std; 
int main()
{
    int a[3][3], msum=0, ssum=0;
    cout<<"enter the 3x3 matrix"<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];
    cout<<"3x3 matrix is"<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if (i == j) 
                msum=msum+a[i][j]; 
            if ((i + j) == 2) 
                ssum=ssum+a[i][j]; 
        }
    }
    cout<<"main diagonal sum is:"<<msum<<endl;
    cout<<"secondary diagonal sum is:"<<ssum<<endl;
    return 0;
}