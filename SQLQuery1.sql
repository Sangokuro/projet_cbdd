/*------------------------------------------------------------
* Script SQLSERVER
------------------------------------------------------------*/


/*------------------------------------------------------------
-- Table: Client
------------------------------------------------------------*/
CREATE TABLE Client(
id_client INT IDENTITY (1,1) NOT NULL ,
nom_client VARCHAR (100) NOT NULL ,
prenom_client VARCHAR (100) NOT NULL ,
date_naissance DATETIME NOT NULL ,
date_premier_achat DATETIME NOT NULL ,
CONSTRAINT Client_PK PRIMARY KEY (id_client)
);

/*------------------------------------------------------------
-- Table: Article
------------------------------------------------------------*/
CREATE TABLE Article(
id_article INT IDENTITY (1,1) NOT NULL ,
nom_article VARCHAR (50) NOT NULL ,
nature_article VARCHAR (50) NOT NULL ,
couleur_article CHAR (5) NOT NULL ,
CONSTRAINT Article_PK PRIMARY KEY (id_article)
);

/*------------------------------------------------------------
-- Table: Catalogue
------------------------------------------------------------*/
CREATE TABLE Catalogue(
id_catalogue INT IDENTITY (1,1) NOT NULL ,
prix_articleht FLOAT NOT NULL ,
quantite_stock INT NOT NULL ,
seuil_rea INT NOT NULL ,
taux_tva FLOAT NOT NULL ,
id_article INT NOT NULL ,
CONSTRAINT Catalogue_PK PRIMARY KEY (id_catalogue)
);

/*------------------------------------------------------------
-- Table: Adresse_client
------------------------------------------------------------*/
CREATE TABLE Adresse_client(
id_adresse INT IDENTITY (1,1) NOT NULL ,
adresse_client VARCHAR (100) NOT NULL ,
code_postal INT NOT NULL ,
ville CHAR (50) NOT NULL ,
CONSTRAINT Adresse_client_PK PRIMARY KEY (id_adresse)
);

/*------------------------------------------------------------
-- Table: Adresse_livraison
------------------------------------------------------------*/
CREATE TABLE Adresse_livraison(
id_adresse INT IDENTITY (1,1) NOT NULL ,
adresse_livraison VARCHAR (100) NOT NULL ,
code_postal INT NOT NULL ,
ville CHAR (50) NOT NULL ,
CONSTRAINT Adresse_livraison_PK PRIMARY KEY (id_adresse)
);

/*------------------------------------------------------------
-- Table: Adresse_facturation
------------------------------------------------------------*/
CREATE TABLE Adresse_facturation(
id_adresse INT IDENTITY (1,1) NOT NULL ,
adresse_facturation VARCHAR (100) NOT NULL ,
code_postal INT NOT NULL ,
ville CHAR (50) NOT NULL ,
CONSTRAINT Adresse_facturation_PK PRIMARY KEY (id_adresse)
);

/*------------------------------------------------------------
-- Table: habite
------------------------------------------------------------*/
CREATE TABLE habite(
id_adresse INT NOT NULL ,
id_client INT NOT NULL ,
CONSTRAINT habite_PK PRIMARY KEY (id_adresse,id_client)
);

/*------------------------------------------------------------
-- Table: possède
------------------------------------------------------------*/
CREATE TABLE possede(
id_client INT NOT NULL ,
id_adresse INT NOT NULL ,
CONSTRAINT possede_PK PRIMARY KEY (id_client,id_adresse)
);

/*------------------------------------------------------------
-- Table: demande
------------------------------------------------------------*/
CREATE TABLE demande(
id_client INT NOT NULL ,
id_adresse INT NOT NULL ,
CONSTRAINT demande_PK PRIMARY KEY (id_client,id_adresse)
);

/*------------------------------------------------------------
-- Table: Commande
------------------------------------------------------------*/
CREATE TABLE Commande(
id_commande INT IDENTITY (1,1) NOT NULL ,
date_commande DATETIME NOT NULL ,
date_livraison DATETIME NOT NULL ,
date_paiement DATETIME NOT NULL ,
moyen_paiement VARCHAR (15) NOT NULL ,
reference_commande VARCHAR (50) NOT NULL ,
montant_total_ht FLOAT NOT NULL ,
montant_total_tva FLOAT NOT NULL ,
montant_total_ttc FLOAT NOT NULL ,
prix_special FLOAT NOT NULL ,
quantite_article INT NOT NULL ,
id_client INT NOT NULL ,
id_facture INT NOT NULL ,
CONSTRAINT Commande_PK PRIMARY KEY (id_commande)
);

