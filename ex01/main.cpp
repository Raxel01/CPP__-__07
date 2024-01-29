/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:32:45 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/27 15:25:50 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void    print(T elem)
{
    std::cout << elem << std::endl;
}

void f(int i) {
     i++;
    print(i);
}

template <typename A>
void TO_MAJ(A member)
{
    for (size_t i = 0; i < member.length(); i++){
        
        if (member[i]>= 97 && member[i] <= 122)
            member[i] -= 32;
        std::cout << member[i];
        }
        std::cout << "" << std::endl;
};

class vehicleUpdater
{
    private :
        unsigned int Maxspeed;
        unsigned int Version;
    public :
        static int Updater;
        vehicleUpdater(){ Updater++;Maxspeed = (120 + (Updater * 50)); Version = (1 + Updater);};
        int getUpdater() const {return (Updater);};
        int getMaxspeed() const {return (Maxspeed);};
        int getVersion() const {return (Version);};
};

std::ostream & operator << (std::ostream &out, const vehicleUpdater &Up)
{
    std::cout << "Vehicle Version : " << Up.getVersion() << "." << vehicleUpdater::Updater <<std::endl;
    std::cout << "  Speed MaxX    : " << Up.getMaxspeed() << "km/h"<<std::endl;
    return out;
}

int vehicleUpdater::Updater = 0;

int main ()
{
    vehicleUpdater obj[4];
    int arr[] = {5, 3, 7, 1};
    std::string arrc[] = {"abdo", "lali", "LOL"};
    
    try{
        ::iter(obj, 4, print);
        std::cout << "=================================="<< std::endl;
        ::iter(arrc, 3, TO_MAJ);
        std::cout << "=================================="<< std::endl;
        ::iter(arr, 4, f);
        std::cout << "=================================="<< std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    return 0;
}