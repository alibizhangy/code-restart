#include <iostream > 
using namespace std ;

int main () 
{
    int number ; 

    // while (condition)
    // {
    //     code block 
    // }
    // you need this code a counter and condition 
    // if condition is correct go to the block code 
    // if condition is incorrect go to after  the loope 

    int i ; 
    i = 0 ; 
    while (i <= 5 )
    {
        cout << i << endl ;
        // MAKE A COUNTER 
        i++ ; 
    }
    
    // password wile 

    int password ; // this is yout pass 
    int j ; // this is counter 
    //initioalize the j 
    j=1 ;
    // now in put the pass 
    cout << "hi enter your pass below : " << endl; 
    cin >> password ; 
    // now make a logice for checking the passwork 

    while (!(password == 123)) { 
        
        cout << "enter anothe pass ::" << endl; 
        cin >> password ; 
        cout << "your try is : " << j << endl;
        j++;

    }

    cout << "gread your password is correctly ! " << endl; 











    return 0 ; 
}