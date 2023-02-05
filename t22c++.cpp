// Q(1.)WAP to Calculate Factorial using Function:
/*
#include<iostream>
using namespace std;

int Factorial(int n)
{
    int Fact=1;
    for(int i=1;i<=n;i++)
    {
        Fact=Fact*i;
    }
    return Fact;
}

int nCr(int n, int r)
{
  int numar = Factorial(n);

  int denom = Factorial(n-r)*Factorial(r);

  return numar/denom ;
}
int main()
{
    int n,r;
    cin >> n >> r;

    cout << "Answer is "<< nCr(n,r) << endl;

}         */

//Q(2.) WAP to determine the number is Prime or not Prime using Function: 
/*
#include<iostream>
using namespace std;

bool isPrime(int num)
{
    for(int i=2 ; i<num ; i++ )
    {
        if(num%i==0)
         return 0; 
    }
    return 1; 
}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;

    if( isPrime(n))
     cout<<"Number is Prime"<<endl;
    
    else
     cout<<"Number is not prime"<<endl;
}         */

//Q(3.)

#include<iostream>
using namespace std;

int CreateAp(int n)
{
    int k=3*n+7;
    return k;
}
int main()
{
    int n;
    cin>>n;
   int k;
    int CreateAp(k);

    cout<<"nth term is "<< k << endl;

}