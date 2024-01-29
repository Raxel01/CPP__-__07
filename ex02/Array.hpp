/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:24:07 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/27 18:09:46 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>
class Array{
    private :
        unsigned int ArrLength;
        T Holder[];
    public:
    Array(){};//Creat an empty Array;
    Array(unsigned int n){ArrLength = n;};
    Array(const Array& Obj){(void)Obj;}; //Creat N elem of Ara
    Array& operator=(const Array& Obj){(void)Obj;};
    size_t size () const;
    ~Array(){};      
};

#endif