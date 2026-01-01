#pragma once

class Room;

#include <string>

class Person
{
private:
    std::string _name;
    Room *_currentRoom;

public:
    Person(std::string p_name) : _name(p_name) {}
    Room *room() { return (_currentRoom); }
};
