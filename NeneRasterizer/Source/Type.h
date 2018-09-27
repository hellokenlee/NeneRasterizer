/*Copyright reserved by KenLee@2018 ken4000kl@gmail.com*/
#ifndef TYPES_H
#define TYPES_H

// Commons
#ifndef M_PI
	#define M_PI 3.141592653f
#endif

#define M_PI_TIMES_2 6.283185306f
#define M_PI_OVER_2 1.5707963265f

// 顶点格式
enum NNVertexFormat {
	UNDEFINE = 0, POSITION = 3, POSITION_TEXTURE = 5, POSITION_NORMAL = 6, POSITION_NORMAL_TEXTURE = 8,
};

// 纹理种类
enum NNTextureType {
	DIFFUSE = 0, SPECULAR = 1, REFLECT = 2, NORMAL = 3, ROUGHNESS = 4,
	HEIGHT = 5, AMBIENT_OCCLUSION = 6,
};

// 绘制模式
enum NNPolygonMode {
	FILL_CULL, FILL_NO_CULL, WIRE_FRAME, VERTEX,
};

// 着色器类型
enum NNShaderType {
	VERTEX_SHADER, FRAGMENT_SHADER, GEOMETRY_SHADER, 
	TESS_CONTROL_SHADER, TESS_EVALUATE_SHADER, 
};

// 图元类型
enum NNDrawMode {
	NN_POINT,
	NN_LINE,
	NN_LINE_STRIP,
	NN_TRIANGLE,
	NN_TRIANGLE_STRIP,
};

#endif // TYPES_H
