/* 
 * File:   robot.h
 * Author: Eric
 *
 * Created on 24 juillet 2019
 * R�le : d�claration du robot et de ses fonctions
 * Historique : 
 *  19/11/2019 Marie-Pierre Pinaud Ajout Commentaires des fonctions + R�le du fichier
 *  19/11/2019 Marie-Pierre Pinaud Ajout de T au d�but des noms des types
 *  19/11/2019 Marie-Pierre Pinaud modification du param�tre parcoursTermine
 *  16/12/2022  ajout de void en param�tre des fonctions sans param�tre
 */
#ifndef FONCTIONS_H
#define	FONCTIONS_H

#ifdef	__cplusplus
extern "C" {
#endif

#define SEUIL_BATTERIE 20 // pourcentage de batterie minimum pour faire l'exploration
#define DISTANCE_A_PARCOURIR 40000 // millimetres, par exemple 10 x longueur + 10 x largeur piscine
#define SEUIL_ACCELERATION_VERTICALE 20 // pourcentage
#define TEMPS_ATTENTE_IMMERSION 5 // secondes

    



/*****************************************************************************
*Type : TRobot                               
* R�le : Contient les informations d'un robot
******************************************************************************/
typedef struct {
    unsigned char niveauBatterie;
    unsigned int distanceParcourue; // mm
    
} TRobot;
 


/*****************************************************************************
*Nom : initialiserRobot                                
* R�le : initialise le robot (sa distance parcourue et le type de trajet) 
*        et configure les moteurs et les capteurs du moway                             
*Param�tres d'E/S :   robot qu'il faut initialiser                                   
******************************************************************************/
void initialiserRobot(TRobot* robot);


/*****************************************************************************
*Nom : chargeInsuffisante                                
* R�le : v�rifie s'il y a assez de batterie pour faire l'exploration                        
*Param�tres d'Entr�e :   robot dont on v�rifie la charge de batterie     
*Valeur de retour :   1 si batterie insuffisante, 0 s'il y a assez de batterie                               
******************************************************************************/
unsigned char chargeInsuffisante(TRobot* robot);


/*****************************************************************************
*Nom : attendreImmersion                                
* R�le : attend que le robot soit � l'horizontal. Si le temps d'attente 
* d'immersion est d�pass�, termine sur �tat irr�cup�rable.                                                               
******************************************************************************/
void attendreImmersion(void);


/*****************************************************************************
*Nom : explorerPiscine                                
* R�le : g�re l'exploration de la piscine                                 
*Param�tres d'E/S :   robot utilis� pour l'exploration                                    
******************************************************************************/
void explorerPiscine(TRobot* robot);


/*****************************************************************************
*Nom : terminerSurBatterieDechargee                                
* R�le : arr�ter le robot et le faire clignoter en rouge lent                                                                   
******************************************************************************/
void terminerSurBatterieDechargee(void);

/*****************************************************************************
*Nom : terminerSurEtatIrrecuperable                                
* R�le : arr�ter le robot et le faire clignoter en rouge rapide                                                                   
******************************************************************************/
void terminerSurEtatIrrecuperable(void);

/*****************************************************************************
*Nom : terminerParcours                                
* R�le : arr�ter le robot et le faire clignoter en vert                                                                  
******************************************************************************/
void terminerParcours(void);


/*****************************************************************************
*Nom : bordAtteint                                
* R�le : v�rifie si un bord de la piscine est atteint  
*Valeur de retour :   1 si un bord est atteint, 0 sinon                               
******************************************************************************/
unsigned char bordAtteint(void);

/*****************************************************************************
*Nom : parcoursTermine                                
* R�le : v�rifie si le robot a parcouru la distance voulue                            
*Param�tres d'Entr�e :   robot utilis� pourl'exploration     
*Valeur de retour :   1 si la distance a �t� parcourue, 0 sinon                             
******************************************************************************/
unsigned char parcoursTermine(TRobot* robot);



/*****************************************************************************
*Nom :robotRetourne                                
* R�le : v�rifie si le robot est toujours � l(horizontale                            
*Valeur de retour :   1 si le robot est retourn�, 0 sinon                             
******************************************************************************/
unsigned char robotRetourne(void);





#ifdef	__cplusplus
}
#endif

#endif	/* FONCTIONS_H */

