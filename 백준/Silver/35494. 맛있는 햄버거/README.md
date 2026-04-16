# [Silver V] 맛있는 햄버거 - 35494 

[문제 링크](https://www.acmicpc.net/problem/35494) 

### 성능 요약

메모리: 3976 KB, 시간: 48 ms

### 분류

구현, 그리디 알고리즘

### 제출 일자

2026년 04월 17일 00:30:41

### 문제 설명

<p><code>haru_101</code>은 빵 하나로 이루어진 <strong>맛있는 햄버거</strong>를 너무 많이 먹은 바람에 지쳐있었다. 그래서 <code>haru_101</code>은 <strong>맛있는 햄버거</strong>를 다음 과정을 통해 재정의하기로 했다.</p>

<p><code>haru_101</code>은 $1$층부터 $N$층까지 각 층마다 원 모양의 재료가 쌓여있는 햄버거를 주문한 후, 다음 과정을 햄버거의 모든 재료가 제거될 때까지 반복하고자 한다. 처음에 $V$는 $0$이다. 이후 아래 과정을 거쳐 최종적으로 $V$가 결정된다.</p>

<ul>
<li>현재 남아 있는 재료 중 가장 지름이 큰 재료의 지름을 $V$에 더한다.</li>
<li>가장 위에 있는 재료를 제거한다.</li>
</ul>

<p>햄버거의 모든 재료가 제거된 뒤, $V$가 $3$의 배수면 <strong>맛있는 햄버거</strong>라고 한다. <code>haru_101</code>이 주문한 햄버거가 <strong>맛있는 햄버거</strong>인지 구해보자.</p>

### 입력 

 <p>첫 번째 줄에 정수 $N$이 주어진다.</p>

<p>두 번째 줄에 $i$층에 있는 재료의 지름을 $R_i$라고 할 때, 정수 $R_1, R_2, \cdots, R_N$이 공백으로 구분되어 주어진다.</p>

### 출력 

 <p>첫 번째 줄에 <code>haru_101</code>이 주문한 햄버거가 <strong>맛있는 햄버거</strong>라면 <span style="color:#e74c3c;"><code>Delicious!</code></span>를, 아니면 <span style="color:#e74c3c;"><code>Oh My God!</code></span>을 출력한다.</p>

