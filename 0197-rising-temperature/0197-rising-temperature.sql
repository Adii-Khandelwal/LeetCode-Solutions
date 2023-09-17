# Write your MySQL query statement below
# select id from weather where weather.temperature
select w.id from weather w , weather w1 where datediff(w.recordDate,w1.recordDate) = 1 and w.temperature > w1.temperature
# NEW THING LEARNT , DATEDIFF XXXXXXXXX