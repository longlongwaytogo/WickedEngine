#ifndef _CONSTANTBUFFER_MAPPING_H_
#define _CONSTANTBUFFER_MAPPING_H_

// Slot matchings:
////////////////////////////////////////////////////

// Persistent buffers:
// These are bound once and are alive forever
#define CBSLOT_RENDERER_FRAME					0
#define CBSLOT_RENDERER_CAMERA					1
#define CBSLOT_RENDERER_MISC					2

#define CBSLOT_IMAGE_IMAGE						3
#define CBSLOT_IMAGE_POSTPROCESS				4

#define CBSLOT_API								5


// On demand buffers:
// These are bound on demand and alive until another is bound at the same slot
#define CBSLOT_RENDERER_MATERIAL				6
#define CBSLOT_RENDERER_CUBEMAPRENDER			7
#define CBSLOT_RENDERER_VOLUMELIGHT				7
#define CBSLOT_RENDERER_LENSFLARE				7
#define CBSLOT_RENDERER_DECAL					7
#define CBSLOT_RENDERER_TESSELLATION			7
#define CBSLOT_RENDERER_DISPATCHPARAMS			7
#define CBSLOT_RENDERER_VOXELIZER				7
#define CBSLOT_RENDERER_TRACED					7
#define CBSLOT_RENDERER_BVH						7
#define CBSLOT_RENDERER_UTILITY					7

#define CBSLOT_OTHER_EMITTEDPARTICLE			7
#define CBSLOT_OTHER_HAIRPARTICLE				7
#define CBSLOT_OTHER_FFTGENERATOR				7
#define CBSLOT_OTHER_OCEAN_SIMULATION_IMMUTABLE	7
#define CBSLOT_OTHER_OCEAN_SIMULATION_PERFRAME	8
#define CBSLOT_OTHER_OCEAN_RENDER				7
#define CBSLOT_OTHER_CLOUDGENERATOR				7
#define CBSLOT_OTHER_GPUSORTLIB					8



#endif // _CONSTANTBUFFER_MAPPING_H_
