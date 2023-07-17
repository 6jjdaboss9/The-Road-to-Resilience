import java.util.ArrayList;
import java.util.HashMap;

public class RoadToResilience {

	public static void main(String[] args) {
		
		//Declare variables
		ArrayList<String> journeySteps = new ArrayList<>();
		HashMap<String, String> tips = new HashMap<>();
		String journeyStart = "Start your journey";
		
		//Initialize variables
		journeySteps.add("Step 1: Acknowledge Your Journey");
		journeySteps.add("Step 2: Establish Your Goals");
		journeySteps.add("Step 3: Evaluate Your Resources");
		journeySteps.add("Step 4: Develop a Plan");
		journeySteps.add("Step 5: Take Action");
		journeySteps.add("Step 6: Monitor Your Progress");
		journeySteps.add("Step 7: Celebrate Your Successes");
		
		tips.put("Step 1: Acknowledge Your Journey", 
				"It is important to acknowledge the journey you are on and the hardships that come with it. Take a few moments to reflect on how far you have come.");
		tips.put("Step 2: Establish Your Goals", 
				"Consider what you want to accomplish in the short term and in the long term. What do you need to do to succeed? Think about how you will measure success.");
		tips.put("Step 3: Evaluate Your Resources", 
				"Take stock of the resources you have in order to achieve your goals. Are there people, skills, or knowledge that you can leverage? Consider creating a roadmap to help you get to where you want to go.");
		tips.put("Step 4: Develop a Plan", 
				"Lay out the steps you’ll need to take to achieve your goals. Create a timeline for execution. Identify the systems and processes you’ll need to establish to make sure that you stay on track with your plan.");
		tips.put("Step 5: Take Action", 
				"Put your plan into practice. Monitor your progress and adjust your course as needed. Set deadlines and hold yourself accountable.");
		tips.put("Step 6: Monitor Your Progress", 
				"Stay on top of your goals and progress. Take time to recognize your successes, no matter how small. Celebrate your milestones to motivate yourself to keep going.");
		tips.put("Step 7: Celebrate Your Successes", 
				"Don’t forget to reward yourself for a job well done. Celebrate your wins, big and small, with something that brings you joy.");
		
		//Print journey start
		System.out.println(journeyStart);
		
		//Print journey steps and tips
		for (String step : journeySteps) {
			System.out.println(step);
			System.out.println(tips.get(step));
		}
		
	}

}