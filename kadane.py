def kadane(array, arr_size):  

    maxStarting = array[0] 

    maxEnding = 0  
  
    for n in range(0, arr_size): 

        maxEnding = maxEnding + array[n]  
  
        if maxEnding < 0:  

            maxEnding = 0  
          
        elif (maxStarting < maxEnding):  

            maxStarting = maxEnding  
              
    return maxStarting  

array = [-5, -1, 2, -3, -2, 4, 6]  
 
print("Maximum Subarray Sum:", kadane(array, len(array))) 