package helloworld;

public class helloworld {
	
	
	enum helloWorld {
	    HELLO_WORLD("Hello world");
	     
	    private String name;
	    private helloWorld(String name) {
	        this.name = name;
	    }
	     
	    public String getName() {
	        return this.name;
	    }
	}
public static void main(String[] args) {
	
	System.out.println(helloWorld.HELLO_WORLD.getName());
	
	
	
}
	
}

