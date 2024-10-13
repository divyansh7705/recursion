#include <iostream>
using namespace std;

int main() {
    string a,b,result;
    int n,i;
    a = "sit";
    b = "pune";
    result = a + b;
    n = result.length();
    for (i = n - 1;i >= 0; i--);{
    cout<<result[i]<<n;
    }
    return 0;
}
