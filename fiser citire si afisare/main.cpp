#include    <iostream>
#include    <fstream>

using namespace std;

int v[26], i, n;

int main()
{
    ifstream f("date.in");
    ofstream g("date.out");

    f>>n;

    for (i=1; i<=n; i++)
        f>>v[i];

    for(i=1; i<=n; i++)
    {
        g<<"v["<<i<<"]=";
        g<<v[i]<<" ";
    }

    cout<<"Verifica fiserul date.out";

    return 0;
}
