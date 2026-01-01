#include "NeedMoreClassRoomForm.hpp"

#include <iostream>

void NeedMoreClassRoomForm::execute()
{
    if (this->headmaster)
        std::cout << "NeedMoreClassRoomForm" << std::endl;
}

void NeedMoreClassRoomForm::beSigned(const Headmaster &p_headmaster)
{
    if (this->headmaster)
        return;
    this->headmaster = &p_headmaster;
}
