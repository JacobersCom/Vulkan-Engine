
struct FragOut
{
    float4 color : COLOR0;
};

float4 main(FragOut o) : SV_TARGET
{
	
	return o.color;
}