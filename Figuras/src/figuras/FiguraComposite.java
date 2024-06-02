package figuras;

import java.awt.List;
import java.util.*;

//Relacion doble

public class FiguraComposite extends Figura{

	private ArrayList<Figura> figuras;
	
	public FiguraComposite() {
		//super(base, altura);
		//this.figuras = figuras;
		this.figuras = new ArrayList<Figura>();
	}

	public double calcularArea() {
		double area = 0;
		for(Figura cadaUna:figuras){
			area+=cadaUna.calcularArea();
		}
		return area;
	}
	public void agregar(Figura f){
		this.figuras.add(f);
	}
	
}
