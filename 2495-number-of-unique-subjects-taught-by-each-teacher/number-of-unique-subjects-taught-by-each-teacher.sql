SELECT teacher_id, COUNT(Distinct(subject_id)) as cnt
FROM Teacher
Group by teacher_id;