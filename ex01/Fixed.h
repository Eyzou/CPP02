//
// Created by eyza on 02/07/24.
//

#include <iostream>

#ifndef FIXED_H
#define FIXED_H


class Fixed {

public:

    Fixed();
    Fixed(Fixed const &src);
    ~Fixed();

    Fixed& operator=( Fixed const &rhs);

    int getRawBits( void ) const;
    void setRawBits( int const raw );


private:

    int m_fixedValue;
    static const int m_fractionalBits = 8;


};

#endif //FIXED_H
