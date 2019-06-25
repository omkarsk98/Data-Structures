t = int(input())
while(t > 0):
    t -= 1
    n = int(input())
    arrivals = list(map(int,input().split()))
    depts = list(map(int,input().split()))
    arrivals.sort()
    depts.sort()
    guests_in = 1; 
    max_guests = 1
    time = arrivals[0]
    i = 1  
    j = 0
    while (i < n and j < n): 
        if (arrivals[i] <= depts[j]):
            guests_in = guests_in + 1; 
            if(guests_in > max_guests):
                max_guests = guests_in; 
                time = arrivals[i]; 
            i = i + 1;  
        else: 
            guests_in = guests_in - 1; 
            j = j + 1; 

    print(max_guests,time)