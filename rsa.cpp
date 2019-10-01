
#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int h)
{
    int temp;
    while(1)
    {
        temp = a%h;
        if(temp==0)
        return h;
        a = h;
        h = temp;
    }
}
 
int main()
{
    //2 random prime numbers
    cout<<"please eneter two random prime no.\n";
    // double p = 3;
    // double q = 7;
    double p,q;
    cin>>p>>q;
    double n=p*q;
    // cout<<"value of n=p*q i.e ="<<n<<'\n';
    double count;
    double fun = (p-1)*(q-1);
 
    //public key
    //e stands for encrypt
    double e=2;
 
    //for checking co-prime which satisfies e>1
    while(e<fun){
    count = gcd(e,fun);
    if(count==1)
        break;
    else
        e++;
    }
 
    //private key
    //d stands for decrypt
    double d;
    //k can be any arbitrary value
    // cout<<"enter any random no. for decryption vlaue of k\n";
    double k = 2;
    // double k;
    // cin>>k;
 
    //choosing d such that it satisfies d*e = 1 + k * fun
    d = (1 + (k*fun))/e;
    cout<<"enter message to decrypt\n";
    double msg ;//= 12;
    cin>>msg;
    double c = pow(msg,e);
    double m = pow(c,d);
    c=fmod(c,n);
    m=fmod(m,n);
 
    printf("Message data = %lf",msg);
    printf("\np = %lf",p);
    printf("\nq = %lf",q);
    printf("\nn = pq = %lf",n);
    printf("\nfun = %lf",fun);
    printf("\ne = %lf",e);
    printf("\nd = %lf",d);
    printf("\nEncrypted data = %lf",c);
    printf("\nOriginal Message Sent = %lf",m);
 
    return 0;	
}