/*------------------------------------------------------------
-- Table: Personnel
------------------------------------------------------------*/
CREATE TABLE Personnel(
id_personnel INT IDENTITY (1,1) NOT NULL ,
nom_personnel VARCHAR (50) NOT NULL ,
prenom_personnel VARCHAR (50) NOT NULL ,
nom_superieur VARCHAR (50) NOT NULL ,
adresse_personnel VARCHAR (100) NOT NULL ,
code_postal INT NOT NULL ,
ville CHAR (50) NOT NULL ,
date_embauche DATETIME NOT NULL ,
id_personnel_dirige INT ,
CONSTRAINT Personnel_PK PRIMARY KEY (id_personnel)
);

/*------------------------------------------------------------
-- Table: Facture
------------------------------------------------------------*/
CREATE TABLE Facture(
id_facture INT IDENTITY (1,1) NOT NULL ,
nom_societe VARCHAR (25) NOT NULL ,
adresse_societe VARCHAR (100) NOT NULL ,
code_postal INT NOT NULL ,
ville CHAR (50) NOT NULL ,
numero_service_client FLOAT NOT NULL ,
id_commande INT NOT NULL ,
id_client INT NOT NULL ,
CONSTRAINT Facture_PK PRIMARY KEY (id_facture)
);

/*------------------------------------------------------------
-- Table: contient
------------------------------------------------------------*/
CREATE TABLE contient(
id_article INT NOT NULL ,
id_commande INT NOT NULL ,
CONSTRAINT contient_PK PRIMARY KEY (id_article,id_commande)
);


ALTER TABLE Catalogue
ADD CONSTRAINT Catalogue_Article0_FK
FOREIGN KEY (id_article)
REFERENCES Article(id_article);

ALTER TABLE habite
ADD CONSTRAINT habite_Adresse_client0_FK
FOREIGN KEY (id_adresse)
REFERENCES Adresse_client(id_adresse);

ALTER TABLE habite
ADD CONSTRAINT habite_Client1_FK
FOREIGN KEY (id_client)
REFERENCES Client(id_client);

ALTER TABLE possede
ADD CONSTRAINT possede_Client0_FK
FOREIGN KEY (id_client)
REFERENCES Client(id_client);

ALTER TABLE possede
ADD CONSTRAINT possede_Adresse_livraison1_FK
FOREIGN KEY (id_adresse)
REFERENCES Adresse_livraison(id_adresse);

ALTER TABLE demande
ADD CONSTRAINT demande_Client0_FK
FOREIGN KEY (id_client)
REFERENCES Client(id_client);

ALTER TABLE demande
ADD CONSTRAINT demande_Adresse_facturation1_FK
FOREIGN KEY (id_adresse)
REFERENCES Adresse_facturation(id_adresse);

ALTER TABLE Commande
ADD CONSTRAINT Commande_Client0_FK
FOREIGN KEY (id_client)
REFERENCES Client(id_client);

ALTER TABLE Commande
ADD CONSTRAINT Commande_Facture1_FK
FOREIGN KEY (id_facture)
REFERENCES Facture(id_facture);

ALTER TABLE Commande
ADD CONSTRAINT Commande_Facture0_AK
UNIQUE (id_facture);

ALTER TABLE Personnel
ADD CONSTRAINT Personnel_Personnel0_FK
FOREIGN KEY (id_personnel_dirige)
REFERENCES Personnel(id_personnel);

ALTER TABLE Facture
ADD CONSTRAINT Facture_Commande0_FK
FOREIGN KEY (id_commande)
REFERENCES Commande(id_commande);

ALTER TABLE Facture
ADD CONSTRAINT Facture_Client1_FK
FOREIGN KEY (id_client)
REFERENCES Client(id_client);

ALTER TABLE Facture
ADD CONSTRAINT Facture_Commande0_AK
UNIQUE (id_commande);

ALTER TABLE contient
ADD CONSTRAINT contient_Article0_FK
FOREIGN KEY (id_article)
REFERENCES Article(id_article);

ALTER TABLE contient
ADD CONSTRAINT contient_Commande1_FK
FOREIGN KEY (id_commande)
REFERENCES Commande(id_commande);