/**
 * @file Temps.h
 * @author yoqzii
 * @brief Déclaration de la classe Temps
 * @version 0.1
 * @date 2026-02-28
 *
 * @copyright Copyright (c) 2026
 *
 */

#ifndef TEMPS_H
#define TEMPS_H

#include <string>

class Temps
{
public:
    Temps();
    Temps(int p_heures, int p_minutes, int p_secondes);

    int reqHeures() const;
    int reqMinutes() const;
    int reqSecondes() const;

    std::string reqTempsFormate() const;

    void asgHeures(int p_heures);
    void asgMinutes(int p_minutes);
    void asgSecondes(int p_secondes);

    void asgTemps(int p_heures, int p_minutes, int p_secondes);

private:
    int m_heures;
    int m_minutes;
    int m_secondes;
};

#endif // TEMPS_H