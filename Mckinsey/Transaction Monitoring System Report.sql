/*
Enter your query below.
Please append a semicolon ";" at the end of the query
*/
SELECT  result1.sender,
        Count(result1.completed)            AS transactions,
        Group_concat(DISTINCT result1.NAME) AS currencies
FROM    (
            SELECT  currencies.code,
                    currencies.NAME,
                    transactions.sender,
                    transactions.completed
            FROM       currencies
            INNER JOIN transactions
            where      currencies.code=transactions.currency_code) AS result1
INNER JOIN monitor
WHERE      result1.sender=monitor.iban
AND        result1.completed="yes"
GROUP BY   result1.sender;