class Employee:
  __company = "Asort" #class variable
  def __init__(self, name, salary):
    self.name=name
    self.__salary=salary # private variable

  def setCompany(self, comp):
    self.__company = comp

  def getCompany(self):
    return self.__company

  def getSalary(self):
    return self.__salary
  
  def setAge(self,age):
    self.__age = age
  
  def getAge(self):
    return self.__age

class Developer(Employee):
  def setDept(self, dept):
    self.dept=dept

  def __getDept(self):
    # try for a private method
    return self.dept

emp1 = Employee("Omkar Kulkarni",6586765)
emp2 = Employee("Random Kulkarni",6586365)
emp1.setCompany("Dell")
print(emp1.getCompany(), emp2.getCompany(), Employee.getCompany(emp2))
# emp1.setAge(30)
# print(emp1.getAge(), emp1.name)

omkar = Developer("Omkar",21)
omkar.setDept("SDE1")
# print(omkar.dept)