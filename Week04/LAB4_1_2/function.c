extern float g_i;
float sum(float a, float b);

float sum_2(float a, float b)
{
	return g_i + sum(a, b);
}
float sum(float a, float b)
{
	return a + b;
}