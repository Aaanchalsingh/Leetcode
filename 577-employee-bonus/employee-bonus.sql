SELECT p.name, b.bonus
FROM Employee p LEFT JOIN Bonus  b
ON p.empId=b.empId
where bonus < 1000 OR Bonus IS NULL;