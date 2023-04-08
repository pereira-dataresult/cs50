from PIL import Image, ImageFilter

before = Image.opnen("bridge.bpm")
after = before.filter(ImageFilter.BoxBlur(1))
after.save("out.bpm")