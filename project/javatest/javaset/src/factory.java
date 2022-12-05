public class factory {
    public static void main(String[] args) {
        CPU AMD1=CPU_factory.CPU_factory1("AMD");
        CPU Intel1=CPU_factory.CPU_factory1("Intel");
        CPU M1=CPU_factory.CPU_factory1("M1");
        AMD1.show();
        Intel1.show();
        M1.show();
    }
}
