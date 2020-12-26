#include "MeshModel.h"

MeshModel::MeshModel(std::vector<Face> faces, std::vector<glm::vec3> vertices, std::vector<glm::vec3> normals, const std::string& model_name) :
	faces_(faces),
	vertices_(vertices),
	normals_(normals),
	model_name_(model_name),
	scaleFactor_(1),
	rotateAngle_(0),
	position_(0),
	isFaceNormalShown_(false),
	isVertexNormalShown_(false),
	isBoundingBoxShown_(false),
	isLightRotating_(false),
	ambient_(0.5),
	diffuse_(0.5),
	specular_(0.5),
	lightModel_(0)
{

}

MeshModel::~MeshModel()
{

}

const Face& MeshModel::GetFace(int index) const
{
	return faces_[index];
}

int MeshModel::GetFacesCount() const
{
	return faces_.size();
}

const std::string& MeshModel::GetModelName() const
{
	return model_name_;
}

int MeshModel::GetVerticesCount() const
{
	return vertices_.size();
}

const glm::vec3& MeshModel::GetVertex(int index) const
{
	return vertices_.at(index);
}

const glm::vec3& MeshModel::GetVertexNormal(int index) const
{
	return normals_.at(index);
}

void MeshModel::SetScaleFactor(float scaleFactor)
{
	MeshModel::scaleFactor_ = scaleFactor;
}

float MeshModel::GetScaleFactor()
{
	return MeshModel::scaleFactor_;
}

void MeshModel::SetRotateAngle(glm::vec3 rotateAngle)
{
	MeshModel::rotateAngle_ = rotateAngle;
}

glm::vec3 MeshModel::GetRotateAngle()
{
	return MeshModel::rotateAngle_;
}

void MeshModel::SetNewPosition(glm::vec3 newPos)
{
	position_ = newPos;
}

glm::vec3 MeshModel::GetPosition()
{
	return position_;
}

void MeshModel::SetFaceNormalShown(bool isShown)
{
	isFaceNormalShown_ = isShown;
}

bool MeshModel::GetFaceNormalShown()
{
	return isFaceNormalShown_;
}

void MeshModel::SetVertexNormalShown(bool isShown)
{
	isVertexNormalShown_ = isShown;
}

bool MeshModel::GetVertexNormalShown()
{
	return isVertexNormalShown_;
}

void MeshModel::SetBoundingBoxShown(bool isShown)
{
	isBoundingBoxShown_ = isShown;
}

bool MeshModel::GetBoundingBoxShown()
{
	return isBoundingBoxShown_;
}

void MeshModel::SetMinMax(glm::vec4 minMaxVector)
{
	minMaxXY_ = minMaxVector;
}

glm::vec4 MeshModel::GetMinMax()
{
	return minMaxXY_;
}

void MeshModel::SetColorOfMesh(glm::vec3 colorOfMesh)
{
	colorOfMesh_ = colorOfMesh;
}

glm::vec3 MeshModel::GetColorOfMesh()
{
	return colorOfMesh_;
}

void MeshModel::SetAmbient(float ambient)
{
	ambient_ = ambient;
}

float MeshModel::GetAmbient()
{
	return ambient_;
}

void MeshModel::SetDiffuse(float diffuse)
{
	diffuse_ = diffuse;
}

float MeshModel::GetDiffuse()
{
	return diffuse_;
}

void MeshModel::SetSpecular(float specular)
{
	specular_ = specular;
}

float MeshModel::GetSpecular()
{
	return specular_;
}

void MeshModel::SetLightModel(int lightModel)
{
	lightModel_ = lightModel;
}

float MeshModel::GetLightModel()
{
	return lightModel_;
}


