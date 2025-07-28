import pymysql as msdb

con = msdb.connect(host = 'localhost', user = 'root', passwd ="xdthg", port = 3306)
if con.open:
    print("Connected to database")
else:
    print("Failed to connect to database")

cu = con.cursor()
cu.execute("use python")
cu.execute("create table students(id int primary key, name varchar(55), email varchar(255))")
query = ("insert into students (id, name, email) values(%s, %s, %s)")
val = (123,"abc", "wed")
cu.execute(query, val)
val = (456,"erf", "gtr")
cu.execute(query, val)
val = (789,"tgr", "wedfd")
cu.execute(query, val)
val = (101,"pog", "bghi")
cu.execute(query, val)
val = (112,"bgr", "igh")
cu.execute(query, val)
cu.execute("Select * from students")
r = cu.fetchall()
for i in r:
    print(i)
