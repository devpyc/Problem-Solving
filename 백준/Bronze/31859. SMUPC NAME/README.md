# [Bronze I] SMUPC NAME - 31859 

[문제 링크](https://www.acmicpc.net/problem/31859) 

### 성능 요약

메모리: 2028 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2026년 03월 09일 13:42:48

### 문제 설명

<p>연재는 제4회 SMUPC에 출전하는 사람들을 위해 <strong>SMUPC NAME</strong>을 만들어주려고 한다. <strong>SMUPC NAME</strong>을 만드는 방법은 아래와 같다.</p>

<ol>
	<li>출전자의 영어 이름에서 알파벳이 중복되지 않도록 추출한다. 특정 알파벳이 여러 번 등장한다면 처음 등장한 경우를 제외하고 해당 알파벳을 버린다.</li>
	<li>1번을 통해 만들어진 문자열 맨 뒤에 1번 과정에서 버려진 문자의 총개수에 $4$를 더한 값을 붙인다.</li>
	<li>2번을 통해 만들어진 문자열 맨 앞에 출전 등록 번호에 $1906$을 더한 값을 붙인다.</li>
	<li>3번을 통해 만들어진 문자열을 뒤집는다.</li>
	<li>4번을 통해 만들어진 문자열 맨 앞에 "<code><span style="color:#e74c3c;">smupc_</span></code>"를 붙인다.</li>
</ol>

<p>출전 등록 번호가 $2$이며 "<span style="color:#e74c3c;"><code>yeonjaechoi</code></span>" 라는 영어 이름을 가진 사람의 <strong>SMUPC NAME</strong>을 규칙에 따라 만들면 다음과 같다.</p>

<ol>
	<li>yeonjachi</li>
	<li>yeonjachi6</li>
	<li>1908yeonjachi6</li>
	<li>6ihcajnoey8091</li>
	<li>smupc_6ihcajnoey8091</li>
</ol>

<p>출전 등록 번호와 영어 이름이 주어지면 그 사람의 <strong>SMUPC NAME</strong>을 출력하자.</p>

### 입력 

 <p>첫째 줄에 출전 등록 번호 정수 $N (1 \leq N \leq 100)$과 공백 없이 알파벳 소문자로만 구성된 영어 이름 $S (1 \leq \lvert S \rvert \leq 20)$가 공백으로 구분되어 주어진다.</p>

### 출력 

 <p>규칙에 따라 만든 <strong>SMUPC NAME</strong>을 출력한다.</p>

