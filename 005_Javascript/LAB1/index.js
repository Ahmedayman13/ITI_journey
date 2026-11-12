// experiment A, step 1: print BEFORE the declaration
console.log(number1) // undefined (hoisting: declaration moves up, value doesn't)
console.log(number2) // undefined
console.log(number3) // undefined

// number variables
var number1 = 3
var number2 = 2.9
var number3 = 0xff // hexadecimal 255

// string variables
var firstName = "Ahmed"
var middleName = "Ayman"
var lastName = "Tantawy"

// boolean flag
var flag = true

console.log("This is the External Javascript file")