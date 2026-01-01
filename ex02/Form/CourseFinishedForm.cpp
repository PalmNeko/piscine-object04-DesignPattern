#include "CourseFinishedForm.hpp"

#include <iostream>

void CourseFinishedForm::execute()
{
    if (this->headmaster)
        std::cout << "CourseFinishedForm" << std::endl;
}

void CourseFinishedForm::beSigned(const Headmaster &p_headmaster)
{
    if (this->headmaster)
        return;
    this->headmaster = &p_headmaster;
}
