//
// Created by Familiar on 30/04/2020.
//

#ifndef POOII_TAREA_2_ENTREGA_01_05_JEANPAULMC_LIFO_H
#define POOII_TAREA_2_ENTREGA_01_05_JEANPAULMC_LIFO_H

struct Lifo{
    int dato;
    Lifo *agregar;
    void agregarPila(Lifo *&, int);
    void sacarPila(Lifo *&, int &);
};


#endif //POOII_TAREA_2_ENTREGA_01_05_JEANPAULMC_LIFO_H
