//Autor: Gabriel Gómez
//Fecha: 01/16/2024
//Version: 1.0.0
//Descripcion: Funcion de menu para programa TGH

//Preprocessador
#include <stdlib.h>
#include<iostream>
using namespace std;

//definicion de funciones
//Menus
void GestionDeVentas();
void GestionDeInventario();
void GestionDeProductos();
void GestionDeUsuarios();
void GestionDeBajas();
void GestionDeCompras();

//Funciones dentro de menus
void BuscarFactura();
void CargarVentas();
void EliminarFactura();
void GuardarVentas();
void ImprimirCierreDiario();
void RegistrarVenta();
void AgregarProducto();
void BuscarProducto();
void CargarProducto();
void EliminarProducto();
void GuardarProducto();
void ModificarProducto();
void BuscarBajaProducto();
void CargarBaja();
void DarBajaProducto();
void GuardarBaja();
void RevertirBajaProducto();
void AgregarCompra();
void BuscarCompra();
void CancelarCompra();
void CargarCompra();
void GuardarCompra();

//Menu Principal
void MenuPrincipal(){
    int seleccion;
    do{
        system("cls");
        cout<<"****** MENU PRINCIPAL ******"<<endl;
        cout<<"1....................Ventas"<<endl;
        cout<<"2....................Gestión de Inventario"<<endl;
        cout<<"3....................Gestión de Productos"<<endl;
        cout<<"4....................Gestión de Usuarios"<<endl;
        cout<<"0....................Salir"<<endl;
        cout<<"****************************"<<endl;
        cout<<"OPCION: ";
        cin>>seleccion;
        switch(seleccion){
            case 1: GestionDeVentas();
                    break;
            case 2: GestionDeInventario();
                    break;
            case 3: GestionDeProductos();
                    break;
            case 4: GestionDeUsuarios();
                    break;
            case 0: break;
            default:break;
        }
    }while(seleccion!=0);

}

//Menu de Ventas
void GestionDeVentas(){
    int seleccion;
    do{
        system("cls");
        cout<<"****** MENU VENTAS ******"<<endl;
        cout<<"1....................Buscar Factura"<<endl;
        cout<<"2....................Cargar Ventas"<<endl;
        cout<<"3....................Eliminar Factura"<<endl;
        cout<<"4....................Guardar Ventas"<<endl;
        cout<<"5....................Imprimir Cierre Diario"<<endl;
        cout<<"6....................Registrar Venta"<<endl;
        cout<<"0....................Regresar al Menu Anterior"<<endl;
        cout<<"****************************"<<endl;
        cout<<"OPCION: ";
        cin>>seleccion;
        switch(seleccion){
            case 1: BuscarFactura();
                    break;
            case 2: CargarVentas();
                    break;
            case 3: EliminarFactura();
                    break;
            case 4: void GuardarVentas();
                    break;
            case 5: ImprimirCierreDiario();
                    break;
            case 6: RegistrarVenta();
                    break;                
            case 0: break;
            default:break;
        }
    }while(seleccion!=0);
}

//Menu Gestion de Productos
void GestionDeProductos(){
    int seleccion;
    do{
        system("cls");
        cout<<"****** GESTIÓN DE PRODUCTOS ******"<<endl;
        cout<<"1....................Agregar Producto"<<endl;
        cout<<"2....................Buscar Producto"<<endl;
        cout<<"3....................Cargar Producto"<<endl;
        cout<<"4....................Eliminar Producto"<<endl;
        cout<<"5....................Guardar Producto"<<endl;
        cout<<"6....................ModificarProducto"<<endl;
        cout<<"0....................Regresar al Menu Anterior"<<endl;
        cout<<"****************************"<<endl;
        cout<<"OPCION: ";
        cin>>seleccion;
        switch(seleccion){
            case 1: AgregarProducto();
                    break;
            case 2: BuscarProducto();
                    break;
            case 3: CargarProducto();
                    break;
            case 4: EliminarProducto();
                    break;
            case 5: GuardarProducto();
                    break;
            case 6: ModificarProducto();
                    break;        
            case 0: break;
            default:break;
        }
    }while(seleccion!=0);
}

//Menu Gestion de Inventario
void GestionDeInventario(){
    int seleccion;
    do{
        system("cls");
        cout<<"****** GESTIÓN DE INVENTARIO ******"<<endl;
        cout<<"1....................Gestion de Bajas"<<endl;
        cout<<"2....................gestion de Compras"<<endl;
        cout<<"0....................Regresar al Menu Anterior"<<endl;
        cout<<"****************************"<<endl;
        cout<<"OPCION: ";
        cin>>seleccion;
        switch(seleccion){
            case 1: GestionDeBajas();
                    break;
            case 2: GestionDeCompras();
                    break;        
            case 0: break;
            default:break;
        }
    }while(seleccion!=0);
}

//Menu de Gestion de Bajas
void GestionDeBajas(){
    int seleccion;
    do{
        system("cls");
        cout<<"****** GESTIÓN DE BAJAS ******"<<endl;
        cout<<"1....................Buscar Baja de Producto"<<endl;
        cout<<"2....................Cargar Bajas"<<endl;
        cout<<"3....................Dar de Baja un Producto"<<endl;
        cout<<"4....................Guardar Bajas"<<endl;
        cout<<"5....................Revertir Baja de Producto"<<endl;
        cout<<"0....................Regresar al Menu Anterior"<<endl;
        cout<<"****************************"<<endl;
        cout<<"OPCION: ";
        cin>>seleccion;
        switch(seleccion){
            case 1: BuscarBajaProducto();
                    break;
            case 2: CargarBaja();
                    break;
            case 3: DarBajaProducto();
                    break;
            case 4: GuardarBaja();
                    break;
            case 5: RevertirBajaProducto();
                    break;   
            case 0: 
            default:break;
        }
    }while(seleccion!=0);
}

//Menu de Gestion de Compras
void GestionDeCompras(){
    int seleccion;
    do{
        system("cls");
        cout<<"****** GESTIÓN DE COMPRAS ******"<<endl;
        cout<<"1....................Agregar Compra"<<endl;
        cout<<"2....................Buscar Compra"<<endl;
        cout<<"3....................Cancelar Compra"<<endl;
        cout<<"4....................Cargar Compra"<<endl;
        cout<<"5....................Guardar Compra"<<endl;
        cout<<"0....................Regresar al Menu Anterior"<<endl;
        cout<<"****************************"<<endl;
        cout<<"OPCION: ";
        cin>>seleccion;
        switch(seleccion){
            case 1: AgregarCompra();
                    break;
            case 2: BuscarCompra();
                    break;
            case 3: CancelarCompra();
                    break;
            case 4: CargarCompra();
                    break;
            case 5: GuardarCompra();
                    break;   
            case 0: 
            default:break;
        }
    }while(seleccion!=0);
}

// Funciones utilizadas sin implementar, una vez hechas las funciones hay que definirlas y actualizar el codigo
void GestionDeUsuarios() {}
void BuscarFactura() {}
void CargarVentas() {}
void EliminarFactura() {}
void GuardarVentas() {}
void ImprimirCierreDiario() {}
void RegistrarVenta() {}
void AgregarProducto() {}
void BuscarProducto() {}
void CargarProducto() {}
void EliminarProducto() {}
void GuardarProducto() {}
void ModificarProducto() {}
void BuscarBajaProducto() {}
void CargarBaja() {}
void DarBajaProducto() {}
void GuardarBaja() {}
void RevertirBajaProducto() {}
void AgregarCompra() {}
void BuscarCompra() {}
void CancelarCompra() {}
void CargarCompra() {}
void GuardarCompra() {}