package atletismo;

public class Triatleta extends Pessoa implements Atleta, Ciclista, Corredor, Nadador{
    public Triatleta(String nome, String endereco){
    	super(nome, endereco);
    }
    
    @Override
    public void pedalar() {
        System.out.println(this.getNome() + " est� pedalando");
    }
    
    @Override
    public void correr() {
        System.out.println(this.getNome() + " est� correndo");
    }
    
    @Override
    public void aquecer() {
        System.out.println(this.getNome() + " est� aquecendo");
    }
    
    @Override
    public void nadar() {
        System.out.println(this.getNome() + " est� nadando");
    }

    @Override
    public void imprimirDados() {
        System.out.println("Nome do atleta: "+super.getNome()+"\n" + "Endere�o do atleta:" + super.getEndereco());
    }
}