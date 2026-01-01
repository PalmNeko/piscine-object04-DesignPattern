#include "Headmaster.hpp"

void Headmaster::receiveForm(Form *p_form)
{
    sign(p_form);
    p_form->beSigned(*this);
    p_form->execute();
}
