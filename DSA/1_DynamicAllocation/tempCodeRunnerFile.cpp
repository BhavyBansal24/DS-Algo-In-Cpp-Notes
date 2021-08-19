#include<iostream>
using namespace std;

int max(int a, int b, int c = 0){
    if (a>b && a > c) {
        return a;
    }
    else if (b>c && b > a){
        return b;
    }
    else
    return c;
}


bool pyth(int x,int y,int z){
    int a =max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;

    }else if(a==y){
        b=x;
        c=z;
    }else if(a==z){
        b=x;
        c=y;

    }
    if(a*a == b*b+c*c){
        return true;
    }
    else
    return false;

}

int main() {
    cout<<"enter three no";
    int x,y,z;
    cin >>x >>y >> z;
    if(pyth(x,y,z))
{
    cout<<"pythagorus triplet";
}else{
    cout<<"not a pythagorus";
}
    return 0;
}