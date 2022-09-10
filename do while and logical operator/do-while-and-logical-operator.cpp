#include <iostream>
using namespace std ; 

int main () 
{
//     do 
//     {

//     }while(condition) ;  
// تا زمانی که عبارت شرط ما سصحیح باشد حلقه ادامه پیدامیکند 
//     // logicall operator 
//     i() and || and && 
    int password ; 
    do 
    {
        
        cout << "enter your password ! " << endl; 
        cin >> password ; 

    }while(password != 123);
    cout << "greate ***** your pass is correctly ! " <<endl; 
    // bool i ; 
    // int Password ; 
    // Password = 321 ; 
    // cout << "this is password negative : " << endl ; 
    // cout << !(password) << endl; 
    // i = !(Password) ; 

    // do 
    // {
    //     cin >> Password ; 
    // }while(321 == !(password) );
    // cout << "your pass is real ! " ;
    
    // this is do while loop 
    do {
        cout << "enter the password : " ; 
        cin >> password ; 

    }while (321 != password);
    cout << "the password is real $$$$$$$$$$$$$$" << endl ;
    cout << "welcome to the programming $$$$$$$$$$$$" << endl;  
    cout << "last line " ; 
    return 0 ; 
}