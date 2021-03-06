#include "Setting.h"
#include "Graphic.h"

bool Setting::m_bNewLevel = true;
int Setting::flag = 0;
int Setting::m_nLife = 5;

int Setting::m_nGameLevel = 0;
int Setting::m_nTankLevel = 1;

int Setting::m_nTankNum = 5;

int Setting::m_nSumScore = 0;

int Setting::m_nTankScore = 5;

int Setting::m_nTankSum = 0;

void Setting::NewGameLevel()
{
    m_nGameLevel++;
    m_nTankNum = 5;
    m_nTankScore += 5;
}

void Setting::TankDamaged()
{
    m_nTankNum--;
    m_nSumScore += m_nTankScore;

    m_nTankLevel = m_nSumScore / 150 + 1;

    m_nTankSum++;

    if (m_nTankNum == 0 && m_nGameLevel == 3)
    {
        flag = 1;
    }

    if (m_nTankNum == 0)
    {
        m_bNewLevel = true;
    }
}

void Setting::Die()
{
    m_nLife -= 1;
}
void Setting::SetLife(int n)
{
    m_nLife = n;
}

int Setting::Getflag()
{
    return flag;
}