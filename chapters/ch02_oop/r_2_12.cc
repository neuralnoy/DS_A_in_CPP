// Generalize the Person-Student class hierarchy to include classes Faculty,
// UndergraduateStudent, GraduateStudent, Professor, Instructor. Explain
// the inheritance structure of these classes, and derive some appropriate
// member variables for each class.
//
// Answer:
//
//

// ---
//
// ### **Inheritance Structure**
//
// ```
//           Person
//          /      \
//     Student     Faculty
//    /       \         \
// Undergrad  Graduate   Instructor/Professor
// ```
//
// * **Person**: Base class for everyone in the system.
// * **Student**: Derived from `Person`. Common functionality for all students.
//
//   * **UndergraduateStudent**: Derived from `Student`. Specific to
//   undergraduate programs.
//   * **GraduateStudent**: Derived from `Student`. Specific to graduate
//   programs (Master’s, PhD, etc.).
// * **Faculty**: Derived from `Person`. Represents teaching staff.
//
//   * **Instructor**: Derived from `Faculty`. May focus on teaching
//   undergraduate or general courses.
//   * **Professor**: Derived from `Faculty`. Often responsible for research and
//   graduate supervision.
//
// ---
//
// ### **Member Variables (Attributes)**
//
// **1. Person**
//
// * `name` (string)
// * `dob` (date of birth)
// * `address` (string)
// * `email` (string)
//
// **2. Student (Person)**
//
// * `student_id` (string)
// * `major` (string)
// * `enrollment_year` (int)
// * `gpa` (float)
//
// **3. UndergraduateStudent (Student)**
//
// * `year` (int) — e.g., freshman, sophomore
// * `minor` (string) — optional
// * `credits_completed` (int)
//
// **4. GraduateStudent (Student)**
//
// * `program` (string) — e.g., MSc, PhD
// * `thesis_topic` (string)
// * `advisor` (Professor reference)
//
// **5. Faculty (Person)**
//
// * `employee_id` (string)
// * `department` (string)
// * `office_number` (string)
// * `salary` (float)
//
// **6. Instructor (Faculty)**
//
// * `courses_taught` (list of strings)
// * `teaching_load` (int) — number of courses per semester
//
// **7. Professor (Faculty)**
//
// * `research_area` (string)
// * `advisees` (list of GraduateStudent references)
// * `publications` (list of strings)
//
// ---
//
// ### **Explanation**
//
// * `Person` is the root class because all members (students and faculty) share
// personal information.
// * `Student` and `Faculty` branch from `Person` because they share common
// attributes specific to their roles (IDs, department, GPA, courses, etc.).
// * Specialized subclasses (`UndergraduateStudent`, `GraduateStudent`,
// `Instructor`, `Professor`) extend their parent classes with more
// role-specific information.
//
// This design avoids duplication, allows easy extension, and clearly separates
// responsibilities of each class.
//
// ---
//

int main() {
  // dummy main
  return 0;
}
