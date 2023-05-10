#include <iostream>

using namespace std;

struct Nod
{
    int numar;
    Nod* urmator;
};

Nod* cap = NULL;

void afisareLista(Nod* cap)
{
    while (cap != NULL)
    {
        cout << cap->numar << "\n";
        cap = cap->urmator;
    }
}

void inserareInceput(Nod* &cap, int valoare)
{
    Nod *elem = new Nod;
    elem->numar = valoare;
    elem->urmator = cap;
    cap = elem;
}

void inserareFinal(Nod* &cap, int valoare)
{

    Nod *elem_final = new Nod;
    elem_final->numar = valoare;
    elem_final->urmator = NULL;
    if (cap == NULL)
        cap = elem_final;
    else
    {

        Nod *nod_curent = cap;
        while (nod_curent->urmator != NULL)
            nod_curent = nod_curent->urmator;

        nod_curent->urmator = elem_final;
    }
}

void stergereElement(Nod* predecesor)
{
    Nod* victima = predecesor->urmator;

    predecesor->urmator = predecesor->urmator->urmator;

    delete victima;
}

Nod* cautarePozitie(Nod* cap, int pozitie)
{
    int i = 0;

    while (cap != NULL && i < pozitie)
    {
        cap = cap->urmator;
        i++;
    }

    if (i == pozitie)
        return cap;
    else
        return NULL;
}

void stergereElementPozitie(Nod* &cap, int pozitie)
{
        Nod* predecesor = cautarePozitie(cap, pozitie-1);
        stergereElement(predecesor);
}

int main()
{
    inserareInceput(cap, 78);
    inserareInceput(cap, 5);
    inserareInceput(cap, 24);
    inserareInceput(cap, 15);

    stergereElementPozitie(cap, 1);

    inserareFinal(cap, 10);

    afisareLista(cap);
    return 0;
}
