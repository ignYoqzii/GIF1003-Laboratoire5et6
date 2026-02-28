/**
 * @file Temps.cpp
 * @author yoqzii
 * @brief Implémentation de la classe Temps
 * @version 0.1
 * @date 2026-02-28
 *
 * @copyright Copyright (c) 2026
 *
 */

#include "Temps.h"
#include <time.h>

using std::string;
using std::to_string;

Temps::Temps()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    m_heures = ltm->tm_hour;
    m_minutes = ltm->tm_min;
    m_secondes = ltm->tm_sec;
}

Temps::Temps(const int p_heures, const int p_minutes, const int p_secondes) : m_heures(p_heures), m_minutes(p_minutes), m_secondes(p_secondes)
{
}

int Temps::reqHeures() const
{
    return m_heures;
}

int Temps::reqMinutes() const
{
    return m_minutes;
}

int Temps::reqSecondes() const
{
    return m_secondes;
}

string Temps::reqTempsFormate() const
{
    string heures = (m_heures < 10) ? "0" + to_string(m_heures) : to_string(m_heures);
    string minutes = (m_minutes < 10) ? "0" + to_string(m_minutes) : to_string(m_minutes);
    string secondes = (m_secondes < 10) ? "0" + to_string(m_secondes) : to_string(m_secondes);

    return heures + ":" + minutes + ":" + secondes;
}

void Temps::asgHeures(const int p_heures)
{
    m_heures = (p_heures >= 0 && p_heures < 24) ? p_heures : 0;
}

void Temps::asgMinutes(const int p_minutes)
{
    m_minutes = (p_minutes >= 0 && p_minutes < 60) ? p_minutes : 0;
}

void Temps::asgSecondes(const int p_secondes)
{
    m_secondes = (p_secondes >= 0 && p_secondes < 60) ? p_secondes : 0;
}

void Temps::asgTemps(const int p_heures, const int p_minutes, const int p_secondes)
{
    asgHeures(p_heures);
    asgMinutes(p_minutes);
    asgSecondes(p_secondes);
}