#ifndef AIC20_CLIENT_CPP_INIT_MESSAGE_H
#define AIC20_CLIENT_CPP_INIT_MESSAGE_H

#include <Model/Map.h>

#include "Message.h"
#include "ParseError.h"
#include <vector>
#include <Model/Game.h>

class InitMessage final : public Message {
public:

    explicit InitMessage(Json::Value&& root);

    explicit InitMessage(std::string&& json_form);

    void update_game(Game* game);
};

#endif // AIC20_CLIENT_CPP_INIT_MESSAGE_H