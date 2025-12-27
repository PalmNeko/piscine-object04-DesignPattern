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
    Person() = default;
    Person(std::string p_name) : _name(p_name) {}
    Room *room() { return (_currentRoom); }
};
