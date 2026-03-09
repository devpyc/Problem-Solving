# [Platinum V] 매달린 else - 32180 

[문제 링크](https://www.acmicpc.net/problem/32180) 

### 성능 요약

메모리: 2080 KB, 시간: 0 ms

### 분류

파싱, 재귀, 문자열

### 제출 일자

2026년 03월 09일 13:42:48

### 문제 설명

<p>아래의 <code>else</code>문은 둘 중 어느 <code>if</code>문에 대응하는 <code>else</code>문일까?</p>

<pre>if(a) if(b) c; else d;
</pre>

<p>별도로 규칙을 추가하지 않는다면 컴퓨터는 이 <code>else</code>가 두 <code>if</code> 중 어느 쪽에 대응하는지 알 수 없다. 이 문제가 컴파일러에 관한 강의에서 들어보았을 매달린 else(dangling else) 문제이다.</p>

<p>이 문제를 해결하는 방법은 여러 가지가 있지만, 가장 대표적인 방법은 아래의 두 가지이다.</p>

<ol>
	<li>모호한 <code>else</code>를 짝지을 수 있는 가장 가까운 <code>if</code>와 짝짓는다.</li>
	<li>문법적으로 중괄호 생략을 금지한다.</li>
</ol>

<p>이 문제에서는 <strong>1번 규칙</strong>을 사용하는 소스 코드를 입력받아 <strong>2번 규칙</strong>을 사용하는 소스 코드로 변환해야 한다.</p>

<p>문제에서 사용할 소스 코드의 문법은 다음과 같다.</p>

<ul>
	<li>소스 코드에서 사용하는 <strong>토큰</strong>은 세미콜론(<code>"<span style="color:#e74c3c;">;</span>"</code>), 여는 중괄호(<code>"<span style="color:#e74c3c;">{</span>"</code>), 닫는 중괄호(<code>"<span style="color:#e74c3c;">}</span>"</code>), <code>"<span style="color:#e74c3c;">if</span>"</code>, <code>"<span style="color:#e74c3c;">else</span>"</code>, <code>"<span style="color:#e74c3c;">end</span>"</code>로 총 6가지이다.</li>
	<li><strong>소스 코드</strong>는 $0$개 이상의 구문과 하나의 <code>"<span style="color:#e74c3c;">end</span>"</code> 토큰으로 이루어진다.</li>
	<li>각 <strong>구문</strong>은 아래의 셋 중 하나에 해당한다.
	<ul>
		<li>하나의 세미콜론(<code>"<span style="color:#e74c3c;">;</span>"</code>) 토큰</li>
		<li>하나의 <code>if</code>문</li>
		<li>하나의 <code>if</code>-<code>else</code>문</li>
	</ul>
	</li>
	<li><strong><code>if</code>문</strong>은 <code>"<span style="color:#e74c3c;">if</span>"</code> 토큰 하나와 본문 하나가 연이어 있는 형태를 가진다.</li>
	<li><strong><code>if</code>-<code>else</code>문</strong>은 <code>"<span style="color:#e74c3c;">if</span>"</code> 토큰 하나, 본문 하나, <code>"<span style="color:#e74c3c;">else</span>"</code> 토큰 하나, 본문 하나가 연이어 있는 형태를 가진다.</li>
	<li><strong>본문</strong>은 위에서 정의한 두 규칙 중 어느 것을 사용하느냐에 따라 다르게 구성될 수 있다.
	<ul>
		<li>1번 규칙을 사용하는 경우, 본문은 구문 하나로 구성될 수 있다.</li>
		<li>1번 규칙 또는 2번 규칙을 사용하는 경우, 본문은 여는 중괄호(<code>"<span style="color:#e74c3c;">{</span>"</code>) 토큰 하나, $0$개 이상의 구문, 닫는 중괄호(<code>"<span style="color:#e74c3c;">}</span>"</code>) 토큰이 연이어 있는 형태를 가질 수 있다.</li>
	</ul>
	</li>
	<li>모든 토큰은 공백 문자 $1$개를 사이에 두고 구분한다.</li>
</ul>

<p>또한, 문법 요소 간의 <strong>동형 관계</strong>는 다음과 같이 주어진다.</p>

<ul>
	<li>두 <strong>소스 코드</strong>는 구문 수가 같고 각 구문끼리 순서대로 대응시켰을 때 동형일 경우 동형이다.</li>
	<li>두 <strong>구문</strong>은 다음 중 하나에 해당하면 동형이다.
	<ul>
		<li>두 구문이 모두 단일 세미콜론(<code>"<span style="color:#e74c3c;">;</span>"</code>) 토큰일 경우</li>
		<li>두 구문이 모두 <code>if</code>문이며 서로 동형일 경우</li>
		<li>두 구문이 모두 <code>if</code>-<code>else</code>문이며 서로 동형일 경우</li>
	</ul>
	</li>
	<li>두 <strong><code>if</code>문</strong>은 그 본문끼리 동형일 경우 동형이다.</li>
	<li>두 <strong><code>if</code>-<code>else</code>문</strong>은 두 본문을 순서대로 대응시켰을 때 동형일 경우 동형이다.</li>
	<li>두 <strong>본문</strong>은 다음 중 하나에 해당하면 동형이다.
	<ul>
		<li>두 본문이 모두 중괄호가 있으며, 구문 수가 같고 각 구문끼리 순서대로 대응시켰을 때 동형일 경우</li>
		<li>두 본문이 모두 중괄호의 유무와 상관 없이 단일 구문이며, 구문이 서로 동형일 경우</li>
	</ul>
	</li>
</ul>

<p>예를 들어, 1번 규칙을 고려하지 않는다면 소스 코드 <code>if { if ; } else ; end</code>와 소스 코드 <code>if if { ; } else { ; } end</code>는 동형이며, 그 이유를 다음과 같이 보일 수 있다.</p>

<ul>
	<li>두 소스 코드 모두 단일 구문(<code>if { if ; } else ;</code>와 <code>if if { ; } else { ; }</code>)으로 이루어져 있으며, 두 구문 모두 <code>if</code>-<code>else</code>문에 해당한다.

	<ul>
		<li>첫 번째 본문(<code>{ if ; }</code>와 <code>if { ; }</code>)이 모두 단일 구문으로 이루어져 있다.

		<ul>
			<li>두 구문 모두 <code>if</code>문에 해당하며, 본문(<code>;</code>와 <code>{ ; }</code>)이 서로 일치하는 단일 구문으로 이루어져 있다.</li>
		</ul>
		</li>
		<li>두 번째 본문(<code>;</code>와 <code>{ ; }</code>)이 서로 일치하는 단일 구문으로 이루어져 있다.</li>
	</ul>
	</li>
</ul>

<p>여러분에게 1번 규칙을 사용하는 소스 코드 $X$가 주어진다. 여러분은 이 소스 코드와 동형이면서 2번 규칙을 사용하는 소스 코드 $X'$를 찾아 출력해야 한다. 문제에서 주어진 소스 코드의 문법을 따를 때 그러한 소스 코드 $X'$는 유일함을 증명할 수 있다.</p>

### 입력 

 <p>첫 번째 줄에 문제에서 제시된 입력 문법을 만족하는 문자열이 주어진다. 토큰의 개수는 <code>"<span style="color:#e74c3c;">end</span>"</code>를 포함해서 최대 $1\,000$개이며, 입력의 앞뒤에 불필요한 공백이 주어지지 않는다.</p>

<p>형식적인 입력 문법은 아래와 같다. 이때 <code><input_stmt>*</code>는 <code><input_stmt></code>가 $0$개 이상 올 수 있다는 의미이다.</p>

<pre><input> ::= <input_stmt>* "end"
<input_block> ::= <input_stmt> | "{" <input_stmt>* "}"
<input_stmt> ::= ";" | <input_if>
<input_if> ::= "if" <input_block> | "if" <input_block> "else" <input_block></pre>

### 출력 

 <p>첫 번째 줄에 입력받은 프로그램을 파싱한 결과를 문제에서 제시된 출력 문법을 만족하도록 출력한다.</p>

<p>형식적인 출력 문법은 아래와 같다. 이는 위의 <code><input_block></code>에서 <code><input_stmt></code>만 제거한 것과 동일하다.</p>

<pre><output> ::= <output_stmt>* "end"
<output_block> ::= "{" <output_stmt>* "}"
<output_stmt> ::= ";" | <output_if>
<output_if> ::= "if" <output_block> | "if" <output_block> "else" <output_block></pre>

