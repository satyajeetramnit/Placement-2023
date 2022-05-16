# A professional society is using a program to determine possible diverse deputations of 3 members for an upcoming conference. There are m men and wwomen who are eligible. A deputation is diverse only if it contains at least one man and at least one woman. Two deputations are considered distinct if one has a member that the other does not. Given a number of men and women, determine the number of distinct ways to select a diverse deputation of 3 people.

def diverseDeputation(m,w):
    if m==0 and w==0:
        return 0
    possible=(m+w-2)
    return (m*w*possible)//2