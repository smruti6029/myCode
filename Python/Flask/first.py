# Flask = Python backend

from flask import Flask
app = Flask(__name__)

@app.route('/')
def home():
    return "home"

@app.route('/payment')
def payment():
    return "payment"

app.run(debug=True)


