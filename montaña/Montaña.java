package montaña;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Scanner;

public class Montaña {
private int [] valores;
private Carro carrito;
private Scanner entrada;

public Montaña() {
	
}
public void cargarDatos(String nombre) throws FileNotFoundException {

File archivo = new File(nombre);
int cantidad = 0;

try {
	entrada = new Scanner(archivo);
	cantidad = entrada.nextInt();
	valores = new int[cantidad];
	for(int i=0;i<cantidad;i++) {
		valores[i] = entrada.nextInt();
	}
	carrito = new Carro(entrada.nextInt());
}catch(FileNotFoundException e) {
	System.out.println(e);
}

}
public void resolver(String archivoOUT) throws IOException{
carrito.calcularValoresIniciales(valores[0]);
carrito.CalcularValoresFinales(valores);
System.out.println(carrito.toString());

PrintWriter salida = new PrintWriter(new FileWriter(archivoOUT));
salida.print(this.carrito);
salida.close();

}

public void mostrarPorPantalla() {
if(valores!=null) {
int suma = 0;

System.out.println("cantidad : "+this.valores.length);

for(int i = 0;i<valores.length;i++) {
	System.out.println(valores[i]);
}
for(int i=1;i<valores.length;i++) {
suma = suma + Math.abs(valores[i] - valores[i-1]);	
}
carrito.calcularValoresIniciales(valores[0]);
System.out.println(carrito.toString());

}else {
	System.out.println("no se cargo un carajo");
}

}
public static void main(String[] args) throws IOException {
	
	Montaña camino = new Montaña();
	
	camino.cargarDatos("como.in");
	camino.resolver("como.out");

}

	
	
	

}