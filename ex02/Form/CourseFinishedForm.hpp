#pragma once

#include "Form.hpp"

class CourseFinishedForm : public Form
{
private:
public:
    CourseFinishedForm() : Form(FormType::CourseFinished) {}
    void execute();
    void beSigned(const Headmaster &p_headmaster);
};
