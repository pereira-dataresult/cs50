import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    drama, comedy, action = 0, 0, 0
    for row in reader:
        favorite = row["genres"]
        if favorite == "Drama":
            drama += 1
        elif favorite == "Comedy":
            comedy += 1
        elif favorite == "Action":
            action += 1

print ( f"Drama: {drama}")
print ( f"Comedy: {comedy}")
print ( f"Action: {action}")
