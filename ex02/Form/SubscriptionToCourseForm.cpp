#include "SubscriptionToCourseForm.hpp"

#include <iostream>

void SubscriptionToCourseForm::execute()
{
    if (this->headmaster)
        std::cout << "SubscriptionToCourseForm" << std::endl;
}

void SubscriptionToCourseForm::beSigned(const Headmaster &p_headmaster)
{
    if (this->headmaster)
        return;
    this->headmaster = &p_headmaster;
}
