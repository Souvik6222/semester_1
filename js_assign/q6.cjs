
let tempCelsius = 28; 


if (tempCelsius < 0) {
    console.log("Freezing Cold");
} else if (tempCelsius >= 0 && tempCelsius <= 15) {
    console.log("Very Cold");
} else if (tempCelsius >= 16 && tempCelsius <= 25) {
    console.log("Cold");
} else if (tempCelsius >= 26 && tempCelsius <= 35) {
    console.log("Warm");
} else {
    console.log("Hot");
}
