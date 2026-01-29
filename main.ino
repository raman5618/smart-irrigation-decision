soil_moisture = 28
temperature = 36

if soil_moisture < 30 and temperature > 35:
    decision = "Motor ON"
else:
    decision = "Motor OFF"

print(decision)
