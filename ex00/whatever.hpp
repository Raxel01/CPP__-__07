/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:45:41 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/27 17:55:38 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename RandType>
RandType min(RandType x, RandType y)
{
    if (x < y)
        return x;
    return y;
}

template <typename T>
T max(T x, T y)
{
    if (x > y)
        return x;
    return y;
}

template <typename T>
void Add (T a, T b)
{
    std::cout <<"Add : " << a + b << std::endl;
}

template <typename S>
void swap (S &x, S &y)
{
    S Tempo = x;
    x = y;
    y = Tempo;
}

#endif