#ifndef ABC
#define ABC

void afficherMenu();
int lireChoix();
int saisirNombreEleve();
void saisirNotes(int eleves,  int tabNote[30][3]);
void afficherNotes(int tabNotes[30][3],int nb_eleves);
float calculerMoyenneEleve(int tabNotes[30][3],int numeroEleve);
#endif