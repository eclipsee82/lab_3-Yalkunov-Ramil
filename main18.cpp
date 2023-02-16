#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n,i;
    double x, k, result1, result2, result3;
    cout << "Enter x ";
    cin >> x;
    cout << "Enter n ";
    cin >> n;

    i = 1;

    result1 = 1;
    result2 = 1;
    result3 = 1;

    do
    {
        k = (8 + sqrt(fabs(x) + pow(x, 3))) / i;
        result1 = result1 * k;
        i++;
    } while (i<=n);


    for(i=1; i<=n; i++){
        k = (8 + sqrt(fabs(x) + pow(x, 3))) / i;
        result2 = result2 * k;
    }

    i=1;
    while (i<=n)
    {
        k = (8 + sqrt(fabs(x) + pow(x, 3))) / i;
        result3 = result3 * k;
        i++;
    }

    cout << "result1 = " << result1 << endl;
    cout << "result2 = " << result2 << endl;
    cout << "result3 = " << result3;

    return 0;
}