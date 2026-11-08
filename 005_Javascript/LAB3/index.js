// // Task 1 : Array Operations
// const arrSize = prompt('Please Enter The size of array');
// let arr = [];
// for (let i = 0; i < arrSize; i++) {
//   do {
//     arr[i] = Number(prompt('Please Enter a number'));
//   } while (Number.isInteger(arr[i]) == false);
// }
// do {
//     let userInp = prompt('Please Choose operation');

// switch (userInp) {
//   case 'a':
//     alert(arr);
//     break;
//   case 'b':
//     alert(arr.toSorted((a, b) => a - b));
//     break;
//   case 'c':
//     alert(arr.toSorted((a, b) => b - a));
//     break;
//     case 'd': 
//     alert(arr.toReversed())
//     break;
//     case 'e':
//         let result2 = arr.filter(elm=>elm%2==0)
//         if (result2.length==0){
//             alert("none")
//         }else{
//             alert(result2)
//         }
        
//         break;
//     case 'f':
//         let divInp = Number(prompt("Please Enter a number"))
//         let result = arr.filter(elm=>elm%divInp==0)
//         if (result.length==0){
//             alert("none")
//         }else{
//             alert(result)
//         }
//         break;
//     case 'g':
//         alert(arr.map(elm=>elm*0.7))
//         break;
//     case 'h':
//         alert(arr.join('***'))
//         break;
//     }   
//      repeat = prompt("Please enter y or n to repeat")   
// } while (repeat == 'y')

//     /////////////////////////////////////////////////////////////////////////////
//     //Task 2 
//     function countVowels(x){
//         let vowels = 0
//             const str = String(x).toLowerCase();  
//           for(let i = 0 ; i <str.length;i++)
//             if (str[i]=='a'||str[i]=='e' || str[i]=='i'|| str[i]=='o'|| str[i]=='u')
//                 vowels++
        
//         return vowels
//     }
//     console.log(countVowels("ahmed is not okay"))
    
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


