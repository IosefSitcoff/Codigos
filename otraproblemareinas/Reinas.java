package otraproblemareinas;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.io.Writer;
import java.util.ArrayList;



public class Reinas {
	File archivo = null;
	FileReader fr = null;
	BufferedReader br = null;
	FileWriter fichero = null;
	PrintWriter pw = null;
	
	private int fila;
	private int columna;
	private MatrizConReinas m;
	private  ArrayList<Reinas> r;
	//private MatrizConReinas ma;
	
	public Reinas(int fila, int columna) {
	this.setFila(fila);
	this.setColumna(columna);
	
	}
	public int getColumna() {
		return columna;
	}
	public void setColumna(int columna) {
		this.columna = columna;
	}
	public int getFila() {
		return fila;
	}
	public void setFila(int fila) {
		this.fila = fila;
	}
	{
	
	}
	
public void LeerArchivo() {
	try {
	   // Apertura del fichero y creacion de BufferedReader para poder
	   // hacer una lectura comoda (disponer del metodo readLine()).
	   archivo = new File ("conflictos.in");
	   fr = new FileReader (archivo);
	   br = new BufferedReader(fr);

	   String linea;
	   
	    m.setCuadrada(br.read());
	    m.setReinas(r);
	   while((linea = br.readLine())!=null )
	   {
		 m.agregarReinas(new Reinas(br.read(),br.read()));
		    
	    System.out.println(linea);
	}
	}
	catch(Exception e){
	   e.printStackTrace();
	}finally{
	   // En el finally cerramos el fichero, para asegurarnos
	   // que se cierra tanto si todo va bien como si salta 
	   // una excepcion.
	   try{                    
	      if( null != fr ){   
	         fr.close();     
	      }                  
	   }catch (Exception e2){ 
	      e2.printStackTrace();
	   }
	}

		
	}
	public void EscribirArchivo(int fila,int columna){
		
	int contador = 0;
		
	try
	{
	    fichero = new FileWriter("conflictos.out");
	    pw = new PrintWriter(fichero);
	    BufferedWriter bw = new BufferedWriter(pw);
	 
	
	  
		   for (int i = 0; i <this.fila; i++){
	    	for(int j = 0;j<this.columna;j++)
	    	{
	    	
	    	m.agregarReinas(new Reinas(this.fila,this.columna));
	        //pw.println(m.ContactoEntreReinas(m.getCuadrada(),m.getReinas()));
	        bw.write(m.ContactoEntreReinas(m.getCuadrada(),m.getReinas()));
	   
	    	}
	    	
	    }
	    
	   m.MostrarReinas(contador);
	    
	} catch (Exception e) {
	    e.printStackTrace();
	} finally {
	   try {
	// Nuevamente aprovechamos el finally para 
	   // asegurarnos que se cierra el fichero.
	   if (null != pw)
	      pw.close();
	   } catch (Exception e2) {
	      e2.printStackTrace();
	   }
	}

	}

}
