from cs50 import get_string

s = get_string("Dp you agree? ").lower()

if s in ["Y", "y", "yes"]:
    print("Agree")
elif s in ["N", "n", "no"]:
    print("Not agreed. ")
