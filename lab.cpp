#include <iostream>
using namespace std;



// Approach    : Simply return num + 1 to get the next integer.
// Objective   : To return the successor (next integer) of a given number.
// Input       : int num – an integer whose successor is to be found.
// Output      : Returns an integer value which is num + 1.
// Side effect : None.
int succ(int num)
{
    return num + 1;
}



// Approach    : 
//      - Start with pred_candidate = 0.
//      - Increment pred_candidate using succ() until succ(pred_candidate) == num.
//      - When found, return pred_candidate as the predecessor.

// Objective   : To find the predecessor of a given number using recursion and succ().
// Input       : 
//      - int num – the number whose predecessor is to be found.
//      - int pred_candidate (default = 0) – helper value used in recursion.
// Output      : Returns an integer value which is num - 1.
// Side effect : none

int pred(int num, int pred_candidate = 0)
{
    if (succ(pred_candidate) == num)
    {
        return pred_candidate;
    }
    else
    {
        return pred(num, succ(pred_candidate));
    }
}





// Approach    : 
//      - If b is 0, return a (base case).
//      - Otherwise, increment a using succ(), decrement b using pred(), and recurse.
//      - This simulates addition via repeated incrementation.

// Objective   : To compute the sum of two integers using recursion with succ() and pred() only.
// Input       : 
//      - int a – first integer.
//      - int b – second integer to add to a.
// Output      : Returns an integer value which is  sum  of a + b.
// Side effect : None 
int add(int a ,int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return add(succ(a), pred(b));
    } 
}




// Approach    : 
//      - If b is 0, return 0 (base case).
//      - Otherwise, recursively add a to the result of multiply(a, b - 1).
//      - Uses add() to perform multiplication via repeated addition.

// Objective   : To compute the product of two integers using recursive addition only.
// Input       : 
//      - int a – the first integer .
//      - int b – the second integer .
// Output      : Returns an integer value which is  sum  of a * b.
// Side effect : None. 

int multiply(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return add(a, multiply(a, pred(b)));
    }
}



// Approach    : 
//      - If b is 0, return 0 (base case).
//      - Otherwise, recursively add a to the result of multiply(a, b - 1).
//      - Uses add() to perform multiplication via repeated addition.

// Objective   : To compute the product of two integers using recursive addition only.
// Input       : 
//      - int a – the first integer .
//      - int b – the second integer .
// Output      : Returns an integer value which is  sum  of a * b.
// Side effect : None.

int substract(int a,int b){
    if (a<=b){
        return 0;
    }
    else{
        return 1+ substract(pred(a),b);
    }
}

 

//main function

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;

    cout << "Successor of " << number << " is : " << succ(number) << endl;  
    cout << "Predecessor of " << number << " is : " << pred(number) << endl<<endl<<endl;  

    int num1,num2;
    cout<<"Enter two numbers : "<<endl;
    cout<<"Num1 : ";
    cin>> num1;
    cout<<"Num2 : ";
    cin>> num2;
    cout<<"Addition of both number is : "<<add(num1,num2)<<endl;
    cout<<"Multiplication of both number is : "<<multiply(num1,num2)<<endl;
    cout<<"Difference of both number is : "<<substract(num1,num2)<<endl;


}
