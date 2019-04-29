import requests

response = requests.get("https://preyash1699.github.io/data.txt")
data = response.text
print(data)