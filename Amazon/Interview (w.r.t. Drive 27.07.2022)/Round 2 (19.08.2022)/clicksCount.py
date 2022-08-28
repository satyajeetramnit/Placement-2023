# You are given a list of domains and the number of clicks each domain got. 
# Return the total number of clicks for each subdomain.

# Example:
# Example
# Input: ["900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"]
# Output: ["901 mail.com", "50 yahoo.com","900 google.mail.com", "5 wiki.org", "5 org", "1 intel.mail.com","951 com"]

# A website domain "google.mail.com" consists of various subdomains. At the top level, 
# we have "com", at the next level, we have "mail.com" and at the lowest level, "google.mail.com". 
# When we visit a domain like "google.mail.com", we will also visit the parent domains "mail.com" and "com" implicitly.

from collections import defaultdict

def subdomainVisits(domains):
	cnt = defaultdict(int)
	for d in domains:
		n, d = d.split(' ')
		c, d = '', d.split('.')
		for _ in range(len(d)):
			c = d.pop()+'.'+c
			cnt[c] += int(n)
	return [str(cnt[k])+' '+k[:-1] for k in cnt]

# Approach:
# 1. Create a dictionary to store the count of each domain
# 2. Iterate through the list of domains and split the domain into subdomains by using split('.') 
# 3. Add the count of the domain to the count of the subdomain
# 4. Return the count of each subdomain


input=["900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"]
print(subdomainVisits(input))
