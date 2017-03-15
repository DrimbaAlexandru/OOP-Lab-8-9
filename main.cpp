#include <iostream>
#include "UI/meniu.h"
#include "Teste/tests.h"
#include <assert.h>
#include <algorithm>

using namespace std;

int main()
{
    try
    {
        teste();
        meniu main_meniu;
        main_meniu.afiseaza_meniu();
    }
    catch (int e)
    {
        cout<<"Eroare la testare! (cod "<<e<<")";
        getch();
    }


    return 0;
}
