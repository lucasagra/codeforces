#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void test (int a, int b){
    int aux[100] = {0};
    aux[0] = 1;

    int i = 0;
    cout << i << " TRUE --" << endl;
    i = 1;
    while(i < 100) {
        if(i >= a && aux[i-a] == 1) {
            aux[i] = 1;
        } else if (i >= b && aux[i - b] == 1) {
            aux[i] = 1;
        }
        
        if(aux[i]) {
            cout << i << " TRUE --" << endl;
        } else {
            cout << i << " false" << endl;
        }

        i++;
    }
}
int main () {

    int t; cin >> t;

    while(t--) {
        int a, b; cin >> a >> b;
        

        // test(a,b);
        if(a == 1 || b == 1) {
            cout << "finite" << endl;
            continue;
        } else if (a == b) {
            cout << "infinite" << endl;
            continue;
        }

        if(b > a) {
            int aux;
            aux = a;
            a = b;
            b = aux;
        }

        int divisor = gcd(a,b);
        if(divisor == 1) {
            cout << "finite" << endl;
        } else {
            cout << "infinite" << endl;
        }

    }

    return 0;
}