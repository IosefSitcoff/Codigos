package montaña;

public class Carro {

	
		private int x;
		private int y;
		private int velocidad;
		private int apuntador;
		
		//construye un carrito en la posicion que se le ingresa
		public Carro(int x){
			this.x=x;
		}


		public void calcularValoresIniciales(int alturaInicial){
			this.y=(alturaInicial-this.x);
			this.velocidad=this.y;
		}

		public void CalcularValoresFinales(int []valores){	
			int suma=0;
			setApuntador(0);
			/*for(int i=1;i<valores.length;i++){
				if(valores[i]>valores[i-1]){
					this.velocidad--;
				}
				
			}*/
			for(int i=0;i<valores.length;i++){
				if(valores[i]<=velocidad){
					System.out.println(valores[i]);
					suma+=valores[i];	
					if(i%2!=0){
						velocidad--;
					}
				}else if(i>0){
					setApuntador(i);
					break;
				}
			}
			this.y=velocidad;
			this.x=(suma+(valores[0]- x)+velocidad);
		}
		
		
		@Override
		public String toString() {
			return ""+this.x+" "+this.y;
		}


		public int getApuntador() {
			return apuntador;
		}


		public void setApuntador(int apuntador) {
			this.apuntador = apuntador;
		}
	

}
