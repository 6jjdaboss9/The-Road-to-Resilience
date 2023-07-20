%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% The Road to Resilience: A Matlab code to Demonstrate Resilience

clear all
clc

% Step 1: Establish a Baseline

% Set the number of random variables 
num_variables = 50;

% Generate random variables
Baseline_Vector = rand(1, num_variables); 

% Plot the baseline
figure; 
plot(Baseline_Vector);
xlabel('Variables');
ylabel('Values');
title('Baseline');

% Step 2: Introduce Perturbations

% Create a randomly perturbed version of the Baseline
Perturb_Vector = Baseline_Vector + 0.1 * randn(1, num_variables);

% Plot the perturbed version
figure;
plot(Perturb_Vector);
xlabel('Variables');
ylabel('Values');
title('Perturbed Vector');

% Step 3: Calculate Differences

% Calculate the absolute difference between the Baseline and Perturb
Diff_Vector = abs(Baseline_Vector - Perturb_Vector);

% Plot the difference
figure;
plot(Diff_Vector);
xlabel('Variables');
ylabel('Absolute Value of Difference');
title('Difference Vector');

% Step 4: Sum Differences

% Sum the absolute differences
Sum_Differences = sum(Diff_Vector);
disp(['Sum of Absolute Difference = ' num2str(Sum_Differences)]);

% Step 5: Compare Sums

% Generate a second random vector to compare
Random_Vector = rand(1,num_variables);

% Calculate the differences between the Baseline and the Random
Diff_Random = abs(Baseline_Vector - Random_Vector);

% Sum the absolute differences 
Sum_Random = sum(Diff_Random);
disp(['Sum of Random Difference = ' num2str(Sum_Random)]);

% Compare the Sums 
if Sum_Differences > Sum_Random
   disp('Baseline is more resilient.');
elseif Sum_Differences < Sum_Random
   disp('Baseline is less resilient.');
elseif Sum_Differences == Sum_Random
   disp('Baseline and Random are equally resilient.');
end

% Step 6: Store Resilience Values

% Create an empty vector to track resilience
Resilience_Vector = zeros(1,num_variables);

% Calculate resilience for each variable
for n = 1:num_variables
   Resilience_Vector(n) = Diff_Random(n)/Diff_Vector(n); 
end

% Step 7: Plot Resilience

% Plot the Resilience Vector
figure;
plot(Resilience_Vector);
xlabel('Variables');
ylabel('Resilience');
title('Resilience Vector');

% Step 8: Assess Variables

% Set a threshold for minimum resilience
threshold = 0.9;

% Scan Resilience Vector for variables at or below the threshold
low_resilience_variables = Resilience_Vector <= threshold;

% Report the low resilience variables
disp(['Variables with Low Resilience: ' num2str(find(low_resilience_variables))]);

% Step 9: Adjust Perturb Vector

% Increase the strength of perturbation on low resilience variables 
Perturb_Vector(low_resilience_variables) = Perturb_Vector(low_resilience_variables) + 0.2;

% Replot the perturbed vector
figure;
plot(Perturb_Vector);
xlabel('Variables');
ylabel('Values');
title('Adjusted Perturbed Vector');

% Step 10: Re-calculate Differences

% Calculate the absolute difference between the Baseline and Perturb
Diff_Vector_new = abs(Baseline_Vector - Perturb_Vector);

% Plot the difference
figure;
plot(Diff_Vector_new);
xlabel('Variables');
ylabel('Absolute Value of Difference');
title('New Difference Vector');

% Step 11: Re-Sums Differences

% Sum the absolute differences
Sum_Differences_new = sum(Diff_Vector_new);
disp(['Sum of Absolute Difference = ' num2str(Sum_Differences_new)]);

% Compare the original sum and the new sum
if Sum_Differences_new > Sum_Differences
   disp('Baseline is more resilient.');
elseif Sum_Differences_new < Sum_Differences
   disp('Baseline is less resilient.');
elseif Sum_Differences_new == Sum_Differences
   disp('Baseline is equally resilient.');
end