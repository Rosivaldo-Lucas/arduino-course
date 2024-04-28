import serial
from flask import Flask, request, render_template, jsonify

app = Flask(__name__)

app.debug = False
_serial = None

channels = {
  "LED VERMELHO\r\n": "danger",
  "LED VERDE\r\n": "danger",
  "LED VERDE 2\r\n": "danger",
  "BUZZER\r\n": "danger",
  "SERVO MOTOR\r\n": "danger",
}

def switch(name):
  if name in channels:
    if channels[name] == "danger":
      channels[name] = "success"
    else:
      channels[name] = "danger"

@app.route("/", methods=['GET', 'POST'])
def index():
  action = None
  
  if request.method == 'POST':
    if request.form['action']:
      action = "{action}".format(action=request.form['action'])
      
      _serial.write(action.encode('ascii'))
      
      switch(action.lower());

  print (channels)

  return render_template('index.html', action=action, channels=channels)

# @app.route('/sensor')
# def sensor_data():
#   if _serial.in_waiting > 0:
#     sensor_value = _serial.readline().decode().strip()
    
#     sensor_value = int(sensor_value);
    
#     return jsonify(sensor_value=sensor_value)
#   else:
#     return jsonify(sensor_value=None)

#     # if sensor_value < 20:
#     #  return "Sensor acionado! Valor: {}".format(sensor_value)
#     # else:
#     #  return "Nenhum acionamento detectado. Valor: {}".format(sensor_value)
#   # else:
#   #  return "Nenhum dado recebido do sensor ainda."

if __name__ == "__main__":
  _serial = serial.Serial('/dev/ttyUSB0', 9600)
  app.run(host='0.0.0.0')
