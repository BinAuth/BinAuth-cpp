#ifndef BINAUTH_HPP
#define BINAUTH_HPP

#include <Windows.h>
#include <iostream>
#include <zmq.hpp>
#include <nlohmann/json.hpp>
#include <iostream>
#include <memory>
#include <winsock.h>

using json = nlohmann::json;

class BinAuthentication {
private:
    std::string webhook;
    std::string api_key;

public:
    struct results {
        std::string expire;
    };

    results result;

    void setup( std::string license );

    void log_activity( std::string webhook );

    void initalize_auth( const std::string& api_key );

    void validate_discord( std::string license );

    void validate_key( std::string license );

};

extern std::unique_ptr<BinAuthentication> BinAuth;

#endif
