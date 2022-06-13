public class GuitarSpec extends InstrumentSpec{
    private int numStrings;
    
    public GuitarSpec(int numStrings, Builder builder, String model, Type type, Wood backWood, Wood topWood){
        super(builder, model, type, backWood, topWood);

        this.numStrings = numStrings;
    }

    public int getNumStrings(){
        return this.numStrings;
    }
}