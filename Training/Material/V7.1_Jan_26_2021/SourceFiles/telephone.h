#ifndef INTRO_CLASSES_H
#define INTRO_CLASSES_H

#include <string>

class Telephone
{
  public:
    Telephone( const std::string& phoneNumber );

    void SetPhoneNumber( const std::string& phoneNumber );

    std::string GetPhoneNumber();

  public:
    std::string m_number;
};

class GsmPhone : public Telephone
{
  public:
    GsmPhone( const std::string& phoneNumber,
              const std::string& simICCID );

    std::string GetSimICCID();

  private:
    std::string m_simICCID;
};

#endif
