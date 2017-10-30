package helloworld

fun main(args: Array<String>) {
    val a = charArrayOf(72.toChar(), 69.toChar(), 76.toChar(), 76.toChar(), 79.toChar(), 
                32.toChar(), 
                87.toChar(), 79.toChar(), 82.toChar(), 76.toChar(), 68.toChar(), 33.toChar())
        for (character in a) {
            print(Character.toString(character))
        }
}
