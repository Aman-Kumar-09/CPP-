#include <iostream>
    using namespace std;

    class Factorial{
    private:
    int number ;
    long factorial = 1;

    public:
    void getValue()
    {
    cout << "Enter the value for finding factorial:" << endl; cin>> number;
        };

        long fact()
        {
        while(number != 1)
        {
        factorial = number * factorial;
        number--;
        }

        return factorial;

        } ;
        };

        int main()
        {
        Factorial fact;
        fact.getValue();

        cout << "The factorial of given number is :" << fact.fact()<< endl;
        
        return 0;
        
    }
