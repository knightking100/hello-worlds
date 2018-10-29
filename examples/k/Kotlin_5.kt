fun getHelloString(who: String) : String {
    return "Hello, $who!"
}

fun main(args : Array<String>) {
    val who: String = "World"
    println(getHelloString(who))
}