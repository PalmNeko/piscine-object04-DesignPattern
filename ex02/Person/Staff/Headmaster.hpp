#pragma once

#include "Form.hpp"
#include "Staff.hpp"

#include <vector>

class Headmaster : public Staff
{
private:
    std::vector<Form *> _formToValidate;

public:
    using Staff::Staff;
    void receiveForm(Form *p_form);
};
