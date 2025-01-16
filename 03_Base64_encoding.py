#base64_encoding
import base64
original_string = "Hi, Hexp01cror. Happy Hacking!"
encoded_bytes = base64.b64encode(original_string.encode('utf-8'))
encoded_string = encoded_bytes.decode('utf-8')
print("Base64 Encoded String:", encoded_string)

#base64_decoding
import base64
encoded_string = "SGksIEhleHAwMWNyb3IuIEhhcHB5IEhhY2tpbmch"
encoded_bytes = encoded_string.encode('utf-8')
decoded_bytes = base64.b64decode(encoded_bytes)
decoded_string = decoded_bytes.decode('utf-8')
print("Base64 Decoded String:", decoded_string)