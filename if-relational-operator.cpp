#include <iostream>
using namespace std ; 

int main () 
{   
    // config code : 

    // if (condition) write the code line and after line ? 

    // if(condition) 
    //     code line

    double score ; 
    cout << "enter your score : " << endl; 
    cin >> score ; 

    if (score < 12 ) 
        {
            cout << "Fail ! " <<endl ;
        }else if (score >= 12 ) {
            cout << "**you are pass in this scope** " << endl; 
        }

    // relationall opetator 
    int x = 5 ; 
    int y = 10 ; 

    bool result ; 

    result = x > y ; 
    cout << result << endl ;

    result = x < y ; 
    cout << result << endl; 

    result =  x == y ; 
    cout << result << endl; 

    result = x != y ; 
    cout << result << endl ;

    result = x <= y ; 
    cout << result << endl ;

    result = x >= y ; 
    cout << result << endl ;
    
    
    return 0 ; 
}