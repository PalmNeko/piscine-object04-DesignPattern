#pragma once

#include "FormType.hpp"

class Headmaster;

class Form
{
private:
    FormType _formType;

protected:
    const Headmaster *headmaster;

public:
    Form(FormType p_formType) : headmaster(0) { _formType = p_formType; }
    virtual ~Form() {}

    virtual void execute() = 0;
    virtual void beSigned(const Headmaster &p_headmaster) = 0;
};
