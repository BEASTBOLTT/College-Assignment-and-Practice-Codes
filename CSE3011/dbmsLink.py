import mysql.connector

conn = mysql.connector.connect(user = 'root', passwd = 'fcty', host = 'localhost')

cursorObject = conn.cursor()

cursorObject.execute("Create Database CWP")
cursorObject.execute("use CWP")
cursorObject.execute("Create table students(sID int, Name VARCHAR(55), DOB varchar(55))")
cursorObject.execute("Insert into students values(123, abc, 10.10.2010)")
cursorObject.execute("Insert into students values(456, def, 11.11.2011)")
cursorObject.execute("Insert into students values(789, ghi, 12.12.2012)")
cursorObject.execute("Insert into students values(012, jkl, 01.01.2013)")
cursorObject.execute("Select * from students")
rows = cursorObject.fetchall()
for row in rows:
    print(row)
cursorObject.close()
conn.commit()
conn.close()