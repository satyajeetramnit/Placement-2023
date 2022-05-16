-- A restaurant is visited by various customers during a day At the same time, the restaurant is advertising to increase customer revenue. Write an SQL query to compute the moving average of how much customers spent over a window of 7 days (current day and 6 days before) to analyze their business growth. The output should contain three columns (visited on amount avg amountlang over 7 days)

with cl as
(SELECT visited_on, sum(amount) as amount
from CUSTOMERS group by visited_on),
Bvc2 as select visited_on,
        amount,
        avg(amount) over (order by visited_on rows between 6 preceding and current row) as average_amount,
        row_number() over (order by visited on) as rowsn from cl
select visited_on, amount, average_amount from c2