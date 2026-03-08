# [Bronze IV] 구구단표 - 32710 

[문제 링크](https://www.acmicpc.net/problem/32710) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

수학, 구현, 브루트포스 알고리즘, 사칙연산

### 제출 일자

2026년 03월 08일 22:23:25

### 문제 설명

<p>구구단표는 $A\times B = C$의 형태로 이루어져 있다. $2$단의 표는 아래와 같은 모습이고, 구구단은 $2$단부터 $9$단까지 있다. </p>

<table align="center" border="1" cellpadding="1" cellspacing="1" class="table table-bordered" style="width: 150px;">
	<thead>
		<tr>
			<th scope="col" style="text-align: center;">2단</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td style="text-align: center;">$2\times 1 = 2$</td>
		</tr>
		<tr>
			<td style="text-align: center;">$2\times 2 = 4$</td>
		</tr>
		<tr>
			<td style="text-align: center;">$2\times 3 = 6$</td>
		</tr>
		<tr>
			<td style="text-align: center;">$2\times 4 = 8$</td>
		</tr>
		<tr>
			<td style="text-align: center;">$2\times 5 = 10$</td>
		</tr>
		<tr>
			<td style="text-align: center;">$2\times 6 = 12$</td>
		</tr>
		<tr>
			<td style="text-align: center;">$2\times 7 = 14$</td>
		</tr>
		<tr>
			<td style="text-align: center;">$2\times 8 = 16$</td>
		</tr>
		<tr>
			<td style="text-align: center;">$2\times 9 = 18$</td>
		</tr>
	</tbody>
</table>

<p>양의 정수 $N$이 주어졌을 때, 해당 수가 구구단표에서 등장하는지를 판별해 보자. $N$이 $A$, $B$, $C$ 중 어느 하나에라도 해당하면 구구단표에 등장한 것으로 본다.</p>

### 입력 

 <p>첫째 줄에 양의 정수 $N$이 주어진다. $\left(1\leq N\leq 100\right)$ </p>

### 출력 

 <p>주어진 수가 구구단표에서 등장하면 <span style="color:#e74c3c;"><code>1</code></span>, 아니면 <span style="color:#e74c3c;"><code>0</code></span>을 출력한다.</p>

