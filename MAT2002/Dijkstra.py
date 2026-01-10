import networkx as nx
import matplotlib.pyplot as plt
import heapq

def dijkstra(graph, start_node):
    """
    Implements Dijkstra's algorithm to find the shortest path from a start node to all other nodes.

    Args:
        graph (dict): A dictionary representing the graph where keys are nodes and values are
                      dictionaries of neighbors and their edge weights.
        start_node: The starting node for the algorithm.

    Returns:
        tuple: A tuple containing two dictionaries:
               - distances: Shortest distance from the start node to every other node.
               - previous_nodes: The previous node in the shortest path for each node.
    """
    # Initialize distances to all nodes as infinity, except for the start node which is 0
    distances = {node: float('infinity') for node in graph}
    distances[start_node] = 0

    # Priority queue to store (distance, node)
    priority_queue = [(0, start_node)]

    # Dictionary to store the path
    previous_nodes = {node: None for node in graph}

    while priority_queue:
        # Get the node with the smallest distance
        current_distance, current_node = heapq.heappop(priority_queue)

        # If we've already found a shorter path, skip
        if current_distance > distances[current_node]:
            continue

        # Explore neighbors
        for neighbor, weight in graph[current_node].items():
            distance = current_distance + weight

            # If a shorter path to the neighbor is found
            if distance < distances[neighbor]:
                distances[neighbor] = distance
                previous_nodes[neighbor] = current_node
                heapq.heappush(priority_queue, (distance, neighbor))

    return distances, previous_nodes

def get_shortest_path(previous_nodes, start_node, end_node):
    """
    Reconstructs the shortest path from the start_node to the end_node.

    Args:
        previous_nodes (dict): Dictionary mapping each node to its predecessor in the shortest path.
        start_node: The starting node of the path.
        end_node: The ending node of the path.

    Returns:
        list: A list of nodes representing the shortest path. Returns None if no path exists.
    """
    path = []
    current_node = end_node
    while current_node is not None:
        path.insert(0, current_node)
        current_node = previous_nodes[current_node]

    if path and path[0] == start_node:
        return path
    else:
        return None # Path does not exist

def visualize_graph(graph, pos, path=None, title="Graph Visualization", figsize=(12, 8), node_size=2500, font_size=12):
    """
    Visualizes the graph using networkx and matplotlib.

    Args:
        graph (dict): The graph to visualize.
        pos (dict): A dictionary of node positions for plotting.
        path (list, optional): The shortest path to highlight. Defaults to None.
        title (str, optional): The title of the plot. Defaults to "Graph Visualization".
        figsize (tuple, optional): The figure size for the plot.
        node_size (int, optional): The size of the nodes.
        font_size (int, optional): The font size for labels.
    """
    G = nx.Graph()
    for node, edges in graph.items():
        for neighbor, weight in edges.items():
            G.add_edge(node, neighbor, weight=weight)

    edge_weights = nx.get_edge_attributes(G, 'weight')

    # Node colors
    node_colors = ['#ADD8E6' for node in G.nodes()]
    if path:
        for i, node in enumerate(path):
            if node in G.nodes():
                # Highlight start and end nodes
                if i == 0:
                    node_colors[list(G.nodes()).index(node)] = '#90EE90' # Light Green
                elif i == len(path) - 1:
                     node_colors[list(G.nodes()).index(node)] = '#F08080' # Light Coral
                else:
                    node_colors[list(G.nodes()).index(node)] = '#FFD700' # Gold

    # Edge colors
    edge_colors = ['#CCCCCC' for edge in G.edges()]
    if path:
        path_edges = list(zip(path, path[1:]))
        for i, edge in enumerate(G.edges()):
            if edge in path_edges or (edge[1], edge[0]) in path_edges:
                edge_colors[i] = '#FF6347' # Tomato red for path

    plt.figure(figsize=figsize)
    nx.draw(G, pos, with_labels=True, node_color=node_colors, node_size=node_size,
            font_size=font_size, font_weight='bold', edge_color=edge_colors, width=2.0)
    nx.draw_networkx_edge_labels(G, pos, edge_labels=edge_weights, font_size=font_size - 2)
    plt.title(title, size=font_size + 3)
    plt.box(False)
    plt.show()

# --- Main Execution ---

# ===== Example 1: Simple Lettered Graph =====
print("========================================")
print("         EXAMPLE 1: SIMPLE GRAPH        ")
print("========================================")

