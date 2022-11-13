# FacadePattern cpp demo code

## Overview

    FacadePatternの使い方

## 使いどころ

    Facade Patternは、各クラスとそれを使うクラスの間にインターフェイスを設ける考え方です。  
    ただし、各クラスを利用するために具体的なインターフェイスを設けると意味がありません。  
    その場合、各クラスを直接使うのが良いでしょう。  
    今風に例えると、ファンタジー小説に出てくるギルドの受付嬢はFacade Patternで実装されていますね。  
    冒険者はクライアントクラス、ギルドの受付嬢はFacadeクラスです。  
    冒険者はギルドの受付嬢を通してギルド側の手続きをやってもらいますが、同じ意味になります。  
    この仕組のおかげで冒険者はギルドの細かい仕組みを知らなくてもギルドという大きなサブシステムを利用できるのです。  
    この例えに則れば、窓口業務を行っているあらゆるモノに対して「Facade Pattern」が適用されていると言えます。  

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build 

    ex. LLVM(15.0.0+) + Ninja + cmakeの場合  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""  
    powershell.exe cmake --build build --config debug  

## 参考

[独習デザインパターンC++](https://www.shoeisha.co.jp/book/detail/9784798117201)

## Licence

[MIT](https://github.com/IwachanOrigin/facadepattern_cpp/blob/master/LICENSE)

