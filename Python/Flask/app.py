from flask import Flask, request, jsonify
app = Flask(__name__)

@app.route("/", methods = ["POST"])
def mul():
    f = request.get_json()
    print(f['a'] + f['b'])
    return f
    

app.run(debug=True)