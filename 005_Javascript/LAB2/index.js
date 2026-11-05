/////// Question 1 Tip of the day 
const tips = [
  "Use let and const instead of var to prevent scope-related bugs and reassignment issues.",
  "Prefer strict equality (===) over loose equality (==) to avoid unexpected type coercion.",
  "Use template literals with backticks for cleaner string interpolation and multi-line strings.",
  "Leverage the spread operator (...) to easily copy arrays, merge objects, or pass function arguments.",
  "Use optional chaining (?.) to safely access nested object properties without throwing errors if a value is null or undefined.",
  "Use the nullish coalescing operator (??) to provide default values only when the left side is null or undefined, unlike || which triggers on any falsy value.",
  "Write concise arrow functions for shorter syntax and to preserve the lexical this context.",
  "Use destructuring assignment to extract values from arrays or properties from objects into distinct variables.",
  "Utilize async/await for asynchronous operations to write cleaner, more readable code than promise chaining.",
  "Use map() and filter() for array transformations and filtering instead of traditional loops for more intent-driven code."
];
let tipOfTheDay = tips[Math.floor(Math.random()*10)]
console.log("Tip of The Day: ",tipOfTheDay)

///////////////////////////////////////////////////////////////////////////////
// Students grades

const grades = [60,100,10,15,85]
let succededStudents=grades.filter(elm=> elm>=50)
console.log(succededStudents)
//////////////////////////////////////////
const avgGrade=(sum,elm)=>sum+elm
let avgGrades=grades.reduce(avgGrade,0)/grades.length
 console.log(avgGrades)   
////////////////////////////////////////////////////////

const descendingOrder=(a,b)=>b-a
let sortedGrades = grades.toSorted(descendingOrder)
console.log(sortedGrades)
console.log(grades)
// lw kema la function rg3t postive bt7ot b abl a 

/////////////////////////////////////////////////////////
let highestStudent= sortedGrades.findIndex(max=>max<=100)
console.log("The Highest student is at index: ",highestStudent)
////////////////////////////////////////////////////
 
const lowerThan60 = function(){
    grades.forEach(elm=>{
    if (elm<60)
        console.log(elm)
})
}
lowerThan60()

/////////////////////////////////////////////////////////////////////////////////////////////////
// Students Data 
const student = [
    {
        name: "Ahmed",
        age:   26,
        grades:[95,85,85,70],
        printInfo: function(){
            console.log(`Here is the student data:
                Name: ${this.name}
                age:${this.age}
                grades:${this.grades}`)
        }
        
    },{
    name: "Ibrahim",
        age:   25,
        grades:[95,60,85,60],
        printInfo: function(){
            console.log(`Here is the student data:
                Name: ${this.name}
                age:${this.age}
                grades:${this.grades}`)
        }
        
    },{
    name: "Hani",
        age:   25,
        grades:[95,70,30,60],
        printInfo: function(){
            console.log(`Here is the student data:
                Name: ${this.name}
                age:${this.age}
                grades:${this.grades}`)
        }
        
    },{
    name: "Hazem",
        age:   25,
        grades:[95,70,20,15],
        printInfo: function(){
            console.log(`Here is the student data:
                Name: ${this.name}
                age:${this.age}
                grades:${this.grades}`)
        }
        
    }
    ]
    
    console.log(student[2].printInfo())
    //////////////////////////////////////////////////////////////
    
    let superStudent = student.find(s=> s.grades.some(elm=>elm>=90)).name
    console.log(superStudent)
    
    let names = student
    .filter(s=>s.grades.some(g=>g<60))
    .map(elm=>elm.name)
    
    console.log(names)
    ///////////////////////////////////////////////////////////////////////
    student.push({
        name: "karem",
        age:   25,
        grades:[95,16,20,15],
        printInfo: function(){
            console.log(`Here is the student data:
                Name: ${this.name}
                age:${this.age}
                grades:${this.grades}`)
        }
        
    })
    console.log('students after pushing')
    
    student.forEach(elm=>elm.printInfo())
    //////////////////////////////////////////////////////////////////////
    student.pop()
        console.log('students after popping')

    student.forEach(elm=>elm.printInfo())
    
    /////////////////////////////////////////////////////////////////
    student.sort((a,b)=>{
        if(a.name<b.name) return -1
        else if (a.name>b.name) return 1
    })
    console.log(student)
    /////////////////////////////////////////////////////////////////
    student.splice(2,0,{
        name: "elhassan",
        age:   25,
        grades:[95,16,20,15],
        printInfo: function(){
            console.log(`Here is the student data:
                Name: ${this.name}
                age:${this.age}
                grades:${this.grades}`)
        }
    },{ name: "mohamed",
        age:   25,
        grades:[95,16,20,15],
        printInfo: function(){
            console.log(`Here is the student data:
                Name: ${this.name}
                age:${this.age}
                grades:${this.grades}`)
        }})
        //////////////////////////////////////////////////////////

        student.splice(3,1)
        
        
       let avgArr= student.map(
        elm=> {return{name:elm.name,
           avg: elm.grades.reduce((sum,g)=>sum+=g,0)/elm.grades.length}})
       console.log(avgArr)
        
       ///////////////////////////////////////////////////////
       // Question 4 
       const students = [
{
name: "Ahmed",
grades: [85, 90, 78],
attendance: [true, true, true, false, true]
},
{
name: "Sara",
grades: [60, 55, 70],
attendance: [true, false, false, true, false]
},
{
name: "Omar",
grades: [95, 92, 88],
attendance: [true, true, true, true, true]
},
{
name: "Lina",
grades: [45, 50, 58],
attendance: [true, false, true, false, true]
}
];

