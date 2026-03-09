# [Bronze III] GIST 찍기 - 31907 

[문제 링크](https://www.acmicpc.net/problem/31907) 

### 성능 요약

메모리: 2160 KB, 시간: 12 ms

### 분류

구현, 문자열

### 제출 일자

2026년 03월 09일 13:42:48

### 문제 설명

<p>GIST 학생 홍보대사 지온나래는 GIST를 홍보하기 위해 큰 현수막을 준비하고 있다. 현수막에는 다음과 같은 그림이 들어갈 것이다.</p>

<p style="text-align: center;"><samp>G...</samp></p>

<p style="text-align: center;"><samp>.I.T</samp></p>

<p style="text-align: center;"><samp>..S.</samp></p>

<p>정수 $K$가 주어지면, 주어진 그림을 $K$배 확대한 그림을 예제 출력과 같이 출력하시오.</p>

<p>주어진 그림을 $K$배 확대한다는 것은 그림을 하나의 행렬로 보고 이를 확대한다는 것이다. 자세한 정의는 다음과 같다. 가로 길이가 $M$이고 세로 길이가 $N$인 그림은 $N \times M$ 행렬 $X = \left(x_{ij}\right)$로 나타낼 수 있으며, 이 행렬 $X$를 $K$배 확대한 행렬 $Y$는 $KN \times KM$ 행렬로, 다음과 같이 정의된다.</p>

<p>$$Y = \left(y_{ij}\right), y_{ij} = x_{\left\lfloor\frac{i + K - 1}{K}\right\rfloor\left\lfloor\frac{j + K - 1}{K}\right\rfloor} $$</p>

### 입력 

 <p>첫째 줄에 정수 $K$가 주어진다. ($1 \leq K \leq 100$)</p>

### 출력 

 <p>주어진 그림을 $K$배 확대한 그림을 예제 출력과 같이 출력한다.</p>

