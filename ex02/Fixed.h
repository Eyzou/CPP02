/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:34:01 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/04 18:34:40 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#ifndef FIXED_H
# define FIXED_H

class Fixed {

public:

    Fixed();
    Fixed(Fixed const &src);
    Fixed(int const value);
    Fixed(float const value);

    ~Fixed();

    Fixed& operator=( Fixed const &rhs);

    bool operator>( Fixed const rhs) const;
    bool operator<( Fixed const rhs)const;
    bool operator>=( Fixed const rhs)const;
    bool operator<=( Fixed const rhs)const;
    bool operator==( Fixed const rhs)const;
    bool operator!=( Fixed const rhs)const;

    float operator+( Fixed const rhs) const;
    float operator-( Fixed const rhs) const;
    float operator*( Fixed const rhs) const;
    float operator/( Fixed const rhs) const;

    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);

    static Fixed& min(Fixed &a, Fixed &b);
    static Fixed const& min(Fixed const &a, Fixed const &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static Fixed const& max(Fixed const &a, Fixed const &b);

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
