import numpy as np
import matplotlib.pyplot as plt

def scale_2d(vertices, sx, sy):
    """
    Scales a 2D object given its vertices and scaling factors.
    Vertices: Nx2 numpy array [[x1, y1], [x2, y2], ...]
    """
    # Scaling matrix
    scaling_matrix = np.array([[sx, 0],
                               [0, sy]])
    
    # Apply transformation: V_new = V_old * S_transpose
    # (Using dot product of vertices and matrix transpose for proper multiplication)
    scaled_vertices = np.dot(vertices, scaling_matrix.T)
    return scaled_vertices

# 1. Define original shape (a triangle)
original_vertices = np.array([[1.0, 1.0], [2.0, 3.0], [3.0, 1.0]])

# 2. Define scaling factors
sx, sy = 2.0, 1.5  # Scale x by 2, y by 1.5

# 3. Perform scaling
scaled_vertices = scale_2d(original_vertices, sx, sy)

# 4. Visualization
def plot_poly(vertices, color, label):
    # Close the polygon by repeating the first point
    v = np.vstack([vertices, vertices[0]])
    plt.plot(v[:,0], v[:,1], color=color, label=label)
    plt.fill(v[:,0], v[:,1], color=color, alpha=0.3)

plt.figure()
plot_poly(original_vertices, 'blue', 'Original')
plot_poly(scaled_vertices, 'red', 'Scaled')
plt.legend()
plt.grid(True)
plt.axis('equal')
plt.title(f'2D Scaling (Sx={sx}, Sy={sy})')
plt.show()
