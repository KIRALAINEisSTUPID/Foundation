#include <iostream>
using namespace std;
int main(){
    int s,r1,r2,r3;
    cout <<"Son kiriting;";
    cin>>s;
    r1 =s/100;
    r2 =(s/10) % 10;
    r3 =s % 10;
    
    cout<<"bu sonni yuzliklar xonasidagi raqami:"<<r1<<endl<<"bu sonning onlikar xonasida trugan raqam:" << (s/10) % 10<<endl<<"bu sonning 1 liklar xonasida turgan raqam:"<<s%10<<endl<<"sonlarning yigindisi:"<<r1+r2+r3;
    return 0;
}