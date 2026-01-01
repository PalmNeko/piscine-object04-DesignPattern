#pragma once

#include "Form.hpp"

class NeedCourseCreationForm : public Form
{
private:
public:
    NeedCourseCreationForm() : Form(FormType::NeedCourseCreation) {}
    void execute();
    void beSigned(const Headmaster &p_headmaster);
};
