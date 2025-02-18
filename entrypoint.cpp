#include "binauth.hpp"

void BinAuthentication::setup( std::string license )
{	
    this->webhook = " ";

    this->api_key = " ";

    this->log_activity( this->webhook );

    this->initalize_auth( this->api_key );

    this->validate_discord( license );

    this->validate_key( license );
}

int main( ) 
{

  std::string license = " ";

  BinAuth.get()->setup( license );

  std::cin.get();
  
  return 0;
}
