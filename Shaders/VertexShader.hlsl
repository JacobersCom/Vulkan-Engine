
struct VSout
{
    float4 pos : SV_Position;
    float4 color : COLOR;
};

VSout main(uint vertexID : SV_VertexID ) : SV_POSITION
{
    float2 positions[3] =
    {
        float2(0.0, -0.5), 
        float2(0.5, 0.5), 
        float2(-0.5, -0.5)
    };
	
    
    VSout o;
    
   o.pos = float4(positions[vertexID], 0.0, 1.0);

	return o;
}