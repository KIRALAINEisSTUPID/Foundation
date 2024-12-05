#include <iostream>
using namespace std;

int main(){
    //1 mashq
    float L,M,bayt;
    int a, b,c,d;
    cout<< "Nechi santimetrni kiritmoqchisiz:";cin>>L;
    
    cout<<"siz kiritgan santimetrlar metrda: "<<L/100<< "m"<<endl;



    //2 mashq
    cout<< "Nechi kg kiritmoqchisiz:";cin>>M;
    
    cout<<"siz kiritgan kg tonnalarda: "<<M/1000<< "t"<<endl;

    //3 mashq
    cout<< "Nechi bayt  kiritmoqchisiz:";cin>>bayt;
    
    cout<<"siz bayt kilobaytlarda tonnalarda: "<<bayt/1024<< "kb"<<endl;

    //4 mashq
    cout << "Ikki xonalik son kiriting:";cin>>a;cout<<"bu son onlik xonasida turgan raqami:"<<a/10<<endl<<"bu sonning birliklarn xonasida turgan raqami:"<<a % 10<<endl;

    //5 mashq
    cout << "Ikki xonalik son kiriting:";cin>>a;cout<<"bu sonning raqamlar yigindisi:"<< (a/10)+(a % 10)<<endl;

    

    //6 mashq
    cout << "Ikki xonalik son kiriting:";
    cin>>a;
    b = a /10;
    c = a % 10;
    cout<<"bu sonning raqamlarini ozgartirsa:"<< c<<b<<endl;


    //7 mashq
    cout<< "Uchxonalik sonni kiriting:";
    cin >> a;
    cout<<"bu sonning yuzliklar xonasida turadigan raqam:"<< a/100<<endl;


    //8 mashq
    cout<< "Uchxonalik sonni kiriting:";
    cin >>a;
    cout<< "Bu sonning birliklar xonasida turgan raqami:"<<(a % 100) % 10<<endl;
    cout << "Bu sonning onliklar xonasida turgan raqami:"<<(a % 100) / 10 << endl;


    //9 mashq

    cout <<"Uchxonalik sonni kiriting:";
    cin>>a;
    b =a/100;
    c =(a/10) % 10;
    d=a % 10;
    
    cout<<"bu sonni yuzliklar xonasidagi raqami:"<<b<<endl<<"bu sonning onlikar xonasida trugan raqam:" << (a/10) % 10<<endl<<"bu sonning 1 liklar xonasida turgan raqam:"<<a%10<<endl<<"sonlarning yigindisi:"<<b+c+d;



    //10 mashq
    cout <<"Uchxonalik sonni kiriting:";
    cin>>a;
    cout << "Bu sonning raqamlarini tezkari yozilgan varianti:"<< (a % 100) % 10<<(a % 100) / 10<<(a / 100)<<endl;




    //11 mashq
    cout <<"Uchxonalik sonni kiriting:";
    cin>>a;
    b = (a % 100) % 10;
    c =(a % 100) / 10;
    d = (a / 100);
    cout << "Bu sonning raqamlarini ozgartirib yozilgan varianti:"<<c<<b<<d<<endl;


    //12 mashq
    cout <<"Uchxonalik sonni kiriting:";
    cin>>a;
    cout << "Bu sonning raqamlarini ozgartirib yozilgan varianti:"<<b<<c<<d<<endl;


    //13 mashq
    cout <<"Uchxonalik sonni kiriting:";
    cin>>a;
    cout << "Bu sonning raqamlarini ozgartirib yozilgan varianti:"<<c<<d<<b<<endl;
   

    //14 mashq

    cout <<"Uchxonalik sonni kiriting:";
    cin>>a;
    cout << "Bu sonning raqamlarini ozgartirib yozilgan varianti:"<<d<<b<<c<<endl; 

    //15 mashq

    cout<<"tortxonalik son kiriting:";
    cin>>a;
    cout<<"Uning yuzliklar xonasidagi raqami:"<< (a % 1000)/ 100<<endl;


    //16 mashq
    cout<<"tortxonalik son kiriting:";
    cin>>a;
    cout<<"uning mingliklar xonasida turgan raqami"<< a/ 1000<<endl;


    //17 mashq
    cout << "Qancha sekund otdi?:";
    cin>> a;
    cout<<a/60<<" minut otgan ekan"<<endl;


    //18 mashq 
    cout << "Qancha sekund otdi?:";
    cin>> a;
    cout<<a/3600<<" soat otgan ekan"<<endl;


    //19 mashq
    cout << "Qancha sekund otdi?:";
    cin>> a;
    cout<<a/60<<"minut"<<  a % 60<<" sekund otdi"<<endl;


    //20 mashq
    cout << "Qancha sekund otdi?:";
    cin>> a;
    cout<<a % 3600<<" soat"<<endl<<a/60<<" minut"<<endl<<  a % 60<<" sekund otdi"<<endl;

    return 0;
}