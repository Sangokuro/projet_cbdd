#pragma once
#include <string>
#include "CL_CAD.h"
#include "CL_map_TBCOMMANDE.h"


namespace NS_Svc {

	ref class CL_svc_gestionCommande
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBCOMMANDE^ commande;
		DataSet^ ds;
	public:
		CL_svc_gestionCommande(void);
		DataSet^ listeCommande(String^);
		int ajouter(DateTime^, DateTime^, DateTime^, String^, String^, int, String^);
		void modifier(int, DateTime^, DateTime^, DateTime^, String^, int, String^);
		void supprimer(int);
	};

}