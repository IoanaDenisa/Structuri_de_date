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

    int pozitie;
    cout<<"pozitie: ";cin>>pozitie;

    for (i = pozitie; i <= N; i++)
        v[i] = v[i + 1];

    N = N - 1;

    for (i = 1; i <= N; i++)
        cout<<v[i]<<" ";

    return 0;
}
