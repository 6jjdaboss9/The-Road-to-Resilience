#include <iostream> 
#include <string> 

using namespace std;

// define a class to track the student's progress towards resilience
class RoadToResilience { 
    private: 
        int numSteps;
        int success; 
        string progressMsg; 
    
    public: 
        // constructor 
        RoadToResilience(): numSteps(0), success(0), progressMsg("Starting on the Road to Resilience") { } 
    
        // methods 
        void takeStep(); 
        void setSuccess(int s); 
        string getProgressMsg(); 
}; 

// define the function to take a step towards resilience
void RoadToResilience::takeStep() { 
    numSteps++; 
    if (numSteps <= 5) { 
        progressMsg = "You are taking the first steps to resilience"; 
    }
    else if (numSteps > 5 && numSteps <= 10) { 
        progressMsg = "You are making progress on the Road to Resilience"; 
    }
    else { 
        progressMsg = "You have completed the Road to Resilience!"; 
    }
}

// define getter function for progress message
string RoadToResilience::getProgressMsg() {
    return progressMsg; 
}

// define setter function for success
void RoadToResilience::setSuccess(int s) { 
    success = s; 
    if (success == 1) { 
        progressMsg = "You have achieved resilience!"; 
    }
    else { 
        progressMsg = "You have not yet achieved resilience, but you are making progress!"; 
    }
}

// main function for program
int main() { 
    // create a instance of the RoadToResilience class 
    RoadToResilience student; 
    
    // take steps along the Road to Resilience
    student.takeStep(); 
    student.takeStep(); 
    student.takeStep(); 
    student.takeStep(); 
    student.takeStep(); 
    student.takeStep(); 
    student.takeStep(); 
    student.takeStep(); 
    student.takeStep(); 
    student.takeStep(); 
    
    // set the success to 1
    student.setSuccess(1); 
    
    // print out the progress message 
    cout << student.getProgressMsg() << endl; 
    
    return 0; 
}