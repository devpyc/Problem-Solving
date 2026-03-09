#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3;
    int arr[81] = {};
    cin >> s1 >> s2 >> s3;
    int k = 0;
    int max = 0;
    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int h = 1; h <= s3; h++) {
                arr[i + j + h]++;      
                if (arr[i + j + h] > max) {    
                    max = arr[i + j + h];         
                }
            }
        }
    }
    for (int i = 3; i <= s1+s2+s3; i++) {
        if (max == arr[i]) {           
            cout << i << endl;
            break;
        }
    }
}