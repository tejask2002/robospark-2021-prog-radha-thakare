import "package:flutter/material.dart";

class Home extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Center(
        child: Container(
            padding: EdgeInsets.only(top: 40.0),
            alignment: Alignment.center,
            
            child: Column(
              children: [
                pic(),
                SizedBox(height:30,),
                Expanded(
                    
                    child: Text(
                  "Tejas katkade",
                  textDirection: TextDirection.ltr,
                  style: TextStyle(
                         decoration: TextDecoration.none,
                      fontSize: 30.0,
                      fontWeight: FontWeight.bold,
                      color: Colors.black,
                      ),
                )),
                Row(
                  children: [
                     Expanded(
                        child: Text(
                      "  posts",
                      textDirection: TextDirection.ltr,
                      style: TextStyle(
                          decoration: TextDecoration.none,
                          fontSize: 25.0,
                          fontWeight: FontWeight.w500,
                          color: Colors.black),
                    )),
                    Expanded(
                        child: Text(
                      "     Followers",
                      textDirection: TextDirection.ltr,
                      style: TextStyle(
                          decoration: TextDecoration.none,
                          fontSize: 25.0,
                          
                          fontWeight: FontWeight.w500,
                          color: Colors.black),
                    )),
                    Expanded(
                        child: Text(
                      "   Following",
                      textDirection: TextDirection.ltr,
                      style: TextStyle(
                          decoration: TextDecoration.none,
                          fontSize: 25.0,
                         
                          fontWeight: FontWeight.w500,
                          color: Colors.black),
                    )),
                  ],
                ),
                Row(
                  children: [
                     Expanded(
                        child: Text(
                        "  20",
                      textDirection: TextDirection.ltr,
                      style: TextStyle(
                          decoration: TextDecoration.none,
                          fontSize: 35.0,
                            color: Colors.black,
                          fontWeight: FontWeight.w700),
                    )),
                    Expanded(
                        child: Text(
                        "   500",
                      textDirection: TextDirection.ltr,
                      style: TextStyle(
                          decoration: TextDecoration.none,
                          fontSize: 35.0,
                            color: Colors.black,
                          fontWeight: FontWeight.w700),
                    )),
                    Expanded(
                        child: Text(
                        "   1000",
                      textDirection: TextDirection.ltr,
                      style: TextStyle(
                          decoration: TextDecoration.none,
                          fontSize: 35.0,
                          color: Colors.black,
                          fontWeight: FontWeight.w700),
                    )),
                  ],
                ),
                SizedBox(height:15,),
                Expanded(
                    child: Text(
                  "TK'S here ",
                  textDirection: TextDirection.ltr,
                  style: TextStyle(
                      decoration: TextDecoration.none,
                      fontSize: 20.0,
                  
                      fontWeight: FontWeight.w400,
                      color: Colors.black),
                ))
               
              ],
            
            )
            )
            );
  }
}

class pic extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    AssetImage assetImage = AssetImage('assets/tejas1.jpg');
    Image image = Image(
      image: assetImage,
      width: 350.0,
      height: 300.0,
    );
    return Container(
      child: image,
    );
  }
}