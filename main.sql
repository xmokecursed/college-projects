-- Create Database
CREATE DATABASE school;

-- Create Table
CREATE TABLE students (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT,
    city VARCHAR(50)
);

-- Insert Data
INSERT INTO students (id, name, age, city)
VALUES (1, 'John', 20, 'Dhaka');

-- View All Data
SELECT * FROM students;

-- View Specific Columns
SELECT name, age
FROM students;

-- Filter Data
SELECT *
FROM students
WHERE age > 18;

-- Sort Data
SELECT *
FROM students
ORDER BY age DESC;

-- Update Data
UPDATE students
SET city = 'Chattogram'
WHERE id = 1;

-- Delete Data
DELETE FROM students
WHERE id = 1;

-- Count Rows
SELECT COUNT(*) AS total_students
FROM students;

-- Group By
SELECT city, COUNT(*) AS students
FROM students
GROUP BY city;

-- Inner Join
SELECT students.name, courses.course_name
FROM students
INNER JOIN courses
ON students.id = courses.student_id;

-- Highest Salary
SELECT MAX(salary)
FROM employees;

-- Lowest Salary
SELECT MIN(salary)
FROM employees;

-- Average Salary
SELECT AVG(salary)
FROM employees;

-- Total Salary
SELECT SUM(salary)
FROM employees;

-- Top 5 Rows
SELECT *
FROM employees
LIMIT 5;

-- Drop Table
DROP TABLE students;
