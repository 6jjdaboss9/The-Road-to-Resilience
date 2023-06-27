// This code will demonstrate the importance of resilience when working with TypeScript.

// 1. Import the necessary libraries: 
// The TypeScript library for resilience 
import * as resilient from 'typescript-resilience';

// 2. Create a type guard function to ensure variables are of the correct type: 
function isString(obj: any): obj is string {
    return typeof obj === "string";
}

// 3. Create a test function to make sure the guard works as expected: 
function testGuard() {
    const testString = "This is a test string";
    const testNumber = 42;
    if (isString(testString)) {
        console.log("The test string is a string!");
    }
    else if (isString(testNumber)) {
        console.log("The test number is a string!"); // This should never be printed
    }
    else {
        console.log("The test objects are not strings!");
    }
}

// 4. Use the resilient library to catch exceptions from code running 
// with try/catch blocks: 
function testException() {
    try {
        const testString = "This is a test string";
        const testNumber = 42;
        const invalidString = testString + testNumber; // This should throw an exception
        console.log(invalidString);
    }
    catch (e) {
        resilient.catchException(e);
    }
}

// 5. Create a function to handle any unexpected errors: 
function handleError(ex: Error) {
    console.error("A unexpected error occurred!");
    console.error(ex);
}

// 6. Use the handleError function with the onError method from the resilient 
// library: 
function testError() {
    resilient.onError(handleError);
    const undefinedVar; // This should throw an error
}

// 7. Create a function to log any unexpected events: 
function logUnexpected(e: any) {
    console.warn("A unexpected event occurred!");
    console.warn(e);
}

// 8. Use the logUnexpected function with the onUnexpected method from 
// the resilient library: 
function testUnexpected() {
    resilient.onUnexpected(logUnexpected);

    const testString = "This is a test string";
    testString = "This should throw an unexpected event!"; // This should throw an unexpected event
}

// 9. Use the resilient library to detect and respond to any uncaught errors: 
resilient.catchUncaughtErrors();

// 10. Test all the functions to ensure everything is working as expected: 
testGuard();
testException();
testError();
testUnexpected();