
struct FragOut
{
    float4 color;
};

float4 main(FragOut o) : SV_TARGET
{
	
	return o.color;
}