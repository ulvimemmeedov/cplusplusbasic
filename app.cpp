/*
    Author: ulvimemmeedov
    c++ basic level 

*/

#include <iostream>

using namespace std;

//void hello(); // funksiya prototipi
/* void factorialFuncksiya(int reqem)
{
    int faktorial = 1;

for (int i = 2; i <= reqem; i++)
    {
        faktorial *=i;
    }
    cout <<"faktorial : " <<faktorial <<endl;
}
*/
/* int toplama (int a, int b, int c)
{
    return a + b + c;
}
*/
/* void func (int *ptr) {
    *ptr = 20;  // sonraki deyer
    cout << "funksiyan icindeki deyer : " << *ptr <<endl; // deyiskenin deyerini deyisir
}
*/
/* void deyis(int a[] ,int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] <<endl;
    }
};
*/
/*

void printArray(const int *ptr1,const int *ptr2) // pointerin isare etdiyi yer deyisir deyeri deyismir
{       
    for (;ptr1 != ptr2;ptr1++)
    {
        cout << "Element: " << *ptr1 <<endl;
          
    }
    
}   
*/
/*
// structer
struct Employe
{
   int id;
   string name;
   string departament;
};
*/
/*
//struct
void showPointer(Employee* employee)
{
    // obyekt deyeri deyisir ramda eyni yeri tutur

    employee -> id = 13;
    cout << "point id : " << employee -> id << endl;
    cout << "point name : " << employee -> name << endl;
    cout << "point departament : " << employee -> departament << endl;
}
void showEmployee(Employee employee)
{
     // obyekt kopyalanir elave yer tutur
    employee.id = 14;
    cout << "id : " << employee.id << endl;
    cout << "name : " << employee.name << endl;
    cout << "departament : " << employee.departament << endl;
}
*/
/*
// ic ice structur
struct Address
{
    string cityname;
    int NO;
};


struct Employee
{
    int id;
    string name;
    string departament;
    Address adress;
};
// ic ice structur pointer
struct Employee
{
    int id;
    string name;
    string departament;
    Address* address;
};
*/
int main()
{

    /*
    // hello world
    cout << "hello world";

    // data tipleri
   
    int a = 32;
    float b = 3.52;
    double c = 4.546;
    char d = 'A';
    bool e = true;

    cout << "a deyeri : " << a << endl;
    cout << "b deyeri : " << b << endl;
    cout << "c deyeri : " << c << endl;
    cout << "d deyeri : " << d << endl;
    cout << "e deyeri : " << e << endl;

    // toplama
   
    int a,b,c,toplam = 0;
    a = 4;
    b = 3;
    c = 5;
    cem = a +b + c;

    cout<< "cem : " <<cem<<endl;

    // operatorlar
    
    
    int reqem1 = 10;
    int reqem2 = 4;

    cout << "reqem1 + reqem2 = " <<reqem1 + reqem2 <<endl;
    cout << "reqem1 - reqem2 = " <<reqem1 - reqem2 <<endl;
    cout << "reqem1 * reqem2 = " <<reqem1 * reqem2 <<endl;
    cout << "reqem1 / reqem2 = " <<reqem1 / reqem2 <<endl;
    cout << "ondali reqem1 / reqem2 = " <<float(reqem1) / reqem2 <<endl;
   
    int a = 5;

    cout << "a deyeri :" <<a<<endl;
     a=a+2;

    cout<<a;
    
     a++;
    
    a--;
     a++;

    
    cout<<a;

    // input alma cin ile
  
    int x;
    int y;
    int z;

    cout << "reqenkeri yazin: ";
    cin >>x >> y >> z;

    cout << "cemi : " << x+y+z <<endl;
    
    // stringler
   
    
    string str1 = "stringdi";
    string str2 = "string2";

    string str3 = str1 + str2; 

    cout << str1 << endl;
    cout << str2 << endl;

    cout << str3 << endl;
    
    // if else
   
    string kod = "123456m";
    
    string input;
    cout << "sifreni daxil edin : ";
    cin >> input;

    if (kod == input)
    {
        cout << "sifre duzgundur";
    }
    else 
    {
        cout << "sifre yanlisdir yeniden daxil edin";
    }
 
    // if, else if, else
    // kalkulyator
    
    int a, b;
    string proses;

    cout << "kallkulyator" << endl;

    cout << "1 toplama" << endl;
    cout << "2 cixma" << endl;
    cout << "3 vurma" << endl;
    cout << "4 bolme" << endl;

    cout << "emeli secin : ";
    cin >> proses;

    if (proses == "1")
    {
        cout << "toplama" << endl;
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;

        cout << "cem: " << a + b << endl;
    }
    else if (proses == "2")
    {
        cout << "cixma" << endl;
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;

        cout << "ferq: " << a - b << endl;
    }
    else if (proses == "3")
    {
        cout << "vurma" << endl;
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;

        cout << "vurma: " << a * b << endl;
    }
    else if (proses == "4")
    {
        cout << "bolme" << endl;
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;

        cout << "bolme: " << a / b << endl;
    }
    else
    {
        cout << proses << " emeller icinde yoxdur ";
    }
   
    // operatorlar
   
    string sys_username = "ulvimemmeedov";
    string sys_password = "123456";
    
    string username,password;

    cout << "username daxil edin : ";
    
    cin >> username;
    
    cout << "sifreni daxil edin : ";
    
    cin >> password;

    if (sys_username == username && sys_password == password)
    {
       cout << "ugurla giris etdiniz";
    }
    else if (sys_username != username && sys_password == password) {
        cout << "username sehvdir";
    }
        else if (sys_username == username && sys_password != password) {
        cout << "password sehvdir";
    }
    else
    {
        cout << "username ve parol sehvdir";
    }
    
    // while
    
    
    int i = 1;
    int j = 1;

    while (i<10 && j < 5)
    {
        cout << i <<endl;
        i++;
        j++;
    }  
    
    // do while
    
    string pass ="123456";
    string input;

    do {
        cout <<"sifreni daxil edin : " ;
        cin >> input;

        if (input != pass)
        {
            cout<< "sifre yanlisdir" <<endl;
        }
    
    } while (input != pass);
    
    cout << "sifre duzgundur" <<endl;
  
    // for
   
    for (int i = 1; i < 10; i++)
  {
     cout << "i : " << i <<endl;
  };
  
   
    //    faktorial
 
        int reqem;
    cout << "reqem : ";
    cin >> reqem;

    int faktorial = 1;
    
    for (int i = 1; i <= reqem; i++)
    {
        faktorial *= i;
    }
    
     cout<<"faktorial : " << faktorial <<endl;
    
   
    // break
  
    int i = 0;

    while (i<10)
    {
        if (i == 5)
        {
            break;
        }
        cout <<"i : " << i <<endl;
        i++;
    }

    // continue
    
     for (int i = 0; i < 10; i++)
     {
         if (i == 3 || i == 5)
         {
            continue;
         }
         cout <<"i : " <<i <<endl;
         
     }
    
   
    string sys_username = "ulvimemmeedov";
    string sys_password = "123456";

    string username;
    string password;

    while (true)
    {
        cout << "username : ";
        cin >> username;
        cout << "password : ";
        cin >> password;

        if (sys_username == username && sys_password == password)
        {
            cout << "ugurla giris etdiniz " <<username;
            break;
        }
        else if (sys_username != username && sys_password == password)
        {
            cout << "username sehvdir" <<endl;
            
        }
        else if (sys_username == username && sys_password != password)
        {
            cout << "password sehvdir" <<endl;
        }
        else
        {
            cout << "username ve parol sehvdir" <<endl;
        }
    }
   
    // arraylar

    int array[3];

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;

    cout << "array 0 indeks : " << array[0] <<endl;
    cout << "array 1 indeks : " << array[1] <<endl;
    cout << "array 2 indeks : " << array[2] <<endl;
    
    int array[] = {10, 20, 30, 40};

    double array2[] = {1.2, 3.4, 4.3, 5.6};
        for (int i = 0; i < 4;i++)
    {   
        cout << i << " ci index : " <<array[i] << endl;
    }
    string array[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cout  <<i << " ci array : " << array[i] << endl;
    }
    

    int matris[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8,9}};

    cout << "arr " << matris[0][2] <<endl;
    cout << "arr " << matris[1][2] <<endl;
    cout << "arr " << matris[2][2] <<endl;

       int matris[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8,9}};

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
             
             cout << matris[i][j] << " ";

            }
            cout <<endl;
        }

        int matrix[3][3];

        cout << "deyerleri girin : " <<endl;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> matrix[i][j];
            }
            
        }
        
        cout << "deyerler: " <<endl;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout <<endl;
        }            
    
    // switch case
 
    int proses;

    cout << "prosesler 1,2 " <<endl;
    
    cout << "prosesi daxil edin : "
    
    cin >> proses;
    
    switch(proses) {
        case 1:
    // code block
    
    break; 
    
        case 2:
     // code block

    break;
    
        default:
        cout << "duzgun prosesi daxil edin : " <<endl;
   
    // funksiyalar

    hello();
    int reqemesas;
    
    cout << "reqemi yazin : ";
    
    cin >> reqemesas;

    factorialFuncksiya(reqemesas);
    

    int a = toplama(1,2,3);

    cout <<"a: " <<a <<endl;
   
    // pointerler
    
    int a = 5;

    int *ptr = &a;

    *ptr = 6;

    cout<<"a deyeri : " << a <<endl;  

    cout<<"a adresi : " << &a <<endl;  

    cout<<"ptr adresi : " << ptr <<endl;  

    cout<<"a ptr deyeri adresi : " << *ptr <<endl;  


    
    int a = 5; // ilkin deyer
    
    cout << "a : " << a <<endl;
    
    func(&a);
    
    cout << "a : " << a <<endl;  // sonraki deyer
   
    int arr[] = {1,2,3,4};

    cout << arr <<endl;// ramdaki adress

    cout << arr + 1 <<endl; // ramdaki adres plus 4 bit
 
    cout << arr + 2 <<endl;   // ramdaki adress plus 8 bit
    
    int *ptr = arr;

    cout << ptr <<endl;
    
    cout << ptr + 1 <<endl; // ramdaki adres plus 4 bit

    int arr[] = {1, 2, 3, 4};

    int *ptr = &arr[1];

    cout << ptr;
    arr[6] = 55;
    cout << arr[6] << endl;
    
    int a[] = {1,2,3,4,5,6};

    deyis(a,6);


    // pointer deyeri
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
   
    printArray(arr+2,arr+7);

    // structer
    Employe employe1;

    employe1.id = 12;
    employe1.name = "ulvi memmedov";
    employe1.departament = "IT";
    
    // cout << employe1.name <<endl;
    Employe* ptd = &employe1;

    cout << &ptd->departament;

    // structur point ve referans methoda parametr yollama
    showEmployee(employee);

    showPointer(&employee);

     // ic ice structu
    Employee employee = {1, "ulvi memmedov", "IT",{"baki",5}};

    cout << "id : " << employee.id <<endl;
    cout << "name : " << employee.name <<endl;
    cout << "departament : " << employee.departament <<endl;
    cout << "cityname : " << employee.adress.cityname <<endl;
    cout << "NO : " << employee.adress.NO <<endl;
    
    // ic ice structur pointer
    Employee employee;

    employee.id = 1;

    employee.name = "ulvi memmedov";
    
    employee.departament = "IT";

    Address adress = {"Baki",3};

    employee.address = &adress;

    Employee* ptr = &employee;

    cout << ptr->address->cityname <<endl;
    cout << ptr->address->NO <<endl;

    // sizeof
    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(float) << endl;
    */

    return 0;
}

// void hello ()
// {
//     cout << "hello"<<endl;
// }