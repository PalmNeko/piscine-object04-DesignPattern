#pragma once

#include "Form.hpp"

class NeedMoreClassRoomForm : public Form
{
private:
public:
    NeedMoreClassRoomForm() : Form(FormType::NeedMoreClassRoom) {}
    void execute();
    void beSigned(const Headmaster &p_headmaster);
};
