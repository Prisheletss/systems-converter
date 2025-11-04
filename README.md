# Idea
+ Create an algorithm of translation real numbers between different real bases
+ Create an engine of calculations in different bases



# Realisation
### Main.cpp
Example: 
+ evaluate 13 in binary
+ evaluate -40 in ternary
+ evaluate 10 in unitary


### Functions.h
<table>
    <thread>
        <tr>
            <th scope="col">Function</th>
            <th scope="col">Example</th>
            <th scope="col">definition</th>
        </tr>
    </thread>
    <tbody>
        <tr>
            <th scope="row"><code>vector&lt;int&gt; convert_10(int num, int base)</code></th>
            <td><pre><code class="language-cpp">
vector&lt;int&gt; a = convert_10(10, 3);
// 1-1101-10
            </code></pre></td>
            <td>
                Convert number from decimal to base.
                First number -- sing, than -1, than integer part, than -1, than fraction part
            </td>
        </tr>
        <tr>
            <th scope="row"><code>void print(vector&lt;T&gt; list)</code></th>
            <td><pre><code class="language-cpp">
vector&lt;int&gt; a = convert_10(10, 3);
print(a);
>>> 1-1101-10
            </code></pre></td>
            <td>Printing a vector (like in pyton)</td>
        </tr>
    </tbody>
</table>



### Imports.h
+ algorithm
+ stdexcept
+ iostream
+ vector



# Problems
can work only with natural bases and integer numbers
