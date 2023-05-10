#include <iostream>

using namespace std;

int main()
{
    int N;
    cout<<"Marime vector: ";cin>>N;

    int v[26];
    int i;
    for (i = 1; i <= N; i++)
        cin>>v[i];

    int pozitie,valoare;
    cout<<"valoare: ";cin>>valoare;
    cout<<"pozitie: ";cin>>pozitie;

    for (i = N; i >= pozitie; i--)
        v[i + 1] = v[i];

    N = N + 1;
    v[pozitie] = valoare;

    for (i = 1; i <= N; i++)
        cout<<v[i]<<" ";

    return 0;
}
