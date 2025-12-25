#pragma once

class Room;

#include "Room.hpp"
#include <string>

class Person
{
private:
    std::string _name;
    Room *_currentRoom;

public:
    Person(std::string p_name);
    Room *room() { return (_currentRoom); }
};
