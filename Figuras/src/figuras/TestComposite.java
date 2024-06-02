package figuras;

public class TestComposite {

	

	public static void main(String[] args) {
			Figura rueda = new Circulo(1);
			Figura cuerpoVagon = new Rectangulo(2,3);
			Figura chimenea = new Rectangulo(1,1);
			Figura frenteLocomotora = new Triangulo();
			FiguraComposite locomotora = new FiguraComposite();
			locomotora.agregar(rueda);
			locomotora.agregar(rueda);
			locomotora.agregar(rueda);
			locomotora.agregar(cuerpoVagon);
			locomotora.agregar(chimenea);
			locomotora.agregar(frenteLocomotora);
			
			System.out.println(locomotora.calcularArea());
			
			FiguraComposite vagon = new FiguraComposite();
			vagon.agregar(rueda);
			vagon.agregar(rueda);
			vagon.agregar(cuerpoVagon);
			
			FiguraComposite furgon = new FiguraComposite();
			furgon.agregar(rueda);
			furgon.agregar(rueda);
			furgon.agregar(cuerpoVagon);
			furgon.agregar(new Rectangulo(1,1));
			
			FiguraComposite trencito = new FiguraComposite();
			trencito.agregar(locomotora);
			trencito.agregar(vagon);
			trencito.agregar(vagon);
			trencito.agregar(vagon);
			trencito.agregar(furgon);
			
			System.out.println(trencito.calcularArea());

			
		}

	

	
}