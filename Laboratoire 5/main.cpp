/**
 * @file main.cpp
 * @author yoqzii
 * @brief Point d'entrée du programme pour tester la classe Temps
 * @version 0.1
 * @date 2026-02-28
 *
 * @copyright Copyright (c) 2026
 *
 */

#include <iostream>
#include <array>
#include "Temps.h"

using namespace std;
constexpr int TAILLE_TABLEAU = 5;

int main()
{
    Temps t0;
    cout << t0.reqTempsFormate() << endl;

    Temps t;
    t.asgHeures(17);
    t.asgMinutes(34);
    t.asgSecondes(25);

    cout << "Résultat d'un ajustement avec des valeurs valides :" << endl
         << "  Heures : " << t.reqHeures() << "  Minutes : " << t.reqMinutes()
         << "  Secondes : " << t.reqSecondes();

    t.asgHeures(234);
    t.asgMinutes(43);
    t.asgSecondes(6373);

    cout << "\n\nRésultat avec des valeurs non valables pour heure et seconde :\n"
         << "Heures : " << t.reqHeures() << "  Minutes : "
         << t.reqMinutes() << "  Secondes : " << t.reqSecondes() << "\n"
         << endl;

    Temps t1(23, 58, 58);
    cout << "\t" << t1.reqTempsFormate() << " pour 23h 58min 58s" << "\n"
         << endl;

    array<Temps, TAILLE_TABLEAU> tableauTemps;
    tableauTemps[1].asgTemps(2, 3, 4);
    tableauTemps[3].asgHeures(0);

    cout << "Tableau d'objets Temps :" << endl;
    for (int i = 0; i < TAILLE_TABLEAU; ++i)
    {
        cout << tableauTemps[i].reqTempsFormate() << endl;
    }

    return 0;
}