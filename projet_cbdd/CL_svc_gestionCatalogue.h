#pragma once
#include "CL_CAD.h"
#include "CL_map_gestionCatalogue.h"
#include "TestCatalogue.h"

namespace NS_Svc {

	ref class CL_svc_gestionCatalogue
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBGESTIONCATALOGUE^ catalogue;
		DataSet^ ds;
		TestCatalogue1^ TestCatalogue2;
	public:
		CL_svc_gestionCatalogue(void);
		DataSet^ listeCatalogue(String^);
		int ajouter(int, int, int, int, String^);
		void modifier(int, int, int, int, int, int);
		void supprimer(int);
	};

}