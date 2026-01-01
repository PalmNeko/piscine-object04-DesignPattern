#include "CourseFinishedForm.hpp"
#include "Form.hpp"
#include "FormType.hpp"
#include "Headmaster.hpp"
#include "NeedCourseCreationForm.hpp"
#include "NeedMoreClassRoomForm.hpp"
#include "Person.hpp"
#include "Professor.hpp"
#include "Secretary.hpp"
#include "Staff.hpp"
#include "SubscriptionToCourseForm.hpp"
#include <algorithm>

template <typename T> class Defer
{
private:
    T _func;

public:
    Defer(T func) : _func(func) {}
    ~Defer() { _func(); }
};

/** include test */
int main()
{
    Secretary sec("俺が秘書だ");
    Headmaster head("俺が校長だ");

    std::vector<Form *> forms;
    Defer d1(
        [&forms]()
        {
            std::for_each(forms.begin(), forms.end(),
                          [](Form *form) { delete form; });
        });

    forms.push_back(sec.createForm(FormType::CourseFinished));
    forms.push_back(sec.createForm(FormType::NeedCourseCreation));
    forms.push_back(sec.createForm(FormType::NeedMoreClassRoom));
    forms.push_back(sec.createForm(FormType::SubscriptionToCourse));

    head.receiveForm(forms[0]);
    head.receiveForm(forms[1]);
    head.receiveForm(forms[2]);
    head.receiveForm(forms[3]);
    return (0);
}
