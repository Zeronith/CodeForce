
# Import QRCode from pyqrcode 
import qrcode

site = "https://www.facebook.com/"

img = qrcode.make(site)

img.save("FBQRCode.png")