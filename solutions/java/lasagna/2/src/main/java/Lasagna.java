public class Lasagna {
    public int expectedMinutesInOven (){
        return 40;
    }

    public int remainingMinutesInOven(int minutesleft){
        Lasagna lasagna= new Lasagna();
        return lasagna.expectedMinutesInOven() - minutesleft;
    
    }
    public int preparationTimeInMinutes(int numberLayers){
        return numberLayers * 2;
        
    }

    public int totalTimeInMinutes(int numberLayers, int minutesleft){
        Lasagna lasagna= new Lasagna();
        return minutesleft+ lasagna.preparationTimeInMinutes(numberLayers);
    }
}
