
//Qno1//
//using System;
// namespace R_Prime
// {
//     class Program
//     {
//         static void Main(string[] args)
//         {
//             Console.WriteLine("Enter a number: ");
//             int number = int.Parse(Console.ReadLine());
//             Console.WriteLine("You entered {0}", number);
//             bool isPrime = true;
//             for (int i = 2; i < number; i++)
//             {
//                 if (number % i == 0)
//                 {
//                     isPrime = false;
//                     break;
//                 }
//             }
//             if (isPrime)
//             {
//                 Console.WriteLine("{0} is prime", number);
//             }
//             else
//             {
//                 Console.WriteLine("{0} is not a prime number", number);
//             }
//         }
//     }
// }
//-----------QNO3-----------//
// using System;

// // Custom exception
// public class NameTooLongException : Exception
// {
//     public NameTooLongException(string message) : base(message)
//     {
//     }
// }

// class Program
// {
//     static void Main()
//     {
//         Console.Write("Enter your name: ");
//         string name = Console.ReadLine();

//         try
//         {
//             if (name.Length > 12)
//             {
//                 // throw new Exception("Name cannot be longer than 12 characters."); // Original exception
//                 throw new NameTooLongException("Name cannot be longer than 12 characters."); // Custom exception
//             }
//             Console.WriteLine($"Hello, {name}!");
//         }
//         catch (NameTooLongException ex)
//         {
//             Console.WriteLine($"Error: {ex.Message}");
//         }
//     }   
// }
//-----QNO5-----//
// using System;
// using System.IO;

// class Program
// {
//     static void Main()
//     {
//         Console.Write("Enter your name: ");
//         string name = Console.ReadLine();

//         Console.Write("Enter your semester: ");
//         string semester = Console.ReadLine();

//         string filePath = "student_file.txt";

//         StreamWriter writer = new StreamWriter(filePath);
//         writer.WriteLine($"Name: {name}");
//         writer.WriteLine($"Semester: {semester}");
//         writer.Close();

//         Console.WriteLine("Student information has been written to 'student_file.txt'.");

//         // Now read the name back from the file
//         StreamReader reader = new StreamReader(filePath);
//         string readName = reader.ReadLine();
//         string readSemester = reader.ReadLine();

//         Console.WriteLine("Data read from file:");
//         Console.WriteLine(readName);
//         Console.WriteLine(readSemester);
//         reader.Close();
//     }
// }
//----------QNO7-------------//
// using System;
// using System.Linq;

// class Program
// {
//     static void Main()
//     {
//         string[] countries = { "Nepal", "India", "Netherlands", "Norway", "Nigeria" };

//         var result =
//             from c in countries
//             where c.StartsWith("N")
//             select c;

//         foreach (var c in result)
//             Console.WriteLine(c);
//     }
// }

