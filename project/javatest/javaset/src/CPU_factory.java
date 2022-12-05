public class CPU_factory{
    public static CPU CPU_factory1(String name){
        CPU cpu=null;
        if(name=="AMD")
            cpu=new AMD();
        else if(name=="Intel")
            cpu=new Intel();
        else if(name=="M1")
            cpu=new M1();
        return cpu;
    }
}