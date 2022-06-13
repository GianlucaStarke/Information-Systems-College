public class Instrument {
    private String serialNumber;
    private double price;

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
