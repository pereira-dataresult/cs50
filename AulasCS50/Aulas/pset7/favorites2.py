import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = {}
    for row in reader:
        favorite = row["genres"]
        if favorite in counts:
            counts[favorite] += 1
        else:
            counts[favorite] = 1

    def get_value(genres):
        return counts[genres]

    for favorite in sorted(counts, key=get_value, reverse=False):
        print ( f"{favorite}: {counts[favorite]}")
