String Head(){
    String s = "HTTP/1.1 200 OK\r\n";
    s += "Content-Type: text/html\r\n\r\n";
    s += "<!DOCTYPE HTML>\r\n<html>\r\n";
    return s;
  }

String Start(){
    String s = "<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">";
    s += "<link rel=\"icon\" href=\"data:image/x-icon;base64,AAABAAEAEBAQAAEABAAoAQAAFgAAACgAAAAQAAAAIAAAAAEABAAAAAAAgAAAAAAAAAAAAAAAEAAAAAAAAADm5uYA39/fAOjo6AD///8Aurq6APz8/ADX19cAZGRkAOfn5wBGRkYA6+vrAAAAAAAAAAAAAAAAAAAAAAAAAAAAMzMzMzMzMzMzMzM5kzMzMzMzM5qpMzMzMzM5SqSTMzMzM5NKpGkzMzM5NKqgRpMzM5M0qqpGaTM3M0qqqhRmk3MzRERERGZpdERKqqqEREk3M1SqqkZmkzNzNKqiRmkzMzdzSqRnczMzMzd3d3MzMzMzMzMzMzMzMzMzMzMzMzMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\">";
    s += "<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center; background-color: #77878A;}";
    s += ".button { background-color: #195B6A; border: none; color: white; padding: 16px 40px;";
    s += "text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}";
    s += ".button2 {background-color: #77878A;}</style></head>";
    s += "<body>";
    return s;
  }

String Ending(){
  String s = "<p><a href=\"/n1\"><button class=\"button\">1</button></a><a href=\"/n2\"><button class=\"button\">2</button></a><a href=\"/n3\"><button class=\"button\">3</button></a></p>";
  s += "<p><a href=\"/n4\"><button class=\"button\">4</button></a><a href=\"/n5\"><button class=\"button\">5</button></a><a href=\"/n6\"><button class=\"button\">6</button></a></p>";
  s += "<p><a href=\"/n7\"><button class=\"button\">7</button></a><a href=\"/n8\"><button class=\"button\">8</button></a><a href=\"/n9\"><button class=\"button\">9</button></a></p>";
  s += "<p><a href=\"/chup\"><button class=\"button\">Cu</button></a><a href=\"/n0\"><button class=\"button\">0</button></a><a href=\"/chdo\"><button class=\"button\">Cd</button></a></p>";
  s += "<p><a href=\"/tv\"><button class=\"button\">Tv</button></a><a href=\"/up\"><button class=\"button\">U</button></a><a href=\"/ok\"><button class=\"button\">Ok</button></a></p>";
  s += "<p><a href=\"/left\"><button class=\"button\">L</button></a><a href=\"/up\"><button class=\"button\">D</button></a><a href=\"/right\"><button class=\"button\">R</button></a></p>";
  s += "<p><a href=\"/rew\"><button class=\"button\">Re</button></a><a href=\"/play\"><button class=\"button\">pl</button></a><a href=\"/forw\"><button class=\"button\">Ff</button></a></p>";
  s += "<p><a href=\"/dis\"><button class=\"button\">Discovery</button></a></p>";
  s += "</html>\n";
  return s;
  }

