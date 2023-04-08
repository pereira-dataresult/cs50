import csv


titles = {}
# same as titles = dict()

# The "r" is for "read mode"
with open("TVShows.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        title = row["title"].strip().upper()
        if title in titles:
            titles[title] += 1
        else:
            titles[title] = 1

# Antes:
#def f(title):
    #return titles[title]
# Abaixo, key = f

# Depois, com lambda:
for title in sorted(titles, key=lambda title: titles[title], reverse=True):
    print(title, titles[title])