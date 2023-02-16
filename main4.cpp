#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, k;
    double x, i, result1, result2, result3;
    cout << "Enter x ";
    cin >> x;
    cout << "Enter n ";
    cin >> n;

    k = 1;
    result1 = 1;
    result2 = 1;
    result3 = 1;

    do{
        i = k/(k+1) - cos(fabs(x));
        result1 = result1 * i;
        k++;
    } while (k<=n);


    for(k=1; k<=n; k++){
        i = k/(k+1) - cos(fabs(x));
        result2 = result2 * i;
    }

    k=1;
    while (k<=n)
    {
        i = k/(k+1) - cos(fabs(x));
        result3 = result3 * i;
        k++;
    }

    cout << "result1 = " << result1 << endl;
    cout << "result2 = " << result2 << endl;
    cout << "result3 = " << result3;

    return 0;
}

