public abstract class Instrument{
    private String serialNumber;
    private double price;
    private InstrumentSpec spec;

    public Instrument(String serialNumber, double price, InstrumentSpec spec){
        this.serialNumber = serialNumber;
        this.price = price;
        this.spec = spec;
    }

    public void setPrice(float price){
        this.price = price;
    }

    public String getSerialNumber(){
        return this.serialNumber;
    }

    public double getPrice(){
        return this.price;
    }

    public InstrumentSpec getSpec(){
        return this.spec;
    }
}
