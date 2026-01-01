#pragma once

#include "Form.hpp"
#include "Person.hpp"

class Staff : public Person
{
private:
public:
    using Person::Person;
    void sign(Form *p_form)
    {
        if (p_form)
            p_form->execute();
    }
};
