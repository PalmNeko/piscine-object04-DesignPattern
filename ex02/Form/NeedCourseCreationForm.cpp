#include "NeedCourseCreationForm.hpp"

#include <iostream>

void NeedCourseCreationForm::execute()
{
    if (this->headmaster)
        std::cout << "NeedCourseCreationForm" << std::endl;
}

void NeedCourseCreationForm::beSigned(const Headmaster &p_headmaster)
{
    if (this->headmaster)
        return;
    this->headmaster = &p_headmaster;
}
