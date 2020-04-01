#ifndef DATATYPES_H_INCLUDED
#define DATATYPES_H_INCLUDED
// Data types

struct Dtfecha{

    int dia;
    int mes;
    int anio;
};

struct DtViajeBase{

    Dtfecha fecha;
    int duracion;
    int distancia;
};

enum struct TipoBici{
    PASEO,MONTANIA
};

struct DtVehiculo{

    int nroSerie;
    float porcentaje;
    float precioBase;
};

struct DtMonopatin: public DtVehiculo{

        bool tieneLuces;
};

struct DtBicicleta: DtVehiculo{

    TipoBici tipo;
    int cantCambios;
};

struct DtViaje: public DtViajeBase{

    float precioTotal;
    DtVehiculo vehiculo;
};




#endif // DATATYPES_H_INCLUDED
