//
// Created by Familiar on 30/04/2020.
//

#ifndef POOII_TAREA_2_ENTREGA_01_05_JEANPAULMC_LIFOTEMP_H
#define POOII_TAREA_2_ENTREGA_01_05_JEANPAULMC_LIFOTEMP_H

template <typename T>
struct lifoTemp{
    T dato;
    lifoTemp *agregar;
    template <typename U>
    void agregarPilaTemp(lifoTemp *&, T);
    template <typename U>
    void sacarPilaTemp(lifoTemp *&, T &);
};

#endif //POOII_TAREA_2_ENTREGA_01_05_JEANPAULMC_LIFOTEMP_H
