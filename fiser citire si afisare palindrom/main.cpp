#include    <iostream>
#include    <fstream>

using namespace std;

int n, ogl, cn;

int main()
{
    ifstream f("date.in");
    ofstream g("date.out");

    f >> n;
    cn=n;

    while (n != 0)
	{
		ogl = ogl * 10 + n % 10;
		n = n / 10;
	}

    if(cn==ogl)
        g<<"Numarul este palindrom";
    else
        g<<"Numarul nu este palindrom";

    cout<<"Verifica fiserul date.out";

    return 0;
}
