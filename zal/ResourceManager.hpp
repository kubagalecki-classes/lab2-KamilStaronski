#pragma once

#include "Resource.hpp"
    
class ResourceManager
{
	private:
		Resource *res;

	public:
		ResourceManager()//konstruktor domyslny
		{ 
			res = new Resource;
		}

        ~ResourceManager()//destruktor
		{ 
			detele res;
		}

        ResourceManager(const ResourceManager& rm)//konstruktor kopiujacy 
		{ 
			res = new Resource(*(rm.res));
		} 

		ResourceManager(ResourceManager&& rm)//konstruktor przenoszacy
		{
            res = rm.res;
            rm.res = nullptr;
		}

		ResourceManager& operator=(const ResourceManager& rm) //kopiujsacy operator przypisania
		{
        if (rm(!= nullptr)) {
			delete rm;
        }
        if (&rm == this) {
        }
            res = new Resource(*(rm.res));
            return *this;
		}

		ResourceManager& operator=(ResourceManager&& rm)  //przenoszacy operator przypisania
		{ 
		if (rm(!= nullptr)) {
			delete rm;
		}
            res=rm.res;
            rm.res=nullptrL;
            return *this;
		}

		double get() { return r->get(); } // sprawdzić
};
