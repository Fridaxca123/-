#include <iostream>
#include "competencia.cpp"
#include "evento.cpp"
#include "nadador.cpp"
#include "fondo.cpp"
#include "velocidad.cpp"

int main() {
    std::cout << '\n';
    std::cout << "Bienvenido a swim meet!!" << std::endl;
    std::cout << '\n';

    std::string nombreCompetencia, fechaCompetencia, lugarCompetencia;
    Competencia competenciaActual;

    int numEvento, distanciaEvento;
    std::string estiloEvento;
    Evento eventoActual;

    std::string nombreNadador, clubNadador;
    int edadNadador;
    Nadador nadadorActual;

    Fondo fondoEvento;
    Velocidad velocidadEvento;

    while (true) {
        std::cout << '\n';
        std::cout << "Menu:\n";
        std::cout << '\n';
        std::cout << "1. Registrar Competencia\n";
        std::cout << "2. Registrar Nadador\n";
        std::cout << "3. Salir\n";
        std::cout << '\n';

        int opcion;
        std::cout << '\n';
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cout << '\n';

        switch (opcion) {
            case 1:
                std::cout << "Registro de Competencia:\n";
                std::cout << '\n';
                std::cout << "Nombre: ";
                std::cin.ignore();
                std::getline(std::cin, nombreCompetencia);
                std::cout << "Fecha: ";
                std::getline(std::cin, fechaCompetencia);
                std::cout << "Lugar: ";
                std::getline(std::cin, lugarCompetencia);
                std::cout << "Numero de nadadores: ";
                int numNadadoresCompetencia;
                std::cin >> numNadadoresCompetencia;
                std::cout << "Numero de eventos que se nadaran: ";
                int numEventosCompetencia;
                std::cin >> numEventosCompetencia;
                std::cout << '\n';

                competenciaActual = Competencia(nombreCompetencia, fechaCompetencia, lugarCompetencia, numNadadoresCompetencia, numEventosCompetencia);
                competenciaActual.guardarCompetencia();

                for (int i = 0; i < numEventosCompetencia; ++i) {
                    std::cout << "Registro de Evento " << i + 1 << ":\n";
                    std::cout << '\n';
                    std::cout << "Numero de evento: ";
                    std::cin >> numEvento;
                    std::cin.ignore();
                    std::cout << "Estilo: ";
                    std::getline(std::cin, estiloEvento);
                    std::cout << "Distancia: ";
                    std::cin >> distanciaEvento;
                    std::cin.ignore();
                    std::cout << '\n';

                    eventoActual = Evento(numEvento, estiloEvento, distanciaEvento);
                    eventoActual.guardarEvento(); 
                    std::cout << "Clasificación del evento: " << eventoActual.ClasificarEvento() << std::endl;
                    std::cout << '\n';

                    if (eventoActual.ClasificarEvento() == "fondo") {
                        float tiempoNadador;
                        std::cout << "Tiempo del nadador: ";
                        std::cin >> tiempoNadador;
                        std::cin.ignore();
                        fondoEvento.setTiempo(tiempoNadador);
                        float record;
                        std::cout << "Record del campeonato: ";
                        std::cin >> record;
                        std::cin.ignore();
                        fondoEvento.setRecord(record);

                        std::cout << "Tiempo registrado: " << fondoEvento.getTiempo() << "\n";
                        std::cout << "Record registrado: " << fondoEvento.getRecord() << "\n";
                    } else {
                        float tiempoNadador;
                        std::cout << "Tiempo del nadador: ";
                        std::cin >> tiempoNadador;
                        std::cin.ignore();
                        velocidadEvento.setTiempo(tiempoNadador);
                        float record;
                        std::cout << "Record del campeonato: ";
                        std::cin >> record;
                        std::cin.ignore();
                        velocidadEvento.setRecord(record);

                        std::cout << "Tiempo registrado: " << velocidadEvento.getTiempo() << "\n";
                        std::cout << "Record registrado: " << velocidadEvento.getRecord() << "\n";
                    }
                }
                std::cout << '\n';
                break;

            case 2:
                std::cout << "Registro de Nadador:\n";
                std::cout << '\n';
                std::cout << "Nombre del nadador: ";
                std::cin.ignore();
                std::getline(std::cin, nombreNadador);
                std::cout << "Edad del nadador: ";
                std::cin >> edadNadador;
                std::cin.ignore();
                std::cout << "Club del nadador: ";
                std::getline(std::cin, clubNadador);
                std::cout << '\n';

                nadadorActual = Nadador(nombreNadador, edadNadador, clubNadador);
                nadadorActual.guardarNadador();

                std::cout << "Categoria del nadador: " << nadadorActual.ClasificarNadador() << std::endl;
                std::cout << '\n';
                break;

            case 3:
                std::cout << "Saliendo del programa.\n";
                std::cout << '\n';

                return 0;

            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
                std::cout << '\n';
        }
    }

    return 0;
}
















