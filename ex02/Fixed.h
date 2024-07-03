//
// Created by eyza on 02/07/24.
//

#include <iostream>
#include <cmath>

#ifndef FIXED_H
#define FIXED_H


class Fixed {

public:

    Fixed();
    Fixed(Fixed const &src);
    Fixed(int const value);
    Fixed(float const value);

    ~Fixed();

    Fixed& operator=( Fixed const &rhs);

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

private:

    int m_fixedValue;
    static const int m_fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& os, Fixed const &rhs);

#endif //FIXED_H
