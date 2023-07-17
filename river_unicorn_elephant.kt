import java.util.*

fun main() {
    println("The Road to Resilience")
    println("======================")

    // Variables
    var currentMood : String = ""
    var resilience : Int = 0

    // Create a list of 4 coping strategies
    val copingStrategies : MutableList<String> = mutableListOf("Exercise","Journaling","Spending Time with Friends", "Talking Positively to Yourself")

    // Request user input of current mood
    println("What is your current mood? ")
    currentMood = readLine()!!

    // Reassure user of their feelings and encourage resilience
    when (currentMood.toLowerCase()) {
        "happy" -> println("That's great! Keep up the positivity!")
        "sad" -> println("It's okay to feel sad. However, staying resilient in the face of adversity is key.")
        "angry" -> println("It's normal to feel angry. Let's focus on rebounding and finding solutions.")
        else -> println("Try to keep a positive outlook. Remain resilient!")
    }

    // Explain resilience and the importance of it
    println("Resilience is important in getting through life's tough moments. It involves the ability to cope and bounce back after adversity. Developing resilience can help you become more successful and less stressed.")

    // Ask user to list any strategies they use to maintain their resilience
    println("Can you name any strategies that help you build resilience? (Enter 'None' if you don't have any) ")
    val userStrategies = readLine()!!

    // Add user entered strategies to list
    if (userStrategies != "None") {
        copingStrategies.add(userStrategies)
    }

    // Loop through list and print strategies
    println()
    println("Let's look at some strategies you can use to build resilience...")
    println()
    for (i in copingStrategies.indices) {
        resilience += 1
        println("${i+1}. ${copingStrategies[i]}")
    }

    // Ask user to choose one strategy
    println("Which strategy would you like to focus on first?")
    val choice = readLine()!!.toInt()

    // Print information about chosen strategy
    when (choice) {
        1 -> println("Exercise is a great way to increase your energy levels and boost your mood. It can also help with stress management and improve your overall wellbeing.")
        2 -> println("Journaling is a great tool for self-reflection and introspection. It can help to identify underlying issues that could be causing negative emotions.")
        3 -> println("Spending time with friends is a great way to distract from difficult emotions. It creates a sense of support and camaraderie.")
        4 -> println("Talking positively to yourself can help build your self-esteem and confidence. It can also help to increase your resilience in the face of adversity.")
        else -> println("That is not a valid strategy. Please pick one from the list.")
    }

    // Encourage user to stay resilient
    println()
    println("Remember, staying resilient is key! With the right strategies and support, you can make it through anything!")

}