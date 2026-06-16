/* There is a well-known city (which will go nameless here) whose inhabitants
 * have the reputation of enjoying a meal only if that meal is the best
 * they have ever experienced in their life. Otherwise, they hate it.
 * Assuming meal quality is distributed uniformly across a person’s life,
 * what is the expected number of times inhabitants of this city
 * are happy with theirmeals?
 */

/* * The expected number of times an inhabitant is happy is the N-th Harmonic number,
 * where N is the total number of meals they eat in their lifetime.
 *
 * Here is the step-by-step logic:
 * 1. The very first meal they eat is guaranteed to be the best so far. Probability = 1/1.
 * 2. The second meal has a 1 in 2 chance of being better than the first. Probability = 1/2.
 * 3. The i-th meal has a 1 in i chance of being the highest quality out of the 'i'
 * meals eaten up to that point (since quality is uniformly distributed).
 *
 * Using the linearity of expectation, the expected total number of happy meals E is
 * the sum of the probabilities of each meal being a "record-breaker":
 * * E = 1/1 + 1/2 + 1/3 + ... + 1/N
 *
 * This sum is known as the N-th Harmonic number (H_N).
 * For large values of N, H_N is closely approximated by the natural logarithm of N
 * plus the Euler-Mascheroni constant (gamma ≈ 0.5772):
 *
 * E ≈ ln(N) + 0.5772
 *
 * To put this in perspective: If an inhabitant eats 3 meals a day for 80 years
 * (N = 87,600 meals), their expected number of happy meals is:
 * ln(87,600) + 0.5772 ≈ 11.38 + 0.5772 ≈ 11.95
 *
 * So, despite eating tens of thousands of times, they will only actually enjoy
 * their meal about 12 times in their entire life!
 */

int main() { return 0; }
