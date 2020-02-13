#  README

本程序封装了macOS的字典服务，实现枚举所有字典、查找单词并以文本或HTML的形式获取解释。

所有实现在 [macdict.swift](macdict/macdict.swift)文件中。

## 示例

使用默认字典查找：
```swift
let text = DCSDictionary.lookUp(text: "word")
```

遍历所有字典

```swift
for (dictName, dict) in DCSDictionary.availableDictionaries {
    print(dictName)
}
```

查找单词
``` swift
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
```

## 感谢

在实现时参考了 [jakwings/macdict](https://github.com/jakwings/macdict)，和[mattt/DictionaryKit](https://github.com/mattt/DictionaryKit)。

