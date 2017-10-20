public class Java_8 {
    public static void main(String[] args) {
        final char[] a = new char[]{72,69,76,76,79,32,87,79,82,76,68,33};
        for (char character : a) {
            System.out.print(Character.toString(character));
        }
    }
}
