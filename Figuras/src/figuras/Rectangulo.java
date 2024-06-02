package figuras;

public class Rectangulo extends Figura {

	public Rectangulo(double base, double altura){
		super(base,altura);
	}
	public Rectangulo(){
		this(0,0);
	}
	public double calcularArea() {
		
		return this.getBase()*this.getAltura();
	}
	

	
	//public double calcularPerimetro() {
		
		//return 2*(this.getBase()+this.getAltura());
	//}


}
