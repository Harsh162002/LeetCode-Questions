SELECT name AS customers
FROM customers
WHERE id NOT IN
        (SELECT customerID
        FROM orders);