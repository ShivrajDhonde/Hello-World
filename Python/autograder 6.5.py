text = "X-DSPAM-Confidence:    0.8475";
index = text.find("0")
num = text[index:index+6]
num = float(num)
print (num)