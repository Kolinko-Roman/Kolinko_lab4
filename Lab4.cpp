#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int difference=arr[9]-arr[0];
    cout<< "Різниця між максимальним та мінімальним елементами масиву дорівнює:" << difference << endl;
    
    return 0;
}
