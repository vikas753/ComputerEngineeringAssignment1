/*
 Student Name : VIKAS VYKUNTHAM VEERABATHINI 
 NU ID : 001302155
 Program : Insertion sort of Student Records in decreasing order 
 Please use g++ <filename> -o <outputfile>
 for Compilation purpose . 
 */

#include<iostream>
#include<string>
#include<vector>
using namespace std;

/* Database for holding the student names and their respective grades */
vector<string> StudentNameArray;
vector<int> GradeArray;

#define MIN_GRADE 0 
#define MAX_GRADE 100

/* API to insert student details and his grade onto the database */
bool InsertRecord(string StudentName , int grade)
{
  if((grade >= MIN_GRADE) && (grade <= MAX_GRADE))
  {
    GradeArray.push_back(grade);
    StudentNameArray.push_back(StudentName);
    return true;
  }
  else
  {
    return false;
  }
}

/* API to sort the records of students by their grades.
   We would be using insertion sort to perform the rearrangement.
   We would insert the key if it equals in comparison as well */
bool SortTheStudentRecordsByGrade()
{
  if(GradeArray.size()>0)
  {
    int i, key, j;  
    for (i = 1; i < GradeArray.size(); i++) 
    {   
      key = GradeArray[i];  
      string StudentNameHolder = StudentNameArray[i];

      j = i - 1;  
  
      /* Move elements of arr[0..i-1], that are  
         greater than key, to one position ahead  
         of their current position */

      while (j >= 0 && GradeArray[j] <= key) 
      {  
        GradeArray[j + 1] = GradeArray[j];
        StudentNameArray[j+1] = StudentNameArray[j];  
        j = j - 1;  
      }
  
      GradeArray[j + 1] = key;
      StudentNameArray[j+1] = StudentNameHolder;  
    }
    return true;
  }
  else
  {
    return false;
  }
     
}

bool DisplayStudentRecords()
{
  if(GradeArray.size() > 0)
  {
    for(int i=0;i<StudentNameArray.size();i++)
    {
      cout << " Student Name : " << StudentNameArray[i] << " Grade : " << GradeArray[i] << endl;
    }  
  }
}


int main()
{
  
  int NumRecords = 0;
  cout << " Please enter the number of records : " << endl ; 
  cin >> NumRecords ; 
  for(int i=0;i<NumRecords;i++)
  {
    string studentName ; 
    int grade = 0 ; 
    cout << " Please enter the student name : " << endl;
    cin >> studentName ; 
    cout << " Please enter the grade for " << studentName << " valid range :: 0-100 -- " << endl;
    cin >> grade ; 
    if((grade < 0) || (grade > 100))
    {
      cout << " Invalid Grade entered ! , record not inserted " << endl ;
    }
    else
    {
      InsertRecord(studentName,grade);
    }
  } 
 
  SortTheStudentRecordsByGrade();
  DisplayStudentRecords();
  return 0;
}
