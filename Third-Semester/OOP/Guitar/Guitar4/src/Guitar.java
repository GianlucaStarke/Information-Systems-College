public class Guitar extends Instrument{
    public Guitar(String serialNumber, double price, GuitarSpec spec){
        super(serialNumber, price, spec);
    }

    public void setPrice(float newPrice){
        super.setPrice(newPrice);
    }

    public String getSerialNumber(){
        return super.getSerialNumber();
    }

    public double getPrice(){
        return super.getPrice();
    }

    public GuitarSpec getSpec(){
        return getSpec();
    }
}