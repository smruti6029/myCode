from flask import Flask 
app = Flask(__name__)


@app.route('/<a>/<b>')
def func(a,b):
    return str(int(a)+int(b))


app.run(debug=True)

