#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double dist (int x1, int y1, int x2, int y2) {
    return sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
}

int main()
{
    int n; cin >> n;
    int x[n], y[n];

    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
    
    double total = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) 
            total += dist(x[i], y[i], x[j], y[j]);
 
    printf("%.10lf", total/n);
    return 0;
}