# 1. Define the graph structure with weighted edges
graph_1 = {
    'A': {'B': 1, 'C': 4},
    'B': {'A': 1, 'C': 2, 'D': 5},
    'C': {'A': 4, 'B': 2, 'D': 1, 'E': 3},
    'D': {'B': 5, 'C': 1, 'E': 6, 'F': 2},
    'E': {'C': 3, 'D': 6, 'F': 4},
    'F': {'D': 2, 'E': 4}
}

# Define node positions for a visually appealing layout
pos_1 = {'A': (0, 1), 'B': (1, 2), 'C': (1, 0), 'D': (2, 1), 'E': (3, 0), 'F': (3, 2)}

# 2. Visualize the original graph
print("\n--- Original Graph ---")
visualize_graph(graph_1, pos_1, title="Original Graph of Nodes")

# 3. Run Dijkstra's algorithm
start_node_1 = 'A'
end_node_1 = 'F'
distances_1, previous_nodes_1 = dijkstra(graph_1, start_node_1)

# 4. Get and print the shortest path and total distance
shortest_path_1 = get_shortest_path(previous_nodes_1, start_node_1, end_node_1)

print(f"\n--- Dijkstra's Algorithm Results ---")
print(f"Starting Node: {start_node_1}")
print(f"Ending Node: {end_node_1}")

if shortest_path_1:
    total_distance_1 = distances_1[end_node_1]
    print(f"\nShortest Path: {' -> '.join(shortest_path_1)}")
    print(f"Total Distance: {total_distance_1}")

    # 5. Visualize the graph with the shortest path highlighted
    visualize_graph(graph_1, pos_1, path=shortest_path_1, title=f"Shortest Path from {start_node_1} to {end_node_1}")
else:
    print(f"No path found from {start_node_1} to {end_node_1}.")


# ===== Example 2: Indian Cities Graph =====
print("\n\n========================================")
print("       EXAMPLE 2: INDIAN CITIES       ")
print("========================================")

# 1. Define a new graph structure representing cities and distances
graph_2 = {
    'Delhi': {'Mumbai': 1421, 'Kolkata': 1472, 'Ahmedabad': 934},
    'Mumbai': {'Delhi': 1421, 'Pune': 148, 'Bangalore': 984, 'Hyderabad': 709},
    'Kolkata': {'Delhi': 1472, 'Chennai': 1677, 'Hyderabad': 1482},
    'Chennai': {'Kolkata': 1677, 'Bangalore': 347, 'Hyderabad': 627},
    'Bangalore': {'Mumbai': 984, 'Chennai': 347, 'Hyderabad': 570, 'Pune': 842},
    'Hyderabad': {'Mumbai': 709, 'Kolkata': 1482, 'Chennai': 627, 'Bangalore': 570, 'Pune': 553},
    'Ahmedabad': {'Delhi': 934, 'Mumbai': 525},
    'Pune': {'Mumbai': 148, 'Bangalore': 842, 'Hyderabad': 553}
}


# Define node positions for a visually appealing layout
pos_2 = {
    'Delhi': (2, 4),
    'Kolkata': (4, 3),
    'Ahmedabad': (0, 2),
    'Mumbai': (0, 0),
    'Pune': (1, -1),
    'Hyderabad': (2, 0),
    'Bangalore': (2, -2),
    'Chennai': (4, -2)
}

# 2. Visualize the original graph
print("\n--- Original Graph (Indian Cities) ---")
visualize_graph(graph_2, pos_2, title="Major Indian Cities and Distances (in km)", figsize=(14, 10), node_size=3000, font_size=10)

# 3. Run Dijkstra's algorithm
start_node_2 = 'Delhi'
end_node_2 = 'Bangalore'
distances_2, previous_nodes_2 = dijkstra(graph_2, start_node_2)

# 4. Get and print the shortest path and total distance
shortest_path_2 = get_shortest_path(previous_nodes_2, start_node_2, end_node_2)

print(f"\n--- Dijkstra's Algorithm Results ---")
print(f"Starting Node: {start_node_2}")
print(f"Ending Node: {end_node_2}")

if shortest_path_2:
    total_distance_2 = distances_2[end_node_2]
    print(f"\nShortest Path: {' -> '.join(shortest_path_2)}")
    print(f"Total Distance: {total_distance_2} km")

    # 5. Visualize the graph with the shortest path highlighted
    visualize_graph(graph_2, pos_2, path=shortest_path_2, title=f"Shortest Path from {start_node_2} to {end_node_2}", figsize=(14, 10), node_size=3000, font_size=10)
else:
    print(f"No path found from {start_node_2} to {end_node_2}.")

