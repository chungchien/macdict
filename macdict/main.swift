//
//  main.swift
//  macdict
//
//  Created by 钟建峰 on 2020/2/12.
//  Copyright © 2020 钟建峰. All rights reserved.
//

import Foundation

for (name, _) in DCSDictionary.availableDictionaries {
    print(name)
}

let dictName = "Oxford Dictionary of English"
let word = "hello"
if let dict = DCSDictionary.getDictionary(by: dictName), let entries = dict.lookUp(text: word) {
    for entry in entries {
        print("-----------headword---------")
        print(entry.headword)
        print("-----------text-------------")
        print(entry.text)
        print("-----------HTML-------------")
        print(entry.html)
        print("---------------------------")
    }
} else {
    print("can not find the definition of \"\(word)\"")
}

