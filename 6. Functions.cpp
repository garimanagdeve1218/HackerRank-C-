#include <iostream>
#include <cstdio>
using namespace std;



int main() {
    int a,b,c,d,max_of_four;
    cin>>a>>b>>c>>d;
    if(a>b and a>c and a>d){
        cout<<a;    
    }
    else if(b>a and b>c and b>d){
        cout<<b;    
    }
    else if(c>a and c>b and c>d){
        cout<<c;    
    }
    else{
        cout<<d;    
    }
    
    
    
    return 0;
}
