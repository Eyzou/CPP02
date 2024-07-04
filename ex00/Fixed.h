/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:33:15 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/04 18:34:46 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_H
# define FIXED_H

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
