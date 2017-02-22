﻿#pragma once

namespace Program
{
	class Goods
	{
	private:
		char* nameGood; //Наименование товара
		float priceHryvnia;
		char* manufacturer;
		float const dollar = 27.40;
	public:
		Goods();
		Goods(char* inameGood, float ipriceHryvnia, char* imanufacturer);
		void	setNameGood(char*);
		char*	getNameGood();
		void	setManufactured(char*);
		char*	getManufactured();
		void	setPriceHryvnia(float);
		char*	info();
		float	getPriceHryvnia();
		// цена в долларах
		float	setpriceDollar(float priceHryvnia);
		// Увеличит цену для Toyota
		float	increasePriceDollar();
		~Goods();
	};

}

