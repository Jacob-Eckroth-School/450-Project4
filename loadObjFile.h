#ifndef helpful
#define helpful
struct Vertex
{
	float x, y, z;
};




struct Normal
{
	float nx, ny, nz;
};


struct TextureCoord
{
	float s, t, p;
};


struct face
{
	int v, n, t;
};



void	Cross(float[3], float[3], float[3]);
char* ReadRestOfLine(FILE*);
void	ReadObjVTN(char*, int*, int*, int*);
float	Unit(float[3]);
float	Unit(float[3], float[3]);

int LoadObjFile(char* name);

void	SetMaterial(float, float, float, float);


float* Array3(float, float, float);
float* MulArray3(float, float array[3]);
void SetPointLight(int ilight, float x, float y, float z, float r, float g, float b);
void SetSpotLight(int ilight, float x, float y, float z, float xdir, float ydir, float zdir, float r, float g, float b);

void scaleRGB(float&, float&, float&);
void SetSameSideMaterial(float r, float g, float b, float shininess);


#endif