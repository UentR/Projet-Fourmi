#include <iostream>
#include <array>
#include <stdexcept>

using namespace std;

const int TAILLEGRILLE = 100; 

class Coord{
    private:
        int ind_col;
        int ind_lig;

    public:
        Coord(int a, int b);
        Coord();
    
        bool setCoord(int a, int b);
        int getLigne() const;
        int getColonne() const;

        vector<Coord> voisin(int Rayon) const;
};

ostream &operator<<(ostream &out, Coord c);

bool operator==(Coord c1, Coord c2);

bool operator!=(Coord c1, Coord c2);

struct EnsembleCoord{
    private:
        vector<Coord>(taille) Grille;
        int position(Coord objet) const;
    public:
        EnsembleCoord(vector<Coord>);
        bool contient(Coord objet) const;
        void ajoute(Coord objet);
        void supprime(Coord objet);
        bool estVide() const;
        int taille() const;
        Coord ieme(int n) const;
};

ostream &operator<<(ostream &out, EnsembleCoord);
