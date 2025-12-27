#pragma once

#include "Professor.hpp"
#include "Student.hpp"
#include <string>
#include <vector>

class Professor;
class Student;

class Course
{
private:
    std::string _name;
    Professor *_responsable;
    std::vector<Student *> _students;
    int _numberOfClassToGraduate;
    int _maximumNumberOfStudent;

public:
    Course(std::string p_name)
    {
        (void)p_name;
        (void)_responsable;
        (void)_name;
        (void)_students;
        (void)_numberOfClassToGraduate;
        (void)_maximumNumberOfStudent;
    };
    void assign(Professor *p_professor);
    void subscribe(Student *p_student);
};
