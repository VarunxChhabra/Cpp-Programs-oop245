/*
   Name - Varun Chhabra
   Email - vchhabra1@myseneca.ca
   StudentID - 170279210
   Date of Completion - 11 November 2022
*/

#ifndef SDDS_Dumper_H
#define SDDS_Dumper_H
#include <iostream>
#include "VehicleBasic.h"

namespace sdds
{
	class Dumper : public VehicleBasic 
	{
		double capacity;
		double currentCargoLoad;
	public:
		Dumper(const char* licPlate, int dYear, int dCapacity, const char* addr);
		bool loaddCargo(double cargo);
		bool unloadCargo();
		std::ostream& write(std::ostream& os);
		std::istream& read(std::istream& in);

		friend std::istream& operator >> (std::istream& in, Dumper& dumper);
		friend std::ostream& operator << (std::ostream& os, Dumper dumper);
	};
}
#endif