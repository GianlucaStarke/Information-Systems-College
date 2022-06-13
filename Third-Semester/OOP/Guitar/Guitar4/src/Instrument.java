public class Instrument {
    private String serialNumber;
    private double price;

    public Instrument(String serialNumber, double price){
        this.serialNumber = serialNumber;
        this.price = price;
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
}
