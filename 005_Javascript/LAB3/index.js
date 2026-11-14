// Task 1 : Array Operations
const arrSize = prompt('Please Enter The size of array');
let arr = [];
for (let i = 0; i < arrSize; i++) {
  do {
    arr[i] = Number(prompt('Please Enter a number'));
  } while (Number.isInteger(arr[i]) == false);
}
do {
    let userInp = prompt('Please Choose operation');

switch (userInp) {
  case 'a':
    alert(arr);
    break;
  case 'b':
    alert(arr.toSorted((a, b) => a - b));
    break;
  case 'c':
    alert(arr.toSorted((a, b) => b - a));
    break;
    case 'd': 
    alert(arr.toReversed())
    break;
    case 'e':
        let result2 = arr.filter(elm=>elm%2==0)
        if (result2.length==0){
            alert("none")
        }else{
            alert(result2)
        }
        
        break;
    case 'f':
        let divInp = Number(prompt("Please Enter a number"))
        let result = arr.filter(elm=>elm%divInp==0)
        if (result.length==0){
            alert("none")
        }else{
            alert(result)
        }
        break;
    case 'g':
        alert(arr.map(elm=>elm*0.7))
        break;
    case 'h':
        alert(arr.join('***'))
        break;
    }   
     repeat = prompt("Please enter y or n to repeat")   
} while (repeat == 'y')

    /////////////////////////////////////////////////////////////////////////////
    //Task 2 
    function countVowels(x){
        let vowels = 0
            const str = String(x).toLowerCase();  
          for(let i = 0 ; i <str.length;i++)
            if (str[i]=='a'||str[i]=='e' || str[i]=='i'|| str[i]=='o'|| str[i]=='u')
                vowels++
        
        return vowels
    }
    console.log(countVowels("ahmed is not okay"))
    
    ////////////////////////////////////////////////////////////////////////
    // task 3
    function capitalizeWord(inp){
        let capitalized = []
        for (let i = 0 ; i<inp.length;i++){
                        capitalized[i]=inp[i]

        }
        if(capitalized.length>0){
            capitalized[0]=capitalized[0].toUpperCase()
        }
        
        for (let i = 0 ; i <capitalized.length;i++){
            if(capitalized[i]==' '){
                capitalized[i+1]= capitalized[i+1].toUpperCase()
            }
        }
            return capitalized.join("")
    }
    
    console.log(capitalizeWord("ahmed byhb yl3b kora kteer"))
    function capitalizezaza(inp){
        inp.split(" ")
        console.log()
    }

////////////////////////////////////////////////////////////////////////
// task 4
function countChar(str, ch){
    let count = 0
    for (let i = 0; i < str.length; i++){
       
            count++
        
    }
    return count
}
console.log(countChar("ahmed is here",)) // 3

////////////////////////////////////////////////////////////////////////
// task 5
function countWords(str){
    let words = 0
    for (let i = 0; i < str.length; i++){
        if (str[i] != ' ' && (i == 0 || str[i-1] == ' ')){
            words++
        }
    }
    return words
}
console.log(countWords("ahmed byhb kora")) // 3

////////////////////////////////////////////////////////////////////////
// task 6 


let nameRegex = /^[A-Za-z]+( [A-Za-z]+)*$/

let userName
do {
    userName = prompt("Please enter your name")
} while (userName == null || !nameRegex.test(userName.trim()))

let mobileRegex = /^(010|011|012|015)-\d{8}$/
let mobile
do {
    mobile = prompt("Please enter your mobile like 01xxxxxxxxx")
} while (mobile == null || !mobileRegex.test(mobile))

////////////////////////////////////////////////////////////////////////
// task 7
function validateDate(dateStr){
    if (dateStr == null || dateStr.length != 10){
        return false
    }
    if (dateStr[2] != '-' || dateStr[5] != '-'){
        return false
    }
    let day = Number(dateStr.slice(0, 2))
    let month = Number(dateStr.slice(3, 5))
    let year = Number(dateStr.slice(6, 10))
    if (isNaN(day) || isNaN(month) || isNaN(year)){
        return false
    }
    let d = new Date(year, month - 1, day)
    if (d.getDate() != day || d.getMonth() != month - 1 || d.getFullYear() != year){
        return false
    }
    return true
}
console.log(validateDate('01-08-2000'))

function getDayName(dateStr){
    let days = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]
    let day = Number(dateStr.slice(0, 2))
    let month = Number(dateStr.slice(3, 5))
    let year = Number(dateStr.slice(6, 10))
    let d = new Date(year, month - 1, day)
    return days[d.getDay()]
}

console.log(getDayName('01-08-2000'))

function calcAge(dateStr){
    let day = Number(dateStr.slice(0, 2))
    let month = Number(dateStr.slice(3, 5))
    let year = Number(dateStr.slice(6, 10))

    let now = new Date()
    let years = now.getFullYear() - year
    let months = (now.getMonth() + 1) - month
    let days = now.getDate() - day

    if (days < 0){
        months--
        days += new Date(now.getFullYear(), now.getMonth(), 0).getDate()
    }
    if (months < 0){
        years--
        months += 12
    }
    return years + " years, " + months + " months, " + days + " days"
}
console.log(calcAge('13-08-2000'))

let birth = prompt("Please enter your birth date DD-MM-YYYY")
if (validateDate(birth)){
    let day = Number(birth.slice(0, 2))
    let month = Number(birth.slice(3, 5))
    let year = Number(birth.slice(6, 10))
    alert(new Date(year, month - 1, day).toDateString())
    alert("You were born on " + getDayName(birth))
    alert("Your age is " + calcAge(birth))
} else {
    alert("Wrong Date Format")
}
