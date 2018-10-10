#include<bits/stdc++.h>
using namespace std;


struct Data
{
    int x, y;
};

double interpolate(Data f[], int xi, int n)
{
    double result = 0; // Initialize result

    for (int i=0; i<n; i++)
    {
        // Compute individual terms of above formula
        double term = f[i].y;
        for (int j=0;j<n;j++)
        {
            if (j!=i)
                term = term*(xi - f[j].x)/double(f[i].x - f[j].x);
        }

        // Add current term to result
        result += term;
    }

    return result;
}

int main()
{
   // Data f[] = {{0,2}, {1,3}, {2,12}, {5,147}};
   int a,b;
   int n;
   cin>>n;
   Data f[n];
   for(int i =0;i<n;i++){
    cin>>a>>b;
    f[i].x = a;
    f[i].y = b;
   }
    cout << "Value of f(3) is : " << interpolate(f, 10, n);

    return 0;
}
