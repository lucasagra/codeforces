#include <bits/stdc++.h>

using namespace std;

int main() {

  int t; cin >> t;

  while (t--) {
    long int kids; cin >> kids;
    long int p[kids];
    long int aux[kids];
    long int visited[kids];
    long int resp[kids] = {0};

    for (long int i=0; i < kids; i++) 
    {
      cin >> p[i]; aux[i] = p[i]; visited[i] = -1;
    }

    for (long int i = 0; i < kids; i++) 
    {
      if(resp[i] == 0) {
        aux[i] = p[aux[i]-1];
        resp[i]++;
        while (aux[i] != p[i]) 
        {
          aux[i] = p[aux[i] - 1];
          resp[i]++;
        }
        for(long int j = 0; j < resp[i]; j++) 
        {
          aux[i] = p[aux[i] - 1];
          resp[aux[i]-1] = resp[i];
        }
      }
    }

    for (long int i = 0; i < kids-1; i++)
    {
      cout << resp[i] << " ";
    }
    cout << resp[kids-1] << endl;
  }



}