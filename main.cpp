#include <iostream>
#include <vector>
#include <cmath>
#include "Forme.h"
#include "Rectangle.h"
#include "Carre.h"
#include "Cercle.h"
#include "Triangle.h"
#include "Polygone.h"
#include "Point.h"

int main() {
    // Variables pour les données utilisateur
    double x1, y1, x2, y2, x3, y3, rayon;
    int choix;
    std::vector<Point> sommets;  // Déclarer ici pour qu'elle soit accessible partout

    std::cout << "Choisissez une forme :\n";
    std::cout << "1. Rectangle\n";
    std::cout << "2. Carre\n";
    std::cout << "3. Cercle\n";
    std::cout << "4. Triangle\n";
    std::cout << "5. Polygone\n";
    std::cout << "Votre choix : ";
    std::cin >> choix;

    Forme* forme = nullptr;

    switch (choix) {
        case 1: // Rectangle
            std::cout << "Entrez les coordonnees du premier point du rectangle (x1 y1): ";
            std::cin >> x1 >> y1;
            std::cout << "Entrez les coordonnees du deuxieme point du rectangle (x2 y2): ";
            std::cin >> x2 >> y2;
            forme = new Rectangle(Point(x1, y1), Point(x2, y2));
            break;
        
        case 2: // Carré
            std::cout << "Entrez le coin du carre (x y) et la longueur du cote : ";
            std::cin >> x1 >> y1 >> rayon; // On utilise rayon pour le côté du carré
            forme = new Carre(Point(x1, y1), rayon);
            break;
        
        case 3: // Cercle
            std::cout << "Entrez les coordonnees du centre du cercle (x y) et le rayon : ";
            std::cin >> x1 >> y1 >> rayon;
            forme = new Cercle(Point(x1, y1), rayon);
            break;
        
        case 4: // Triangle
            std::cout << "Entrez les coordonnees du premier point du triangle (x1 y1): ";
            std::cin >> x1 >> y1;
            std::cout << "Entrez les coordonnees du deuxième point du triangle (x2 y2): ";
            std::cin >> x2 >> y2;
            std::cout << "Entrez les coordonnees du troisième point du triangle (x3 y3): ";
            std::cin >> x3 >> y3;
            forme = new Triangle(Point(x1, y1), Point(x2, y2), Point(x3, y3));
            break;
        
        case 5: // Polygone
            int n;
            std::cout << "Entrez le nombre de sommets du polygone : ";
            std::cin >> n;
            for (int i = 0; i < n; ++i) {
                std::cout << "Entrez les coordonnees du sommet " << i+1 << " (x y): ";
                std::cin >> x1 >> y1;
                sommets.push_back(Point(x1, y1));  // Ajout des sommets à la liste
            }
            forme = new Polygone(sommets);
            break;
        
        default:
            std::cout << "Choix invalide!" << std::endl;
            return 1;
    }

    // Afficher les informations sur la forme
    forme->dessiner();
    std::cout << "Aire: " << forme->calculerAire() << ", Perimetre: " << forme->calculerPerimetre() << std::endl;

    delete forme;
    return 0;
}
