from PIL import Image, ImageFilter

before = Image.open("bridge.bpm")
after before.filter(ImageFilter.FIND_EDGES)
after.save("out.bpm")