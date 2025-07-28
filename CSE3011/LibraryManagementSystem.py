class student:
  collegeName = "VIT"
  def __init__(self,x,y, z = 0):
    self.name = x
    self.regno = y
    self.issue = z
  def studentDetails(self):
    print(self.name, self.regno, self.issue)


class books:
  def __init__(self,x,y,z=False):
    self.name = x
    self.id = y
    self.issued = z
  def bookDetails(self):
    print(self.name, self.id, self.issued)


class issue:
  def __init__(self,x,y,z):
    self.id = x
    self.bookID = y
    self.studentID = z
  def issueDetails(self):
    print(self.id, self.bookID, self.studentID)


class lms:
  studentList = []
  try:
    f = open("Students.txt",'r')
    for i in f:
      i = i.split(":")
      studentList.append(student(i[0],i[1],int(i[2])))
    f.close()
  except:
    pass

  bookList = []
  try:
    f = open("Books.txt",'r')
    for i in f:
      i = i.split(":")
      bookList.append(books(i[0],i[1],bool(i[2])))
    f.close()
  except:
    pass

  issueList = []
  try:
    f = open("Issues.txt",'r')
    for i in f:
      i = i.split(":")
      issueList.append(issue(i[0],i[1],i[2]))
    f.close()
  except:
    pass

  isstu = False
  isbook = False
  isissue = False

  @classmethod
  def newStudent(cls):
    name = input("Enter the name of the student : ")
    regNo = input("Enter the registration no. of the student : ")
    for i in cls.studentList:
      if i.regno == regNo:
        cls.isstu = True
        break

    if cls.isstu == True:
      print("Registration no. already added")
    else:
      cls.studentList.append(student(name,regNo))


  @classmethod
  def newBook(cls):
    name = input("Enter the name of the book : ")
    id = input("Enter the book id : ")
    for i in cls.bookList:
      if i.id == id:
        cls.isbook = True
        break

    if cls.isbook == True:
      print("Book id already added")
    else:
      cls.bookList.append(books(name, id))


  @classmethod
  def newIssue(cls):
    cls.isstu = False
    cls.isbook = False
    cls.isissue = False
    issueID = input("Enter the issue id : ")


    for i in cls.issueList:
      if i.id == issueID:
        cls.isissue = True
        break

    if cls.isissue == True:
      print("Issue id already exists")
    else:
      sID = input("Enter the reg. no. of student : ")
      bID = input("Enter the book id : ")
      for i in cls.studentList:
        if i.regno == sID:
          cls.isstu = True
          break

      for i in cls.bookList:
        if i.id == bID:
          cls.isbook = True
          break

      if cls.isstu and cls.isbook:
        cls.issueList.append(issue(issueID, bID, sID))
        for i in cls.studentList:
          if i.regno == sID:
            i.issue += 1
            break

        for i in cls.bookList:
          if i.id == bID:
            i.issued = True
            break
        print("Book issued !!")
      else:
        print("Invalid book id or student id")

  @classmethod
  def returnbook(cls):
    count = -1
    issueID = input("Enter the issue id : ")
    for i in cls.issueList:
      count = count +1
      if i.id == issueID:
        cls.issueList.pop(count)
        for j in cls.studentList:
          if j.regno == i.studentID:
            j.issue -= 1
            break
        for j in cls.bookList:
          if j.id == i.bookID:
            j.issued = False
            break
        print("Book returned !")
      if count == len(cls.issueList) - 1:
        print("Invalid issue id") 

  
  @classmethod
  def bookByName(cls):
    name = input("Enter the name of the book : ")
    for i in cls.bookList:
      if i.name.lower() == name.lower():
        i.bookDetails()
  
  @classmethod
  def bookById(cls):
    id = input("Enter the book id : ")
    for i in cls.bookList:
      if i.id == id:
        i.bookDetails()

  @classmethod
  def dispIssue(cls):
    for i in cls.issueList:
      i.issueDetails()
  
  @classmethod
  def dispStudent(cls):
    for i in cls.studentList:
      i.studentDetails()

  @classmethod
  def dispBook(cls):
    for i in cls.bookList:
      i.bookDetails()
  
  f = open("Students.txt",'w')
  for i in studentList:
    f.write(i.name + ":" + i.regno + ":" + str(i.issue) + "\n")
  f.close()

  f = open("Books.txt",'w')
  for i in bookList:
    f.write(i.name + ":" + i.id + ":" + str(i.issued) + "\n")
  f.close()

  f = open("Issues.txt",'w')
  for i in issueList:
    f.write(i.id + ":" + i.bookID + ":" + i.studentID + "\n")
  f.close()


#__main__

print("Welcome to Library Management System\n\n")

while 1:
  print("How may I help You\n\n")
  print("Enter 1 to add new student")
  print("Enter 2 to add new book")
  print("Enter 3 to issue book")
  print("Enter 4 to return book")
  print("Enter 5 to display all students")
  print("Enter 6 to display all books")
  print("Enter 7 to display all issues")
  print("Enter 8 to search book by id")
  print("Enter 9 to search book by name")
  print("Enter 10 to exit")
  c = int(input("Enter your choice : "))
  if c == 1:
    lms.newStudent()
  elif c == 2:
    lms.newBook()
  elif c == 3:
    lms.newIssue()
  elif c == 4:
    lms.returnbook()
  elif c == 5:
    lms.dispStudent()
  elif c == 6:
    lms.dispBook()
  elif c == 7:
    lms.dispIssue()
  elif c == 8:
    lms.bookById()
  elif c == 9:
    lms.bookByName()
  elif c == 10:
    print("Thank You!!")
    break
  else:
    print("Invalid choice")