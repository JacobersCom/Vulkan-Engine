

float4 main(int vertexID : SV_VertexID ) : SV_POSITION
{
    float2 positions[3] =
    {
        float2(0.0, -0.5), //Top
        float2(0.5, 0.5), //
        float2(-0.5, -0.5)
    };
	
   float4 pos = float4(positions[vertexID], 0.0, 1.0);
    
	return pos;
}