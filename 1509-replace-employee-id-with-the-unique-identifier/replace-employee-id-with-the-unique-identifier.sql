select u.unique_id , e.name 
from  Employees e LEFT JOIN EmployeeUNI u
ON u.id=e.id;