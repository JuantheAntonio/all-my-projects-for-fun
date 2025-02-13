/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

bool palindrome(int x){
    if (x<0){
        return false;
    }
    int O = x, R = 0; //basta original is x and r is 0;
    while (x > 0)
    {
        int digit = x % 10;
        R = R * 10 + digit;
        x /= 10;
    }
    return O == R;
}


int main()
{
    int num;
    std::cout<<"test ";
    std::cin>>num;
    
    if (palindrome(num))
    {
        std::cout<<"Yes it palindrome ";
    }
    else{
        std::cout<<"nah lol ";
    }
    return 0;
}