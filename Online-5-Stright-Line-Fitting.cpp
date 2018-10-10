//x2*y-x*xy
//n*xy-x*y
//n*x2-x*X
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int x[20],y[20],sumx=0,sumy=0,sumxy=0,sumx2=0,n,i;
    double a,b;
    cout<<"---------------Fitting a Straight Line______________"<<endl;

    cout<<"Enter how many values you want for (x,y) : ";
    cin>>n;

    cout<<endl;

    cout<<"Enter Value of x : ";
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    cout<<"Enter Value of y : ";

    for(i=0;i<n;i++){
        cin>>y[i];
    }

    cout<<"_____________________________________"<<endl;
    cout<<"\txi\t"<<"yi\t"<<"xi*xi\t"<<"xi*yi"<<endl;
    cout<<"_____________________________________"<<endl;
    int arr[20];
    int arr1[20];
    for( i =0;i<n;i++){
        arr[i]=x[i]*x[i];
        arr1[i]=x[i]*y[i];
    }


    for(i=0;i<n;i++){
        sumx+=x[i];
        sumy+=y[i];
        sumxy+=x[i]*y[i];
        sumx2+=x[i]*x[i];
    }
    for(i=0;i<n;i++){
        cout<<"\t"<<x[i]<<"\t"<<y[i]<<"\t"<<arr[i]<<"\t"<<arr1[i]<<endl;
    }
    cout<<endl;
    cout<<"Sum =  "<<sumx<<"\t"<<sumy<<"\t"<<sumx2<<"\t"<<sumxy<<endl;
    cout<<endl;
    a = ((sumx2*sumy-sumx*sumxy)*1.0/(n*sumx2-sumx*sumx)*1.0);
    b = ((n*sumxy-sumx*sumy)*1.0/(n*sumx2-sumx*sumx)*1.0);

    cout<<"The equation is y = "<<a<<" + "<<b<<"x";
    return 0;

}
