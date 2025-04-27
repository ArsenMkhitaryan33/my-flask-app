from flask import Flask

app = Flask(__name__)

@app.route("/")
def home():
    
 return "Hello, aper Hrach)))"

import tkinter as tk

# Create the main window
root = tk.Tk()
root.title("Python Button Example")

# Define the action for the button click
def on_button_click():
    print("Button clicked!")

# Create a button and add it to the window
button = tk.Button(root, text="Click Me", command=on_button_click)
button.pack(pady=20)

# Run the Tkinter event loop
root.mainloop()



if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)

