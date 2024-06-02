package grafos;


public class Matriz extends Grafo{

private int[][] matriz;
private int [] nodos;
public Matriz(int  nodo, int arco) {
super(nodo,arco);

for(int i=0;i<this.getNodo();i++) {
	this.nodos[i] = 0;
	for(int j=0;j<this.getNodo();j++) {
		this.matriz[i][j] = 0;
	}
}
}







public int MatrizAdyacencia(int [][] matriz) {

for(int i = 0;i<this.getNodo();i++) {
	for(int j = 0;j<this.getNodo();j++) {
		
		//if(this.getNodo())
		
	}
}
	
	
	
return 0;	
}






public void HacerGrafo() {

for(int i=0;i<this.getNodo();i++) {
	nodos[i] = this.getNodo();
}
	
}











}


