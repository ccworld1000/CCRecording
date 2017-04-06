#### CCRecording : recording your app when you need

=======================

[https://github.com/ccworld1000/CCRecording.git](https://github.com/ccworld1000/CCRecording.git)

##bug 
Email ： <a href="mailto:ccworld1000@gmail.com">ccworld1000@gmail.com</a>

***
# CCRecording for Simulator
***
PURPOSE : recording your app ......


# Screenshot
***
![CCSQLite CCSQLiteMac Screenshot](https://github.com/ccworld1000/CCRecording/blob/master/RunDemoPicture/RunDemoPicture20170320.png?raw=true)

## Podfile

```ruby
pod 'CCSQLite'
```

# demo
####see CCRecordingDemo/
####see RunDemoVideo => RunDemoVideo/CCRecordingDemoVideo20170319.mov


# demo code
```objective-c
#import <CCRecording/CCRecording.h>
```
or

```objective-c
#import "CCRecording/CCRecording.h"
```


```objective-c
    CCRecordingStart("cc.mov");
    CCRecordingStop();

```

# MIT License
***

MIT License

Copyright (c) 2016-now ccworld1000 | bug : <a href="mailto:ccworld1000@gmail.com">ccworld1000@gmail.com</a>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.