import twophase.solver as sv

# Opening and receiving file input
#with open('cube_state.txt', 'r') as file:
    #cube_string = file.read().strip()

# Verifying correct input
#if len(cube_string) != 54:
    #print("Invalid cube state.")
    #exit(1)

cube_string = "ULLLUFRBLUUUDRRBLRDDFBFRLDDFFLBDFDRUBDFLLRBUDBURFBBFUR"

# Running algorithm
solution = sv.solve(cube_string, timeout=120)
print(solution)

# Outputting solution to text file
with open('fileRead.txt', 'w') as file:
    file.write(solution)