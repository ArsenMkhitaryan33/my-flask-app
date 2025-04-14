from flask import Flask

app = Flask(__name__)

@app.route("/")
def home():
    
 return "Hello, aper apres"
 return "hihihihi"

if __name__ == "__main__":
    app.run(host="34.107.89.210", port=5000)
