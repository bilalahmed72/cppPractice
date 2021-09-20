#include <iostream>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

class myClass{

    public:
    int factorial(int n){
        int product = 1;

        if(n==0 || n==1){
            return product;
        }
        else{
            for(int i=1; i<=n; i++){
                product = product*i;
            }
            return product;
        }
    }

    public:
    int factorial2(int n){
        if(n==0 || n==1){
            return 1;
        }
        return factorial2(n-1)*n;
    }

};

int main()
{

/*
    auto start = high_resolution_clock::now();
    myClass myObj;
    cout << myObj.factorial(32);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "\nElapsed Time is: " << duration.count() << " nanoseconds\n" << endl;
    */


    auto start1 = high_resolution_clock::now();
    myClass myObj2;
    cout << myObj2.factorial2(5);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<nanoseconds>(stop1 - start1);
    cout << "\nElapsed Time is: " << duration1.count() << " nanoseconds" << endl;
    return 0;
}
