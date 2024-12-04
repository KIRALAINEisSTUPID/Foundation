#include <iostream>



using namespace std;

int main(){
    // 1   mashq
    int a,b,s;
    cout << "birinchi sonni kiriting:";
    cin>> a;
    cout << "ikkinchi sonni kiriting:";
    cin >>b;

    s = a+b;

    cout << "sonlarning yigindisi:" << s << endl;

    // 2   mashq
    int Perimetr;    
    cout<< "Perimetrini bilmoqchi bolgan,kvadratingizni bir tomonini kiriting:";
    cin >> a;
    Perimetr = 4 *a;

    cout<<"Kvadratning perimetri:" <<Perimetr <<endl;

    





    // 3   mashq
    //int kvadratning yuzasi;
    cout << "bilmoqchi bolgan kvadratingizni bir tomonining qiymatini kiriting:";

    cin >> a;
    
    s = a * a;
    cout << "Ushbu sonning kvadrati:" << s << endl;










    // 4   mashq
    cout << "Tortburchakning a qismini kiriting:";
    cin >> a ;
    cout << "Tortburchakning b qismini kiriting:";
    cin >> b ;


    Perimetr = 2*(a+b);
    s = a*b;
    cout << "bu tortnurchakning perimetri:" << Perimetr << endl;
    cout << "bu tortnurchakning yuzi:" << s << endl;




    // 5   mashq
    int v;
    cout<< "son kirintg va biz uning hajmini va sirtini yuzi bilib olamiz:";
    cin >>a;

    v = a*a*a;
    s = 6*a*a;

    cout << "Uning sirti:" << s << "   uning hajmi:" << v << endl;




    // 6   mashq
    cout << "orta arifmetigini bilmoqchi bolsangiz birinchi sonni kiriting";
    cin >> a;
    cout << "2 sonni kiriting:";
    cin >> b;

    int OrtaArifmetik;

    OrtaArifmetik = (a+b)/2;

    cout << "sonlarning orta arifmetigi:" << OrtaArifmetik<<endl;




    // 7   mashq

    cout << "1 sonni kiritng:";
    cin >>a;
    cout << "2 sonni kiritng:";
    cin >>b;

    s = a*b;
    int ayirma,yigindi;
    ayirma = a-b;
    yigindi =a+b;
    cout << "ayirma:" << ayirma << endl;
    cout << "yigindi:" << yigindi << endl;
    cout << "kopaytma" << s << endl;

    // 8   mashq

    cout << "birinchi sonni kiriting:";
    cin>>a;
    cout << "ikkinchi sonni kiriting:";
    cin>>b;

    int tezkariA,tezkariB,tezkariC;
    tezkariA = b;
    tezkariB = a;

    cout << "A:"<<tezkariA << endl;
    cout << "B:"<<tezkariB<<endl;







    // 9   mashq
    cout << "birinchi sonni kiriting:";
    cin>>a;
    cout << "ikkinchi sonni kiriting:";
    cin>>b;
    cout << "Uchinchi sonni kiriting:";
    int c;
    cin >>c;




    tezkariA = b;
    tezkariB = c;
    tezkariC = a;

    cout << "A:"<<tezkariA << endl;
    cout << "B:"<<tezkariB<<endl;
    cout << "C:" <<tezkariC <<endl;

    // 10  mashq
    int shirinlikNarxi,shirinlikM;
    cout << "qancha shirinlik olasiz (kg yozing):";
    cin >> shirinlikM;

    shirinlikNarxi = 3*shirinlikM;


    cout<< "siz   " << shirinlikNarxi << "$ pul tolashingiz kk" <<endl;




    // 11  mashq
    int x=4,y=3;


    cout << "qancha shirinlik:";
    cin>>a;
    cout << "qancha shokolad:";
    cin>>b;

    cout<< "shirinlik shokkoladdan  " << (x*a)-(y*b)<<"   qimat turadi"<<endl;


    // 12  mashq

    cout<<"son kiriting";
    cin>>a;
    cout<<"javob:"<<a*a<<endl;








    // 13  mashq
    cout<<"son kiriting";
    cin>>a;
    cout<<"javob:"<<a*a*a<<endl;

    // 14  mashq
    cout << "sonni kiritng:  ";
    cin >>a;

    int secondstep = a*a;
    int newstep = secondstep * secondstep;

    cout << "sonning 4 darajasi:" << newstep<<endl;



    // 15  mashq
    cout << "sonni kiritng:  ";
    cin >>a;
    int secondstep = a*a;
    int newstep = secondstep * secondstep;
    int sixstep = newstep * secondstep;
     cout << "sonning 6 darajasi:" << sixstep<<endl;








    // 16  mashq
    cout << "son kiritng: ";
    cin >> a;

    int square = a * a;        // 1-е умножение: возведение в квадрат
    int fourth = square * square;        // 2-е умножение: квадрат квадрата (4-я степень)
    int eighth = fourth * fourth;        // 3-е умножение: квадрат четвёртой степени (8-я степень)
    int sixteenth = eighth * eighth;     // 4-е умножение: квадрат восьмой степени (16-я степень)
    int fifteenth = sixteenth / a;  // 5-е действие: делим 16-ю степень на число (получаем 15-ю степень)

    std::cout << a << "sonning" << " 15 darajasi " << fifteenth << "ga teng"<<endl;




    // 17  mashq

    cout << "siz daqiqasiga nechta harf yoza olasiz (lpm)?: ";
    int n;

    cin >>n;

    cout << "2,5 daqiqada" << (n/2.5)/5<< "  soz yoza olarkansiz"<<endl;

    // 18  mashq
    cout << "patrikning   puli:";
    float pulA,pulB;
    cin >> pulA;
    cout << "julianing odamning puli:";
    cin >> pulB;

    cout<< "patrik juliaga " << (pulA-pulB)/2 << "$ berishi lozim" ;




    // 19  mashq
    int sahifa=720,qator=50,belgi=152,bite;
    bite =720*50*152;

    cout << "Kitob " << bite/1000000<< "mb xoitra oladi" << endl;




    // 20  mashq
    string last_name,name,email,tel,adress,poll;
    cout<< "can you tell your last name plz:";
    cin >> last_name;
    cout<< "can you tell your first name plz:";
    cin >> name;
    cout<< "can you tell your email plz:";
    cin >> email;
    cout<< "can you tell your tel plz:";
    cin >> tel;
    cout<< "can you tell your adress plz:";
    cin >> adress;
    cout<< "can you tell your poll plz:";
    cin >> poll;

    cout<< " User last name.............................:" <<  last_name<<endl;
    cout<< " User fist name.............................:" <<  name <<endl;
    cout<< " User E-mail.............................:" <<  email <<endl;
    cout<< " User tel.............................:" <<  tel <<endl;
    cout<< " User adress.............................:" <<  adress<<endl;
    cout<< " User poll.............................:" <<  poll<<endl;





    

    return 0;
}