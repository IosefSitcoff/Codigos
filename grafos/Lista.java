package grafos;

import java.util.ArrayList;

public class Lista extends Grafo{

public Lista(int nodo, int arco) {
	super(nodo, arco);
}

private ArrayList<Grafo> g;

public ArrayList<Grafo> getG() {
	return g;
}

public void setG(ArrayList<Grafo> g) {
	this.g = g;
}

@Override
public void HacerGrafo() {
	// TODO Auto-generated method stub
	
}

	
}
