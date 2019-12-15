'''
 * Project Euler #19: Counting Sundays
 * 
 * You are given the following information, but you may prefer to do some research for yourself.
 * 1 Jan 1900 was a Monday.
 * Thirty days has September,
 * April, June and November.
 * All the rest have thirty-one,
 * Saving February alone,
 * Which has twenty-eight, rain or shine.
 * And on leap years, twenty-nine.
 * A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
 * 
 * How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?
 *
 * Answer: 171 
'''

from datetime import  date

t = int(input())
for i in range(t):
    d1 = [int(x) for x in input().split()]
    d2 = [int(x) for x in input().split()]

    ydiff = d2[0]-d1[0]
    d1[0] = d1[0] % 2800
    d2[0] = d1[0] + ydiff
    date1 = date(d1[0], d1[1], d1[2])
    date2 = date(d2[0], d2[1], d2[2])

    date1_o = date1.toordinal()
    date2_o = date2.toordinal()
    sundays_cnt = 0

    for d_o in range(date1_o, date2_o+1):
        d = date.fromordinal(d_o)
        if (d.weekday() == 6) and (d.day == 1):
            sundays_cnt = sundays_cnt + 1

    print(str(sundays_cnt))  