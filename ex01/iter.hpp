/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:33:19 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/27 16:19:28 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
class NonValidPointer : public std::exception
{
    public :
        virtual const char* what() const throw();
};

template <typename T>
void    iter(T *address, size_t lenght,void (*f)(T elem))
{
    if (address == NULL || !f)
        throw NonValidPointer();
    for (size_t index = 0; index < lenght ; index++){
        f(address[index]);
    }
}

#endif