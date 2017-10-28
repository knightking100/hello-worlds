/**
 *
 * @author Khanh Hang Vu
 */
public class HelloWorld {
     **
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      String helloStr = "Hello";
      String worldStr = " World";
      StringBuilder sb = new StringBuilder();
      sb.append(helloStr);
      sb.append(worldStr);

      System.out.print(sb.toString());
    }
}
