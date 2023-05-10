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

    for(int i = 0; i <= N - 1; i++)
    {
        for(int j = i + 1; j <= N; j++)
        {
            if(v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }


    for (i = 1; i <= N; i++)
        cout<<v[i]<<" ";

    return 0;
}
