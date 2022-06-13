public class GuitarSpec extends InstrumentSpec{
    private int numStrings;
    
    public GuitarSpec(int numStrings, Builder builder, String model, Type type, int numStrings, Wood backWood, Wood topWood){
        super(builder, model, type, numStrings, backWood, topWood);

        this.numStrings = numStrings;
    }

    @Override
    public int getNumStrings(){
        return super.getNumStrings();
    }
}