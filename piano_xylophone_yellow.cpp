#include <iostream> 
using namespace std;

// Define class RoadToResilience to represent the concept of resilience
class RoadToResilience 
{ 
private: 
    int perseveranceLevel; 
public: 
    // Constructor to initialize the perseveranceLevel  
    RoadToResilience(int level) 
    { 
        perseveranceLevel = level; 
    } 
  
    // Function to increase the level of resilience 
    void increaseResilience() 
    { 
        perseveranceLevel += 2; 
    } 
  
    // Function to decrease the level of resilience 
    void decreaseResilience() 
    { 
        if (perseveranceLevel > 0) 
            perseveranceLevel -= 2; 
    } 
  
    // Return the current level of resilience 
    int getResilienceLevel() 
    { 
        return perseveranceLevel; 
    } 
}; 

// Driver function 
int main() 
{ 
    // Create an object of RoadToResilience with level 10 
    RoadToResilience resilience(10); 
  
    // Increase resilience level by 4 
    resilience.increaseResilience(); 
    resilience.increaseResilience(); 
    resilience.increaseResilience(); 
    resilience.increaseResilience(); 
  
    // Decrease resilience level by 2 
    resilience.decreaseResilience(); 
    resilience.decreaseResilience(); 
  
    // Print the current resilience level 
    cout << "Current resilience level = "
         << resilience.getResilienceLevel() 
         << endl; 
  
    return 0; 
} 

// Function to visualize the progress towards resilience
void visualizeProgress(RoadToResilience object) 
{  
    int resilienceLevel = object.getResilienceLevel(); 
  
    cout << "Visualizing resilience journey...\n"; 
    for (int i = 0; i < resilienceLevel; i++) 
    { 
        cout << "*"; 
    } 
} 

// Function to provide resilience tips
void resilienceTips() 
{ 
    cout << "\nHere are some tips to keep building resilience\n"; 
    cout << "1. Stay Positive\n"; 
    cout << "2. Take Care of Yourself\n"; 
    cout << "3. Embrace Challenges\n"; 
    cout << "4. Find Your Purpose\n"; 
    cout << "5. Cultivate Connections\n"; 
    cout << "6. Take Breaks as Needed\n"; 
    cout << "7. Focus on What You Can Control\n"; 
    cout << "8. Develop an Optimistic Outlook\n"; 
    cout << "9. Don't Dwell on the Negative\n"; 
    cout << "10. Be Kind to Yourself\n"; 
} 
  
// Update driver function to use visualizeProgress 
int main() 
{ 
    // Create an object of RoadToResilience with level 10 
    RoadToResilience resilience(10); 
  
    // Increase resilience level by 4 
    resilience.increaseResilience(); 
    resilience.increaseResilience(); 
    resilience.increaseResilience(); 
    resilience.increaseResilience(); 
  
    // Visualize the progress 
    visualizeProgress(resilience); 
  
    // Provide tips for building resilience 
    resilienceTips(); 
  
    // Decrease resilience level by 2 
    resilience.decreaseResilience(); 
    resilience.decreaseResilience(); 
  
    // Print the current resilience level 
    cout << "\nCurrent resilience level = "
         << resilience.getResilienceLevel() 
         << endl; 
  
    return 0; 
}