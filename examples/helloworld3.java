package helloworld;

/**
 *
 * @author Prasadee Jayasuriya
 */
public class HelloWorld {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
    System.out.println(Message.HELLO_WORLD.getName());
    
    }
    enum Message {
    HELLO_WORLD("Hello world");
     
    private String name;
    private Message(String name) {
        this.name = name;
    }
     
    public String getName() {
        return this.name;
    }
}
}
