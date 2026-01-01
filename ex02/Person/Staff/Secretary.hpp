#pragma once

#include "Form.hpp"
#include "FormType.hpp"
#include "Staff.hpp"

class Secretary : public Staff
{
private:
public:
    using Staff::Staff;
    Form *createForm(FormType p_formType);
    void archiveForm();
};
