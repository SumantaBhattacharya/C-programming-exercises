# ***[`19. Beta Function | Complete Concept | Multiple Integrals | Most Important`](https://youtu.be/ffNpqBVyYew?si=aHLhqCow-tFRsZ-x)***
[![19. Beta Function | Complete Concept | Multiple Integrals | Most Important](https://img.youtube.com/vi/ffNpqBVyYew/0.jpg)](https://youtu.be/ffNpqBVyYew?si=aHLhCow-tFRsZ-x)

**1. The Standard formula**
The Beta function $B(m, n)$ is defined as:
$$ B(m, n) = \int_0^1 x^{m-1} (1-x)^{n-1} dx \quad \text{for } m, n > 0 $$

**2. Property 1:**
$$ B(m, n) = B(n, m) $$

**3. Property 2:**
$$ B(m, n) = 2 \int_0^{\frac{\pi}{2}} \sin^{2m-1}\theta \cos^{2n-1}\theta d\theta $$

**4. Property 3:**
$$ B(m, n) = \int_0^\infty \frac{x^{m-1}}{(1+x)^{m+n}} dx $$

---

# ***[`20. Gamma Function | Complete Concept | Multiple Integrals | Most Important`](https://youtu.be/EvrcuJOgjQo?si=GZYYTzRs9bVYMg6J)***
[![20. Gamma Function | Complete Concept | Multiple Integrals | Most Important](https://img.youtube.com/vi/EvrcuJOgjQo/0.jpg)](https://youtu.be/EvrcuJOgjQo?si=GZYYTzRs9bVYMg6J)

<!--
**Gamma Function** where $n=1$

$$ \Gamma(1) = \int_0^\infty e^{-x} x^{1-1} dx = \int_0^\infty e^{-x} dx = \left[ \frac{e^{-x}}{-1} \right]_0^\infty $$

Here is the step-by-step breakdown of how to integrate $e^{-x}$ and evaluate it with those limits.

### Step 1: Find the Indefinite Integral (Antiderivative)

$$ \int e^{ax} dx = \frac{e^{ax}}{a} $$

$a = -1$. Applying the rule:

$$ \int e^{-x} dx = \frac{e^{-x}}{-1} = -e^{-x} $$
-->

*   **$\Gamma(1) = 1$**
*   **$\Gamma(n+1) = n\Gamma(n)$**
*   **$\Gamma(n) = (n-1)!$**

*   $\Gamma(2) = \Gamma(1+1) = 1 \cdot \Gamma(1) = 1 \cdot 1 = 1 = 1!$
*   $\Gamma(3) = \Gamma(2+1) = 2 \cdot \Gamma(2) = 2 \cdot 1 = 2 = 2!$

### Evaluating $\Gamma(3/2)$ and $\Gamma(5/2)$

1.  **Base Value:** $\Gamma(1/2) = \sqrt{\pi}$

**Step 1: Find $\Gamma(3/2)$**
Using the recurrence relation, let $z = 1/2$. Then $z+1 = 3/2$.
$$ \Gamma(3/2) = \Gamma(1/2 + 1) = \frac{1}{2} \Gamma(1/2) $$
$$ \Gamma(3/2) = \frac{1}{2} \sqrt{\pi} = \frac{\sqrt{\pi}}{2} $$

---

# ***[`21. Relation between Beta and Gamma Functions | Problem 1 | Very Important`](https://youtu.be/z-A7VaVloo4?si=y3MEKNnzmNrI3_e7)***
[![21. Relation between Beta and Gamma Functions | Problem 1 | Very Important](https://img.youtube.com/vi/z-A7VaVloo4/0.jpg)](https://youtu.be/z-A7VaVloo4?si=y3MEKNnzmNrI3_e7)

The Beta function and Gamma function are linked:
$$ B(m, n) = \frac{\Gamma(m)\Gamma(n)}{\Gamma(m+n)} $$
where $m > 0$ and $n > 0$ .