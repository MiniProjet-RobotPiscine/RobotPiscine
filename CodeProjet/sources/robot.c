/* 
 * File:   robot.h
 * Author: Eric
 *
 * Created on 24 juillet 2019
 * R�le : Code des fonctions du robot
 * Historique : 
 *  19/11/2019 Marie-Pierre Pinaud Ajout Commentaires des fonctions + R�le du fichier
 *  19/11/2019 Marie-Pierre Pinaud modification du param�tre parcoursTermine
 */

#include "robot.h"
#include "commandesMoway.h"


/*****************************************************************************
*Nom : initialiserRobot                                
* R�le : initialise le robot (sa distance parcourue et le type de trajet) 
*        et configure les moteurs et les capteurs du moway                             
*Param�tres d'E/S :   robot qu'il faut initialiser                                   
******************************************************************************/
void initialiserRobot(TRobot* robot)
{
    configurerMoway();
    attendre(1000);
    robot->distanceParcourue = 0;
}


/*****************************************************************************
*Nom : chargeInsuffisante                                
* R�le : v�rifie s'il y a assez de batterie pour faire l'exploration                        
*Param�tres d'Entr�e :   robot dont on v�rifie la charge de batterie     
*Valeur de retour :   1 si batterie insuffisante, 0 s'il y a assez de batterie                               
******************************************************************************/
unsigned char chargeInsuffisante(TRobot* robot) {
    
    return 1;
}


/*****************************************************************************
*Nom : attendreImmersion                                
* R�le : attend que le robot soit � l'horizontal. Si le temps d'attente 
* d'immersion est d�pass�, termine sur �tat irr�cup�rable.                                                               
******************************************************************************/
void attendreImmersion() {
    
    
}


/*****************************************************************************
*Nom : explorerPiscine                                
* R�le : g�re l'exploration de la piscine                                 
*Param�tres d'E/S :   robot utilis� pour l'exploration                                    
******************************************************************************/
void explorerPiscine(TRobot* robot) {
   
    while(1) {
        
        if(robotRetourne() == 1) {
            attendreImmersion();
        }
        if(parcoursTermine(robot) == 1) {
            terminerParcours();
        }
        
    }
}


/*****************************************************************************
*Nom : terminerParcours                                
* R�le : arr�ter le robot et le faire clignoter en vert                                                                  
******************************************************************************/
void terminerParcours() {
    
}


/*****************************************************************************
*Nom : parcoursTermine                                
* R�le : v�rifie si le robot a parcouru la distance voulue                            
*Param�tres d'Entr�e :   robot utilis� pourl'exploration     
*Valeur de retour :   1 si la distance a �t� parcourue, 0 sinon                             
******************************************************************************/
unsigned char parcoursTermine(TRobot * robot) {
   
        return 0;
    
}

/*****************************************************************************
*Nom :robotRetourne                                
* R�le : v�rifie si le robot est toujours � l(horizontale                            
*Valeur de retour :   1 si le robot est retourn�, 0 sinon                             
******************************************************************************/

unsigned char robotRetourne() {
    
        return 0;
    
}


/*****************************************************************************
*Nom : bordAtteint                                
* R�le : v�rifie si un bord de la piscine est atteint  
*Valeur de retour :   1 si un bord est atteint, 0 sinon                               
******************************************************************************/
unsigned char bordAtteint() {
    
        return 0;
   
}


/*****************************************************************************
*Nom : terminerSurBatterieDechargee                                
* R�le : arr�ter le robot et le faire clignoter en rouge lent                                                                   
******************************************************************************/
void terminerSurBatterieDechargee() {
    
}


/*****************************************************************************
*Nom : terminerSurEtatIrrecuperable                                
* R�le : arr�ter le robot et le faire clignoter en rouge rapide                                                                   
******************************************************************************/
void terminerSurEtatIrrecuperable() {
    
}






