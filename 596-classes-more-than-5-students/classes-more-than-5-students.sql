SELECT class 
FROM Courses
GROUP BY class
Having Count(student) >= 5;

