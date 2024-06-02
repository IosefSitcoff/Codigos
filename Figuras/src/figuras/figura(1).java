package figuras;

public abstract class figura {
 private double base;
 private double altura;
 
public double getBase() {
	return base;
}
public figura(double base, double altura) {
	super();
	this.base = base;
	this.altura = altura;
}
public void setBase(double base) {
	this.base = base;
}
public double getAltura() {
	return altura;
}
public void setAltura(double altura) {
	this.altura = altura;
}
public figura(){
	this(0,0);
}
public String toStrgin(){
	return " soy una figura generica";
}
public abstract double calcularArea();
public abstract double calcularPerimetro();
}
