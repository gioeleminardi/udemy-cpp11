//
// Created by gminardi on 08/02/18.
//

#ifndef COPYCTOR_INTEGER_H
#define COPYCTOR_INTEGER_H


class Integer {
private:
    int *m_pInt;
public:
    Integer();

    Integer(int value);

    // Copy Constructor
    Integer(const Integer &obj);

    int GetValue() const;

    void SetValue(int value);

    virtual ~Integer();

};


#endif //COPYCTOR_INTEGER_H
