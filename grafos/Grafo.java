package grafos;


public abstract class Grafo {
private int nodo;
private int arco;

public Grafo(int nodo, int arco) {
this.setNodo(nodo);
this.setArco(arco);
}


public int getNodo() {
	return nodo;
}


public void setNodo(int nodo) {
	this.nodo = nodo;
}


public int getArco() {
	return arco;
}
public void setArco(int arco) {
	this.arco = arco;
}


public void HacerGrafo() {
	// TODO Auto-generated method stub
	
}


}
