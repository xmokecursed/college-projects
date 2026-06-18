const x = parseFloat(prompt("Enter 1st number:"));
const y = parseFloat(prompt("Enter 2nd number:"));
const f = prompt("Enter function (+, -, *, /):");

if (f === "+") {
    console.log("Answer:", x + y);
} else if (f === "-") {
    console.log("Answer:", x - y);
} else if (f === "*") {
    console.log("Answer:", x * y);
} else if (f === "/") {
    if (y !== 0) {
        console.log("Answer:", x / y);
    } else {
        console.log("Cannot divide by zero");
    }
} else {
    console.log("Invalid function");
}
