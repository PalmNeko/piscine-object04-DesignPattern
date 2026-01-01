#include "Secretary.hpp"
#include "CourseFinishedForm.hpp"
#include "NeedCourseCreationForm.hpp"
#include "NeedMoreClassRoomForm.hpp"
#include "SubscriptionToCourseForm.hpp"
#include <map>

Form *Secretary::createForm(FormType p_formType)
{
    using FormFactory = Form *(*)();
    static std::map<FormType, FormFactory> factories = {{
        {FormType::CourseFinished,
         []() -> Form * { return new CourseFinishedForm(); }},
        {FormType::NeedCourseCreation,
         []() -> Form * { return new NeedCourseCreationForm(); }},
        {FormType::NeedMoreClassRoom,
         []() -> Form * { return new NeedMoreClassRoomForm(); }},
        {FormType::SubscriptionToCourse,
         []() -> Form * { return new SubscriptionToCourseForm(); }},
    }};
    try
    {
        FormFactory method = factories[p_formType];
        return method();
    }
    catch (...)
    {
    }
    return 0;
}

void Secretary::archiveForm() {}
