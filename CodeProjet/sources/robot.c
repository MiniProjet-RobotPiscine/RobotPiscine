/* 
 * File:   robot.h
 * Author: Eric
 *
 * Created on 24 juillet 2019
 * Rôle : Code des fonctions du robot
 * Historique : 
 *  19/11/2019 Marie-Pierre Pinaud Ajout Commentaires des fonctions + Rôle du fichier
 *  19/11/2019 Marie-Pierre Pinaud modification du paramètre parcoursTermine
 *  16/12/2022  ajout de void en paramètre des fonctions sans paramètre
 *  16/12/2022  code de attenteImmersion. Ajout de code et de commentaires dans
 *  explorerPiscine
 */
#include "commandesMoway.h"
#include "robot.h"



/*****************************************************************************
*Nom : initialiserRobot                                
* Rôle : initialise le robot (sa distance parcourue et le type de trajet) 
*        et configure les moteurs et les capteurs du moway                             
*Paramètres d'E/S :   robot qu'il faut initialiser                                   
******************************************************************************/
void initialiserRobot(TRobot* robot)
{
    configurerMoway();
    attendre(1000);
    robot->distanceParcourue = 0;
}


/*****************************************************************************
*Nom : chargeInsuffisante                                
* Rôle : vérifie s'il y a assez de batterie pour faire l'exploration                        
*Paramètres d'Entrée :   robot dont on vérifie la charge de batterie     
*Valeur de retour :   1 si batterie insuffisante, 0 s'il y a assez de batterie                               
******************************************************************************/
unsigned char chargeInsuffisante(TRobot* robot) {
    // A MODIFIER
    return 1;
}


/*****************************************************************************
*Nom : attendreImmersion                                
* Rôle : attend que le robot soit à l'horizontal. Si le temps d'attente 
* d'immersion est dépassé, termine sur état irrécupérable.                                                               
******************************************************************************/
void attendreImmersion(void) {
    unsigned char tempsAttente = 0; // secondes
    while(robotRetourne() == 1 ) {
        attendre(1000);
        tempsAttente += 1;
        if(tempsAttente == TEMPS_ATTENTE_IMMERSION) {
            terminerSurEtatIrrecuperable();
        }
    }
    
}


/*****************************************************************************
*Nom : explorerPiscine                                
* Rôle : gère l'exploration de la piscine                                 
*Paramètres d'E/S :   robot utilisé pour l'exploration                                    
******************************************************************************/
void explorerPiscine(TRobot* robot) {
   
    while(1) {
        robot->distanceParcourue += (unsigned int)calculerDistanceParcourue();
        if(robotRetourne() == 1) {
            attendreImmersion();
        }
        if(parcoursTermine(robot) == 1) {
            terminerParcours();
        }
        
        // si la charge est insuffisante alors terminer en indiquant que 
        // la batterie est dechargée
        
        
        // Traiter le cas où un bord est atteint 
     
    }
}


/*****************************************************************************
*Nom : terminerParcours                                
* Rôle : arrêter le robot et le faire clignoter en vert                                                                  
******************************************************************************/
void terminerParcours(void) {
    
}


/*****************************************************************************
*Nom : parcoursTermine                                
* Rôle : vérifie si le robot a parcouru la distance voulue                            
*Paramètres d'Entrée :   robot utilisé pourl'exploration     
*Valeur de retour :   1 si la distance a été parcourue, 0 sinon                             
******************************************************************************/
unsigned char parcoursTermine(TRobot * robot) {
    // A MODIFIER
        return 0;
    
}

/*****************************************************************************
*Nom :robotRetourne                                
* Rôle : vérifie si le robot est toujours à l(horizontale                            
*Valeur de retour :   1 si le robot est retourné, 0 sinon                             
******************************************************************************/

unsigned char robotRetourne(void) {
    
    
}


/*****************************************************************************
*Nom : bordAtteint                                
* Rôle : vérifie si un bord de la piscine est atteint  
*Valeur de retour :   1 si un bord est atteint, 0 sinon                               
******************************************************************************/
unsigned char bordAtteint(void) {
    
        return 0;
   
}


/*****************************************************************************
*Nom : terminerSurBatterieDechargee                                
* Rôle : arrêter le robot et le faire clignoter en rouge lent                                                                   
******************************************************************************/
void terminerSurBatterieDechargee(void) {
    
}


/*****************************************************************************
*Nom : terminerSurEtatIrrecuperable                                
* Rôle : arrêter le robot et le faire clignoter en rouge rapide                                                                   
******************************************************************************/
void terminerSurEtatIrrecuperable(void) {
    
}






