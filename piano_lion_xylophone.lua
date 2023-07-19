-- The Road to Resilience --

-- Chapter 1 --
-- Introduction

-- Define a global "resilient" function
function resilient(inp)
	-- Return a value indicating resilience
	return inp > 0;
end

-- Chapter 2 -- 
-- What Resilience Means 

-- Define a table holding various resilience values
local RESILIENCE = {
	STRENGTH = 1,
	COURAGE = 2,
	ENDURANCE = 3,
	PERSEVERANCE = 4,
	PATIENCE = 5
}

-- Define a "resilienceLevel" function
function resilienceLevel(level)
	-- Return the appropriate resilience level
	return RESILIENCE[level];
end

-- Chapter 3 --
-- Determining Resilience

-- Define a "determineResilience" function
function determineResilience(inp)
	-- Initialize a score variable
	local score = 0;

	-- Iterate over each input element
	for _, elem in ipairs(inp) do
		-- Increment the score by the resilient value
		score = score + resilient(elem);
	end

	-- Return the score
	return score;
end

-- Chapter 4 --
-- Building Resilience

-- Define a table holding various resilience-building activities
local RESILIENCE_ACTIVITIES = {
	MEDITATION = 1,
	EXERCISE = 2,
	REFLECTION = 3,
	WRITING = 4,
	DATED_GOALS = 5
}

-- Define a "resilienceActivity" function
function resilienceActivity(activity)
	-- Return the appropriate activity
	return RESILIENCE_ACTIVITIES[activity];
end

-- Chapter 5 --
-- Strategies for Resilience

-- Define a "createStrategy" function
function createStrategy(resilienceLevel)
	-- Return a table of strategies for the given level
	local strategies = {
		["low"] = {
			activity1 = "meditation",
			activity2 = "exercise"
		},
		["medium"] = {
			activity1 = "reflection",
			activity2 = "writing"
		},
		["high"] = {
			activity1 = "dated goals",
			activity2 = "exercise"
		}
	};
	return strategies[resilienceLevel];
end

-- Chapter 6 --
-- Staying on Track

-- Define a "trackProgress" function
function trackProgress(progresses) 
	-- Initialize a "steadyProgress" variable
	local steadyProgress = true;

	-- Iterate over each progress
	for _, progress in ipairs(progresses) do
		-- Check if progress is not steady
		if progress <= 0 then 
			-- Update "steadyProgress" to false
			steadyProgress = false;
			break;
		end
	end

	-- Return "steadyProgress"
	return steadyProgress;
end

-- Chapter 7 --
-- Achieving Resilience 

-- Define a "achieveResilience" function
function achieveResilience()
	-- Initialize a "resilienceAchieved" variable
	local resilienceAchieved = false;

	-- Iterate until resilience is achieved
	while not resilienceAchieved do
		-- Determine the resilience level
		local resilienceLevel = resilienceLevel(RESILIENCE.PERSEVERANCE);

		-- Create a resilience strategy 
		local strategies = createStrategy(resilienceLevel);

		-- Track progress
		local progresses = {
			resilienceActivity(strategies.activity1),
			resilienceActivity(strategies.activity2)
		};
		local steadyProgress = trackProgress(progresses);

		-- If progress is steady, set "resilienceAchieved" to true
		if steadyProgress then 
			resilienceAchieved = true;
		end
	end

	-- Return "resilienceAchieved"
	return resilienceAchieved;
end