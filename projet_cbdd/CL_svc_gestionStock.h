#pragma once
#include "CL_CAD.h"
#include "CL_map_TBSTOCK.h"

namespace NS_Svc {

ref class CL_svc_gestionStock
{
private:
	NS_Composants::CL_CAD^ cad;
	NS_Composants::CL_map_TBSTOCK^ article;
	DataSet^ ds;

public:
	CL_svc_gestionStock(void);
	DataSet^ listeArticle(String^);
	int ajouter(String^, String^, String^);
	void modifier(int, String^, String^, String^);
	void supprimer(int);
};

};

