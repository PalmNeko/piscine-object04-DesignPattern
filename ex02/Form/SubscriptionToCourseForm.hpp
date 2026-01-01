#pragma once

#include "Form.hpp"

class SubscriptionToCourseForm : public Form
{
private:
public:
    SubscriptionToCourseForm() : Form(FormType::SubscriptionToCourse) {}
    void execute();
    void beSigned(const Headmaster &p_headmaster);
};
