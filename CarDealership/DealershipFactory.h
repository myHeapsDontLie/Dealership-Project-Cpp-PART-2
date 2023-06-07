#pragma once 

#include "VehicleDealership.h"
#include "Vehicle.h"
#include "General.h"
#include "Salesman.h"

class DealershipFactory
{
public:
	static void initDealership(VehicleDealership* VehicleDealership);
	static Vehicle* createVehicle(int type);
	static Salesman* createSalesman();
};