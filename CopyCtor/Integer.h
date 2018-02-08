//
// Created by gminardi on 08/02/18.
//

#ifndef COPYCTOR_INTEGER_H
#define COPYCTOR_INTEGER_H


#include <iostream>

class Integer {
private:
    int *m_pInt;
public:
    Integer();

    Integer(int value);

    //Copy Constructor
    Integer(const Integer &obj);

    //Move Constructor
    Integer(Integer &&obj);

    int GetValue() const;

    void SetValue(int value);

    ~Integer();

    Integer operator+(const Integer &a) const;

    //Pre increment operator
    Integer &operator++();

    //Post increment operator
    Integer operator++(int);

    //Comparison operator
    bool operator==(const Integer &obj) const;

    //Assign operator
    Integer &operator=(const Integer &obj);

    //Assign operator Move Semantics
    Integer &operator=(Integer &&obj);

    void operator()();

    friend std::istream &operator>>(std::istream &in, Integer &a);

    };


#endif //COPYCTOR_INTEGER_H
