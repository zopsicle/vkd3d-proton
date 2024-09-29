struct VsOut
{
    float4 position : SV_POSITION;
    float3 arg0 : ARG0;
    float2 arg1 : ARG1;
    uint2 arg2 : ARG2;
};

struct HsOut
{
    float4 position : SV_POSITION;
    float3 arg0 : ARG0;
    float2 arg1 : ARG1;
    uint4 arg2 : ARG2;
};

struct HsPatch
{
    float tf_outer[3] : SV_TESSFACTOR;
    float tf_inner : SV_INSIDETESSFACTOR;
};

HsPatch main_patch()
{
    HsPatch result;
    result.tf_outer[0] = 4.0f;
    result.tf_outer[1] = 4.0f;
    result.tf_outer[2] = 4.0f;
    result.tf_inner = 4.0f;
    return result;
}

[domain("tri")]
[partitioning("integer")]
[outputtopology("triangle_cw")]
[outputcontrolpoints(3)]
[patchconstantfunc("main_patch")]
HsOut main(uint cid : SV_OutputControlPointID, InputPatch<VsOut, 3> in_patch)
{
    HsOut result;
    result.position = in_patch[cid].position;
    result.arg0 = in_patch[cid].arg0;
    result.arg1 = in_patch[cid].arg1;
    result.arg2 = in_patch[cid].arg2.xyxy;
    return result;
}
