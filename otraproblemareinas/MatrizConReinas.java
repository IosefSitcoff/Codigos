package otraproblemareinas;

import java.util.ArrayList;
import java.util.Iterator;

public class MatrizConReinas {
	private int cuadrada;
	private ArrayList<Reinas> reinas;

	public MatrizConReinas(int cuadrada,Integer reinas) {
		this.setCuadrada(cuadrada);
		this.setReinas(new ArrayList<Reinas>(reinas));
	}


	public ArrayList<Reinas> getReinas() {
		return reinas;
	}


	public void setReinas(ArrayList<Reinas> reinas) {
		this.reinas = reinas;
	}


	public int getCuadrada() {
		return cuadrada;
	}


	public void setCuadrada(int cuadrada) {
		
		this.cuadrada = cuadrada;
	}

	
public Reinas buscarReinas(Reinas reinas) {
	
	Integer posicion = this.getReinas().indexOf(reinas);
	return (posicion == -1) ? null : this.getReinas().get(posicion);

}	
public void agregarReinas(Reinas reinas) {
	this.getReinas().add(reinas);
}
public Boolean SacarReinas(Reinas r) {
	return this.getReinas().remove(r);
}


public void MostrarReinas(int cont) {
	
for(Reinas aux:reinas) {
System.out.println(cont);
System.out.println(aux);
}
	
}
public int[][] MatrizCuadrada(int cuadrada, ArrayList<Reinas> reinas) {
	
	int[][] matriz = new int [cuadrada][cuadrada];
	
	
	return matriz;
	
	
}
public ArrayList<Reinas> CargarArrayList(int cuadrada,ArrayList<Reinas> reinas) {


	
for(int i=0;i<cuadrada;i++) {
	for(int j=0;j<cuadrada;i++) {
		
		Reinas r = new Reinas(i,j);
		
		reinas.add(r);
		
		
	}
}
	
	
return reinas;
}

public int ContactoEntreReinas(int cuadrada,ArrayList<Reinas> r) {

int cont = 0;
	

ArrayList<Reinas> posireinas = this.CargarArrayList(cuadrada, r);
int [][] aux = (int[][]) r.toArray();//reinas.toArray();
int [][] posicion = posireinas.toArray(aux);
for(int i=0;i<aux.length;i++)
{
	for(int j=0;j<aux[i].length;) {//j++
		

if(aux[i+i][j] == posicion[i+i][j] || aux[i][j+j] == posicion[i][j+j]) {
	cont++;
}else if(aux[i][j]==posicion[j][i] || aux[i-j][j] == posicion[i][i-j] || aux[i+j][j] == posicion[i][i+j])
{
cont++;
}else {
}


	}
}

return cont;







/*if(cont>0) {
	
	for(Reinas r : reinas) {
	System.out.println(cont);	
	System.out.println(reinas);
	
	}*/
	
	

}

public void ImprimirMatriz(int cuadrada){   
	String [][] matriz = new String [cuadrada][cuadrada];
    for(int i = 0; i <matriz.length; i++){
     for (int j = 0;j <matriz[i].length; j++){
    matriz[i][j] = ".";
  }
}  
}



}
