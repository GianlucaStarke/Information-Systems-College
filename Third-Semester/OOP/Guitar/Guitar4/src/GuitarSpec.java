public class GuitarSpec extends InstrumentSpec{
    private int numStrings;
    
    public GuitarSpec(int numStrings, Builder builder, String model, Type type, Wood backWood, Wood topWood){
        super(builder, model, type, backWood, topWood);

        this.numStrings = numStrings;
    }

    @Override
    public boolean matches(InstrumentSpec otherSpec){
        GuitarSpec spec = (GuitarSpec)otherSpec;
        
        return super.matches(otherSpec)
            && (otherSpec instanceof GuitarSpec)
            && numStrings == spec.numStrings;
    }

    public int getNumStrings(){
        return this.numStrings;
    }

    // @Override
    // public boolean matches(InstrumentSpec otherSpec){
    //     if(!super.matches(otherSpec)){
    //         return false;
    //     }
        
    //     if(!(otherSpec instanceof GuitarSpec)){
    //         return false;
    //     }

    //     GuitarSpec spec = (GuitarSpec)otherSpec;
        
    //     if(numStrings != spec.numStrings){
    //         return false;
    //     }

    //     return true;
    // }
}