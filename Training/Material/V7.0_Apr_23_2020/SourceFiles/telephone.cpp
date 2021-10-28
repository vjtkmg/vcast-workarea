#include "Telephone.h"


Telephone::Telephone( const std::string& phoneNumber )
  : m_number( phoneNumber )
{
}

void Telephone::SetPhoneNumber( const std::string& phoneNumber )
{
  m_number = phoneNumber;
}

std::string Telephone::GetPhoneNumber()
{
  return m_number;
}

GsmPhone::GsmPhone( const std::string& phoneNumber,
                    const std::string& simICCID )
  : Telephone( phoneNumber ),
    m_simICCID( simICCID )
{
}

std::string GsmPhone::GetSimICCID()
{
  return m_simICCID;
}
