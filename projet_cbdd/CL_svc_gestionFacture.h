#pragma once
#include "CL_CAD.h"
#include "CL_map_TBCOMMANDE.h"

namespace NS_Svc {

	ref class CL_svc_gestionFacture
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBCOMMANDE^ facture;
		DataSet^ ds;
	public:
		CL_svc_gestionFacture(void);
		DataSet^ listeFacture(String^);
		int ajouter(String^, String^, String^, String^, String^, int, int);
		void modifier(int, String^, String^, String^, String^, String^, int, int);
		void supprimer(int);
	};

}