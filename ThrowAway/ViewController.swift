//
//  ViewController.swift
//  ThrowAway
//
//  Created by Cactice on 2/24/18.
//  Copyright © 2018 Cactice. All rights reserved.
//

import UIKit
class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        //let Whatever = Pointt(Float(2),Float(2))
        print("\(getDistance(Float(2)))")
        var itsPoint = ObjPointt(x: 2, y: 2)
        print("\(itsPoint!.distance())")
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

