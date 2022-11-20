Select Orders.orderId, Customers.customerName, Orders.orderDate
from orders Full Outer Join customers 
On orders.orderId = customers.orderId

select orders.orderId, employees.firstName, employees.lastName
 from orders right join employees on orders.orderID = employees.employeeID


 SELECT Orders.OrderID, Employees.LastName, Employees.FirstName
FROM Orders
RIGHT JOIN Employees ON Orders.EmployeeID = Employees.EmployeeID
ORDER BY Orders.OrderID;