#include <iostream>
#include "Datatypes.h"
#include "Class.h"

using namespace std;

// Data types

class Dtfecha{
public:
    int dia;
    int mes;
    int anio;
};

class DtViajeBase{
public:
    Dtfecha fecha;
    int duracion;
    int distancia;
};

enum class TipoBici{
    PASEO,MONTANIA
};

class DtVehiculo{
public:
    int nroSerie;
    float porcentaje;
    float precioBase;
};

class DtMonopatin: public DtVehiculo{
public:
        bool tieneLuces;
};

class DtBicicleta: DtVehiculo{
public:
    TipoBici tipo;
    int cantCambios;
};

class DtViaje: public DtViajeBase{
public:
    float precioTotal;
    DtVehiculo vehiculo;
};


// Clases

class Usuario{
private:
    string cedula;
    string nombre;
    Dtfecha fechaIngreso;
public:
<<<<<<< HEAD
    Usuario(string _ci, string _nombre, Dtfecha _fechaIngreso);
=======
    Usuario(string,string,Dtfecha); ///Constructor
>>>>>>> RamaMichael
};

Usuario::Usuario(string _ci, string _nombre, Dtfecha _fechaIngreso){
    string ci = _ci;
    string nombre = _nombre;
    _fechaIngreso.anio = 0;
    _fechaIngreso.mes = 0;
    _fechaIngreso.dia = 0;
}
class Viaje{
private:
    Dtfecha fecha;
    int duracion;
    int distancia;
public:
<<<<<<< HEAD
    Viaje(Dtfecha fecha, int duracion, int distancia);
};

Viaje::Viaje(Dtfecha _fecha, int _duracion, int _distancia){
    _fecha.anio = 0;
    _fecha.mes = 0;
    _fecha.dia = 0;
    int duracion = _duracion;
    int distacia = _distancia;
}

class Vehiculo: public Viaje{
=======
    Viaje(Dtfecha,int,int); ///Constructor
};

class Vehiculo{
>>>>>>> RamaMichael
private:
    int nroSerie;
    float porcentajeBateria;
    float precioBase;
    DtMonopatin tieneLuces;
public:
<<<<<<< HEAD
    Vehiculos(int nroSerie, float porcentajeBateria, float precioBase, DtMonopatin tieneLuces);
   float darPrecioViaje(int duracion, int distancia, bool tieneLuces);
};

float Vehiculo::darPrecioViaje(int duracion, int distancia,bool tieneLuces){
    if(tieneLuces){
=======
    Vehiculo(int,float,float);  ///Constructor
   float darPrecioViaje(int duracion, int distancia);
};

/*float Vehiculo::darPrecioViaje(int,int){
    if(Monopatin::tieneLuces){
>>>>>>> RamaMichael
        return 0.5 * duracion + distancia * precioBase;
    }
    else{
        return distancia * precioBase;
    }
}
<<<<<<< HEAD

=======
*/
>>>>>>> RamaMichael
class Monopatin: public Vehiculo{
private:
    int nroSerie;
    float porcentajeBateria;
    float precioBase;
    DtMonopatin tieneLuces;
public:
<<<<<<< HEAD
    Monopatin(int nroSerie , float porcentajeBateria, float precioBase, DtMonopatin tieneLuces);
    float darPrecioViaje(int duracion, int distancia, bool tieneLuces);
};

<<<<<<< Updated upstream
Usuario::Usuario(string _cedula,string _nombre,Dtfecha _fechaIngreso){
    cedula=_cedula;
    nombre=_nombre;
    fechaIngreso=_fechaIngreso;
}
=======
Monopatin::Monopatin(int _nroSerie, float _porcentajeBateria, float _precioBase, DtMonopatin _tieneLuces){
>>>>>>> Stashed changes

Viaje::Viaje(Dtfecha _fecha,int _duracion,int _distancia){
     fecha=_fecha;
     duracion=_duracion;
     distancia=_distancia;
}

Vehiculo::Vehiculo(int _nroSerie,float _porcentajeBateria,float _precioBase){
    nroSerie=_nroSerie;
    porcentajeBateria=_porcentajeBateria;
    precioBase=_precioBase;
}


Monopatin::Monopatin(int _nroSerie,float _porcentajeBateria,float _precioBase,bool _tieneLuces) : Vehiculo(_nroSerie,_porcentajeBateria,_precioBase){
    tieneLuces=_tieneLuces;
}

Bicicleta::Bicicleta(int _nroSerie,float _porcentajeBateria,float _precioBase,TipoBici _tipo, int _cantCambios) : Vehiculo(_nroSerie,_porcentajeBateria,_precioBase){
    tipo=_tipo;
    cantCambios=_cantCambios;
}

=======
>>>>>>> pr/2
=======
    Monopatin(int,float,float,bool);    ///Constructor
    float darPrecioViaje(int duracion, int distancia);
};

class Bicicleta: public Vehiculo{
private:
    TipoBici tipo;
    int cantCambios;
public:
    Bicicleta(int,float,float,TipoBici,int);    ///Constructor
    float darPrecioViaje(int duracion, int distancia);
};

///Constructores

Usuario::Usuario(string _cedula,string _nombre,Dtfecha _fechaIngreso){
    cedula=_cedula;
    nombre=_nombre;
    fechaIngreso=_fechaIngreso;
}

Viaje::Viaje(Dtfecha _fecha,int _duracion,int _distancia){
     fecha=_fecha;
     duracion=_duracion;
     distancia=_distancia;
}

Vehiculo::Vehiculo(int _nroSerie,float _porcentajeBateria,float _precioBase){
    nroSerie=_nroSerie;
    porcentajeBateria=_porcentajeBateria;
    precioBase=_precioBase;
}


Monopatin::Monopatin(int _nroSerie,float _porcentajeBateria,float _precioBase,bool _tieneLuces) : Vehiculo(_nroSerie,_porcentajeBateria,_precioBase){
    tieneLuces=_tieneLuces;
}

Bicicleta::Bicicleta(int _nroSerie,float _porcentajeBateria,float _precioBase,TipoBici _tipo, int _cantCambios) : Vehiculo(_nroSerie,_porcentajeBateria,_precioBase){
    tipo=_tipo;
    cantCambios=_cantCambios;
}
>>>>>>> RamaMichael

int main()
{

    return 0;
}
