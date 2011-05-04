#ifndef EU3WORLD_H_
#define EU3WORLD_H_


#include "EU3Country.h"


class EU3World {
	public:
		void						init(Object* obj);
		vector<EU3Country>	getCountries();
		EU3Country*				getCountry(string);
		EU3Province*			getProvince(int provNum);
		void						removeCountry(string tag);
	private:
		vector<EU3Province>	provinces;
		vector<EU3Country>	countries;
};


#endif // EU3WORLD_H_
