// 1. Calculate the Simple Interest (assuming own input) and check whether it is greater than 10000 
// or not (use if statement).
// Code:
// #!/bin/bash
// # This is the first shell script
// echo "Initial principal balance: "
// read P
// echo "Annual interest rate: "
// read r
// echo "Enter duration: "
// read t
// SM=$((P * r * t))
// SM=$((SM / 100))
// echo "Simple interest is: $SM"



// 2. Display the sum of first 50 numbers using the for loop.
// Code:
// #!/bin/bash
// sum=0
// for((i =1; i<=50; i++)); do
// sum=$((sum +i))
// done
// echo "The sum of 1st fifty numbers using for loop is: $sum"


// 3. Accept and display the data through command line Arguments.
// Code:
// #!/bin/bash
// # Check if there are at least two command-line arguments
// if [ "$#" -lt 2 ]; then
// echo "Usage: $0 <argument1> <argument2>"
// exit 1
// fi
// # Access command-line arguments using $1, $2, $3, and so on
// argument1="$1"
// argument2="$2"
// # Display the arguments
// echo "First argument: $argument1"
// echo "Second argument: $argument2"P



// 4. Sort array elements in descending order.
// Code:
// #!/bin/bash
// # Define an array
// array=(9 3 7 1 5 4 8 2 6)
// # Function to sort array in descending order
// sort_descending() {
// local IFS=$'\n'
// local sorted_array=($(sort -nr <<<"${array[*]}"))
// array=("${sorted_array[@]}")
// }
// # Call the function to sort the array in descending order
// sort_descending
// # Display the sorted array
// echo "Sorted array in descending order:"
// echo "${array[@]}"

