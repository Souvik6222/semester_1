
let sub1 = 85;
let sub2 = 92;
let sub3 = 78;
let sub4 = 88;
let sub5 = 90;

let total = sub1 + sub2 + sub3 + sub4 + sub5;
let percentage = total / 5;  


let grade;

if (percentage >= 90) {
  grade = "A";
} else if (percentage >= 80) {
  grade = "B";
} else if (percentage >= 70) {
  grade = "C";
} else if (percentage >= 60) {
  grade = "D";
} else {
  grade = "Fail";
}

console.log("Total Marks: " + total);
console.log("Percentage: " + percentage + "%");
console.log("Grade: " + grade);