let attPercentage=students.map(elm=>{
     
   return {
    name: elm.name,
    attPercentage: elm.attendance.reduce((att,day)=>{
        if (day){att+=1}
        return att
    },0)/elm.attendance.length*100}
}
    )
    
    students.forEach(elm=>
        elm.attendanceRate = elm.attendance.reduce((att,day)=>{
        if (day){att+=1}
        return att
    },0)/elm.attendance.length*100
    )
console.log(students)

 let lessThan75 = students.filter(elm=> elm.attendanceRate<75)
 .map(elm=>elm.name)    
 
 console.log(lessThan75)
 ///////////////////////////////////////
 let moreThan75 = students.filter(elm=> elm.attendanceRate>75)
 let highStudent = moreThan75.reduce((curr,next)=>{
    if (curr.attendanceRate<next.attendanceRate){
        curr = next
    }
    return curr
 },moreThan75[0]).name
 console.log(moreThan75)  
 console.log("Highest student: ",highStudent)
 ///////////////////////////////////////////
 students.forEach(elm=>elm.avgGrade
    = Math.round(elm.grades.reduce((sum,g)=>sum+=g,0)/elm.grades.length))
    console.log(students)
 let honorBadge = students.filter(elm=>elm.attendanceRate>90).filter(elm=>elm.avgGrade>85).map(elm=>elm.name)
 
 console.log("Students with honor badge: ",honorBadge)
 ////////////////////////////////////////////////////////////////////////
 // Question 5
 const courses = [
{
courseName: "JavaScript",
instructor: "Mr. Smith",
students: [
{ name: "Ahmed", grades: [80, 90, 85] },
{ name: "Sara", grades: [60, 65, 70] },
{ name: "Omar", grades: [95, 92, 88] }
]
},
{
courseName: "Databases",
instructor: "Ms. Johnson",
students: [
{ name: "Lina", grades: [55, 58, 60] },
{ name: "Yousef", grades: [72, 75, 78] },
{ name: "Mona", grades: [88, 90, 92] }
]
}
]

courses.forEach(elm=>elm.students.forEach(st=>{
    st.avgGrade=Math.round(st.grades.reduce((sum,g)=>sum+=g,0)/st.grades.length)
}))
// console.log(courses)
/////////////////////////////////////////////////////////////////////
courses.forEach(elm=>elm.courseAvg = Math.round(elm.students.reduce((sum,st)=>sum+=st.avgGrade,0)/elm.students.length))

// console.log(courses)

let avgHigherThan70 = courses.filter(elm=>elm.courseAvg>70)
console.log(avgHigherThan70)
///////////////////////////////////////////
let lowLvl = courses.flatMap(elm=>{
    return elm.students.filter(st=>
    {
       return st.avgGrade<elm.courseAvg
    }
    )
}).map(elm=>elm.name)
console.log(lowLvl)
//////////////////////////////////
let sortedLowLvl = lowLvl.sort()
console.log(sortedLowLvl)
