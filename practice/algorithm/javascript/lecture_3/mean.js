const stat1 = [ 2, 8, 7, 6, 5, 6, 4]; // First Data

const stat2 = [ 9, 2, 8, 7, 6, 5, 6, 4]; // Second Data

const reducer = ( accu, currentValue) => accu + currentValue;

// Sum of First Data
console.log("The raw data :");
console.log(stat1);
console.log("Mean :");
console.log(stat1.reduce(reducer)/stat1.length);

// Sum of Second Data
console.log("The raw data :");
console.log(stat2);
console.log("Mean :");
console.log(stat2.reduce(reducer)/stat2.length);