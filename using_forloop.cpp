#include <iostream>
using namespace std;
int main()
{
    int num, i, j, count;
    cout << "Enter any number: ";
    cin >> num;
    
    for (i = 1; i <= num; i++){
        count = 0;
        if (num % i == 0){
            for (j = 1; j <= i; j++){
                if (i % j == 0){
                    count++;
                }
            }
        }
            if (count == 2){
                cout << i << " is a prime factor of " << num << endl;
            }
        }
    return 0;
}
