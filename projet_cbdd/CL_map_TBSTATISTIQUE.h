#pragma once

using namespace System;
#include "testeStatistique.h"
namespace NS_Composants {

	ref class CL_map_TBSTATISTIQUE
	{
	private:
		testeStatistique1^ test14;
	public:
		CL_map_TBSTATISTIQUE();
		String^ PanierMoyen();
		String^ CAMois();
		String^ ProduitSousSeuil();
		String^ Client();
		String^ PlusVendu();
		String^ MoinsVendu();
		String^ ValeurCommercial();
		String^ ValeurStock();
		String^ SimulerVariations(int, float, float, float, float);

	};

}