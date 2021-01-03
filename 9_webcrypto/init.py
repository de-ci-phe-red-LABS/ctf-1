from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives import padding
import os

backend = default_backend()
key = os.urandom(16)
iv = os.urandom(16)

key = b'\xed3\\~W\xde`m\xa2pi\xa0~\x83!\xe9'
iv = b'E\xc6\xc4\x16\x92\xdcA\xba\x07\xfd\x9d\xdf\xc2\x13\xb1\x8c'

# create padded msg
def create_pt(msg):
    padder = padding.PKCS7(128).padder()
    padded_data = padder.update(msg) + padder.finalize()
    return padded_data

def blockify(txt):
    return  [txt[i:i+16] for i in range(0, len(txt), 16)]


#create encryption function
def encrypt(msg, key, iv, backend):
    cipher = Cipher(algorithms.AES(key), modes.CBC(iv), backend = backend)
    encryptor = cipher.encryptor()
    ct = encryptor.update(msg) + encryptor.finalize()
    return ct

def decrypt(ct, key, iv, backend):
    cipher = Cipher(algorithms.AES(key), modes.CBC(iv), backend = backend)
    decryptor = cipher.decryptor()
    return decryptor.update(ct) + decryptor.finalize()

def lwordoracle(ct, key, iv, backend):
    pt = decrypt(ct, key, iv, backend)
    PT = [pt[i:i+16] for i in range(0, len(pt), 16)]
    #print(PT)
    cur = PT[-1]
    pad = cur[-1]
    if pad == 0:
        return -1
    #print("pad", pad)
    for i in range(pad):
        if cur[len(cur)-1 -i] != pad:
            #print("Incorrect Padding")
            return -1
            break
    return 0


if __name__ == '__main__':
    msg = create_pt(b'ahaan')
    a = encrypt(msg, key, iv, backend)
    print(a)
    print(decrypt(a, key, iv, backend))


