import matplotlib.pyplot as plt
import numpy as np

k = 8
theta = np.linspace(0, 2*np.pi, 1000)
r = np.sin(k*theta)

x = r * np.cos(theta)
y = r * np.sin(theta)

plt.figure(figsize = (6, 6))
plt.plot(x, y, color = "purple", linewidth = 2)
plt.axis("off")
plt.title("Math Art in Code", fontsize = 14)
plt.savefig("MathArtInCode.png", bbox_inches = 'tight')
plt.show()