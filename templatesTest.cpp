#include <iostream>

template<class T>
class Generic
{
    private :
        T elem;
    public :
        Generic() {};
        T getElem()const;
         void    SetElem(T elemASSIGN) {
            elem = elemASSIGN;
        }
};

template <class T>
T Generic<T>::getElem() const{
    return (elem);
}

class clolos
{
    public :
        static const int a = 19;
};

std::ostream & operator<<(std::ostream &out, const clolos &Up)
{
   std::cout << "A : " << Up.a;
    return out;
}

int main ()
{
    clolos obj;
    Generic<clolos> Initialise;
    Initialise.SetElem(obj);
    std::cout << Initialise.getElem()<< std::endl;
    return (0);
}