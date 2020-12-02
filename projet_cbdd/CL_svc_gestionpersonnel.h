#pragma once
#include "CL_CAD.h"
#include "CL_map_TBpersonnel.h"

namespace NS_Svc {

	ref class CL_svc_gestionpersonnel1
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBpersonnel1^ personnel;
		DataSet^ ds;

	public:
		CL_svc_gestionpersonnel1(void);
		DataSet^ listePersonnel(String^);
		int ajouter(String^, String^, String^, String^, int, String^, DateTime^);
		void modifier(int, String^, String^, String^, String^, int, String^, DateTime^, int);
		void supprimer(int);
	};




}

ref class CL_svc_gestionpersonnel
{
};

