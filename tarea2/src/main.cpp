#include <iostream>
#include "libro.hpp"
#include "noticias.hpp"
#include "pelicula.hpp"
#include "podcast.hpp"

using namespace std;

int main() {
    // Crear instancias de libros, noticias, películas y podcasts
    Libro* libro1 = new Libro("Cronica de una muerte anunciada", "Lectura", "Gabriel Garcia Marquez", "Editorial Paquito",
                              "Ficcion", "Disponible", 175, 12500, "Un resumen del libro.", "Otros libros del autor");

    Noticia* noticia1 = new Noticia("Saprissa campeon nacional", "Lectura", "Pepito", "El sol",
                                    "Deportes", "Prestado", 12, 500, "Un resumen de la noticia.", "Noticias relacionadas");

    Pelicula* pelicula1 = new Pelicula("Inception", "audiovisual", "Christopher Nolan", "Pelicula", "Ciencia Ficcion",
                                       170, "Disponible", 5000 , "Un resumen de la pelicula.", "Peliculas relacionadas ...");

    Podcast* podcast1 = new Podcast("Joe rogan exp 420", "audiovisual", "Joe Rogan", "Podcast", "Variado",
                                    70, "Prestado", 600, "Un resumen del podcast.", "Podcasts relacionados");


    cout << "Informacion del Libro:\n";
    libro1->imprimirInformacion();
    cout << "\nLongitud del Libro: " << libro1->longitudLibro() << "\n\n";

    cout << "Informacion de la Noticia:\n";
    noticia1->imprimirInformacion();
    cout << "\nLongitud de la Noticia: " << noticia1->longitudNoticia() << "\n\n";

    cout << "Informacion de la Pelicula:\n";
    pelicula1->imprimirInformacion();
    cout << "\nLongitud de la Pelicula: " << pelicula1->longitudPelicula() << "\n\n";

    cout << "Informacion del Podcast:\n";
    podcast1->imprimirInformacion();
    cout << "\nLongitud del Podcast: " << podcast1->longitudPodcast() << "\n\n";

    // Liberar memoria
    delete libro1;
    delete noticia1;
    delete pelicula1;
    delete podcast1;

    return 0;
}
