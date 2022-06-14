public class MandolinSpec extends InstrumentSpec{
    private Style style;
    
    public MandolinSpec(Style style, Builder builder, String model, Type type, Wood backWood, Wood topWood){
        super(builder, model, type, backWood, topWood);
    
        this.style = style;
    }

    @Override
    public boolean matches(InstrumentSpec otherSpec) {
        MandolinSpec spec = (MandolinSpec)otherSpec;

        return super.matches(otherSpec)
            && (otherSpec instanceof MandolinSpec)
            && style.equals(spec.style);
    }

    public Style getStyle(){
        return this.style;
    }

    // @Override
    // public boolean matches(InstrumentSpec otherSpec) {
    //     if(!super.matches(otherSpec)){
    //         return false;
    //     }

    //     if(!(otherSpec instanceof MandolinSpec)){
    //         return false;
    //     }

    //     MandolinSpec spec = (MandolinSpec)otherSpec;

    //     if(!style.equals(spec.style)){
    //         return false;
    //     }

    //     return true;
    // }
}
