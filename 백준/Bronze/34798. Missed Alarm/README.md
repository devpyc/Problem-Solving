# [Bronze IV] Missed Alarm - 34798 

[문제 링크](https://www.acmicpc.net/problem/34798) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2026년 04월 17일 00:30:41

### 문제 설명

<p>It is November 14, 2025. You are doing your last minute preparations for the 2025 Pacific Northwest Regional. You have Eurovision music blasting in your dorm room as you code up your final solution to Free Solo. You submit your solution to Kattis and watch as the green check marks slowly accumulate... you hit F5 one last time, and see that all test cases have passed!</p>

<p>With your coding preparations now complete, you decide to prepare all the materials that you will bring to the regional contest. You pack your trusty copies of CLRS and KT, along with language reference books for C, C++, Java, Kotlin, and Python. You print out a copy of the KACTL team reference document and also print your personal templates.</p>

<p>You check your phone. It is November 15, 2025. You realize you need to get a good night's sleep. You set your alarm and start preparing for bed. You're excited for the regional contest but not so excited it'll keep you up tonight. With your alarm set to go off at some point on the 15th, you get into bed and you're already asleep before your head hits your pillow.</p>

<p>You suddenly wake up and look at the clock. It's still November 15, 2025. Did you sleep through your alarm?</p>

### 입력 

 <p>The input consists of two lines.</p>

<p>The first line contains a time in the form <code>HH:MM</code>, indicating when you set your alarm. It is guaranteed that this is a valid time between <code>10:00</code> and <code>12:59</code>, inclusive.</p>

<p>The second line contains a time in the form <code>HH:MM</code>, indicating when you look at the clock. It is guaranteed that this is a valid time between <code>10:00</code> and <code>12:59</code>, inclusive. It is further guaranteed that this time is not exactly the same as your alarm.</p>

<p>A valid time will always have a minute value that is an integer between $0$ and $59$, inclusive. The minute value will always be represented using two digits, possibly with a leading zero.</p>

### 출력 

 <p>Output <code>YES</code> if you woke up after your alarm. Output <code>NO</code> otherwise.</p>

