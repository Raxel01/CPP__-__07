/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:33:22 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/26 20:46:02 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

const char* NonValidPointer::what() const throw()
{
    return ("Exception throwed : [-> NULL POINTER Detected <-]");
}