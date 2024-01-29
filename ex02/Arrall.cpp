#include <iostream>

class IndexBadState : public std::exception
{
	public :
	    virtual const char* what() const throw();
};

const char* IndexBadState::what() const throw()
{
std::cout << " 	                :::!~!!!!!:.			 " << std::endl;					
std::cout << "                   .xUHWH!! !!?M88WHX:.		 " << std::endl;						
std::cout << "                 .X*#M@$!!  !X!M$$$$$$WWx:.	 " << std::endl;							
std::cout << "                :!!!!!!?H! :!$!$$$$$$$$$$8X:	 " << std::endl;							
std::cout << "               !!~  ~:~!! :~!$!#$$$$$$$$$$8X:	 " << std::endl;							
std::cout << "              :!~::!H!<   ~.U$X!?R$$$$$$$$MM!	 " << std::endl;							
std::cout << "              ~!~!!!!~~ .:XW$$$U!!?$$$$$$RMM!	 " << std::endl;							
std::cout << "                !:~~~ .:!M\"T#$$$$WX??#MRRMMM!	 " << std::endl;							
std::cout << "                ~?WuxiW*`   `\"#$$$$8!!!!!!!!!	 " << std::endl;							
std::cout << "              :X- M$$$$       `\"T#$T~!8$WUXU~	 " << std::endl;							
std::cout << "             :%`  ~#$$$m:        ~!~ ?$$$$$$	 " << std::endl;							
std::cout << "           :!`.-   ~T$$$$8xx.  .xWW- ~\"\"##*\"	 " << std::endl;							
std::cout << " .....   -~~:<` !    ~?T#$$@@W@*?$$      /`	 " << std::endl;							
std::cout << " W$@@M!!! .!~~ !!     .:XUW$W!~ `\"~:    :									 " << std::endl;						
std::cout << " #\"~~`.:x%`!!  !H:   !WM$$$$Ti.: .!WUn+!`									 " << std::endl;						
std::cout << " :::~:!!`:X~ .: ?H.!u \"$$$B$$$!W:U!T$$M~	|-------------------------------|" << std::endl;						
std::cout << " .~~   :X@!.-~   ?@WTWo(\"*$$$W$TH$! `	        |  The index is Out of Bounds   |" << std::endl;					
std::cout << " Wi.~!X$?!-~    : ?$$$B$Wu(\"**$RM!		|-------------------------------|" << std::endl;					
std::cout << " $R@i.~~ !     :   ~$$$$$B$$en:``				 " << std::endl;				
std::cout << " ?MXT@Wx.~    :     ~\"##*$$$$M~				 " << std::endl;				
	return ("");

};

template <class T>
class Array
{
	private :
		T			 *contenaire;
		unsigned int Counter;
	public :
		Array();
		Array(unsigned int n);
		Array(const Array& Origine);
		Array& operator=(const Array& Origine);
		~Array();
		unsigned int getCounter() const;
		T* getContenaire() const;
		T& operator[](unsigned int index);
		size_t size() const;
};

template <class T>
unsigned int Array<T>::getCounter() const{
	return (this->Counter);
}

template <class T>
T* Array<T>::getContenaire() const{
	return (this->contenaire);
}

template <class T>
Array<T>& Array<T>::operator=(const Array& Origine){
	if (!Origine.contenaire){
		this->Counter = Origine.Counter;
		if (this->contenaire)
			delete [] this->contenaire;
		this->contenaire = Origine.contenaire;
		return (*this);
	}
	this->Counter = Origine.Counter;
	if (this->contenaire)
		delete [] this->contenaire;
	this->contenaire = new T [Origine.Counter];
	int subelem = -1;
	while (++subelem < Origine.Counter){
		this->contenaire[subelem] = Origine.contenaire[subelem];
	}
	return (*this);
}

template <class T>
Array<T>::Array(const Array& Origine)
{
	if (Origine.contenaire == NULL){
		this->contenaire = NULL;
		this->Counter = Origine.Counter;
		return;
	}
	this->Counter = Origine.Counter;
	this->contenaire = new T[Origine.Counter];
	int subelem = -1;
	while (++subelem < Origine.Counter){
		this->contenaire[subelem] = Origine.contenaire[subelem];
	}
};

template <class T>
Array<T>::Array() : contenaire (NULL),Counter(0){};

template <class T>
Array<T>::Array(unsigned int n)
{
	this->Counter = n;
	this->contenaire = new T[n];
};

template <class T>
Array<T>::~Array(){
	delete [] contenaire;
};

template <class T>
T& Array<T>::operator[] (unsigned int index)
{
		if (index >= Counter)
			throw IndexBadState();
	return (contenaire[index]);
};

template <class T>
size_t Array<T>::size() const{
	return (Counter);
};

int main ()
{
	Array<int> obj(10);
	Array<int> Empty;
	std::cout << Empty.getCounter()    << std::endl;
	std::cout << Empty.getContenaire() << std::endl;
	try{
		for(int subelem = 0; subelem < obj.getCounter(); subelem++){
			obj[subelem] = 2 + subelem; 
		}

		std::cout << "Obj Elems :"<< std::endl;
		for(int subelem = 0; subelem < obj.getCounter(); subelem++){
			std::cout << obj[subelem] << " - "; 
		}
		std::cout << "" <<std::endl;
		
		{ //Begin Scope
			Array <int> CONSTRUCTED(obj);
			Array <int> ASSIGNED        ;
			ASSIGNED = obj;
				for(int subelem = 0; subelem < ASSIGNED.getCounter(); subelem++){
			std::cout << "Assigned " << subelem << ": " << ASSIGNED[subelem] << "| " << std::endl;}
			
			for(int subelem = 0; subelem < CONSTRUCTED.getCounter(); subelem++){
			CONSTRUCTED[subelem] = 1000 + subelem; }

			for(int subelem = 0; subelem < CONSTRUCTED.getCounter(); subelem++){
			std::cout << "CONSTRUCTED " << subelem << ": " << CONSTRUCTED[subelem] << "| " << std::endl;}


			for(int subelem = 0; subelem < ASSIGNED.getCounter(); subelem++){
			ASSIGNED[subelem] = 100 + subelem; 
		}
		std::cout <<"----------------------------------" << std::endl;
		for(int subelem = 0; subelem < ASSIGNED.getCounter(); subelem++){
			std::cout << "Assigned " << subelem << ": " << ASSIGNED[subelem] << "| " << std::endl;; 
		}
		}//End Scoooope
		std::cout << "Obj Elems :"<< std::endl;
		for(int subelem = 0; subelem < obj.getCounter(); subelem++){
			std::cout << obj[subelem] << " - "; 
		}
		std::cout << " "<< std::endl;
		std::cout << " Parent Obj Size " << obj.size() << std::endl;
		std::cout << "============================================================"<< std::endl;
		std::cout << " Eleeem 100 Is   " << std::endl <<obj[100] << std::endl << "" <<std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	return (0);
}