package figuras;

public class Circulo extends Figura{
	public double radio;
	
	public Circulo(double radio){
	super();
	this.radio = radio;
	
}
public double calcularArea(){
	
	return Math.PI*Math.pow(radio, 2);
}

}

	
