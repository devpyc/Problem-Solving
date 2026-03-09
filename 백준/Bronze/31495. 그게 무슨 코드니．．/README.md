# [Bronze IV] 그게 무슨 코드니.. - 31495 

[문제 링크](https://www.acmicpc.net/problem/31495) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2026년 03월 09일 13:42:48

### 문제 설명

<p>토카는 문자열을 출력하는 파이썬 코드를 작성하는 것에 자신감이 있었다. 어느 날 <code><span data-darkreader-inline-color="" style="color: rgb(231, 76, 60); --darkreader-inline-color: #e95849;">Hello, World!</span></code>를 출력해달라는 요청을 받은 토카는 자신있게 코드를 작성했지만, 큰따옴표를 찍지 않는 치명적인 실수로 인해 컴파일 에러를 받고 말았다!!</p>

<p style="text-align: center;"><img alt="" src="" style="height: 145px; width: 500px;"></p>

<p style="text-align: center;"><small>컴파일 에러를 받은 토카의 코드</small></p>

<p>토카는 이로 인해 자신감을 잃어버려 문자열 출력을 멀리하고 있다. 당신은 토카의 자신감을 회복시켜 주기 위해 문자열을 입력받았을 때 정확한 문자열인지 판독하는 프로그램을 작성하고자 한다. 정확한 문자열은 문자열의 시작과 끝이 큰따옴표로 이루어져 있으며 큰따옴표를 제외한 문자가 포함되어 있는 문자열을 뜻하는 말로, 대표적으로는 <code><span style="color:#e74c3c;">"Hello, World!"</span></code>가 있다. 즉, 큰따옴표로 시작하지 않거나 끝나지 않은 <code><span style="color:#e74c3c;">Dijkstra</span></code>나 <code><span style="color:#e74c3c;">A"b</span></code>등의 문자열은 정확한 문자열이 아니다. 이제 토카의 문자열이 정확한 문자열인지 판독하는 코드를 작성하여 보자!</p>

### 입력 

 <p>첫 번째 줄에 토카의 문자열을 뜻하는 문자열 $S$가 주어진다. $S$는 $50$글자를 넘지 않으며, 영어 대소문자와 큰따옴표, 그리고 공백으로 이루어져 있다. 큰따옴표는 전체 문자열에서 $2$<strong>개 이하로 들어옴이 보장된다.</strong> 큰따옴표란 <code><span data-darkreader-inline-color="" style="color: rgb(231, 76, 60); --darkreader-inline-color: #e95849;">"</span></code>를 의미한다. 또한, 큰따옴표 안에 있는 문자열 앞뒤에 공백이 주어지는 경우나 문자열의 시작과 끝에 공백이 주어지는 경우는 주어지지 않는다.</p>

### 출력 

 <p>토카의 문자열이 정확한 문자열이라면 큰따옴표 내부 문자열을, 만약 토카의 문자열이 정확한 문자열이 아니거나, 큰따옴표 내부가 빈 문자열이라면 <code><span style="color:#e74c3c;">CE</span></code>를 출력한다.</p>

