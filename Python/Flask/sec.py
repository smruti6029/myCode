# Flask = Python backend

from flask import Flask
app = Flask(__name__)

@app.route("/<a>/<b>")
def add(a,b):
    print(a)
    print(b)
    c=int(a)+int(b)
    return str(c)


app.run(debug=True)


