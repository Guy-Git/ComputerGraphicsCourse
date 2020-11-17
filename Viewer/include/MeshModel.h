#pragma once
#include <glm/glm.hpp>
#include <string>
#include "Face.h"

class MeshModel
{
public:
	MeshModel(std::vector<Face> faces, std::vector<glm::vec3> vertices, std::vector<glm::vec3> normals, const std::string& model_name);
	virtual ~MeshModel();
	const Face& GetFace(int index) const;
	int GetFacesCount() const;
	const std::string& GetModelName() const;
	int MeshModel::GetVerticesCount() const;
	const glm::vec3& MeshModel::GetVertex(int index) const;
	float MeshModel::GetScaleFactor();
	void MeshModel::SetScaleFactor(float scaleFactor);
	void MeshModel::SetRotateAngle(glm::vec3 rotateAngle);
	glm::vec3 MeshModel::GetRotateAngle();
	void MeshModel::SetNewPosition(glm::vec3 newPos);
	glm::vec3 MeshModel::GetPosition();

	void SetFaceNormalShown(bool isShown);
	bool GetFaceNormalShown();
	void SetVertexNormalShown(bool isShown);
	bool GetVertexNormalShown();

	const glm::vec3& MeshModel::GetVertexNormal(int index) const;

	void SetBoundingBoxShown(bool isShown);

	bool GetBoundingBoxShown();

private:
	std::vector<Face> faces_;
	std::vector<glm::vec3> vertices_;
	std::vector<glm::vec3> normals_;
	std::string model_name_;

	float scaleFactor_;
	glm::vec3 rotateAngle_;
	glm::vec3 position_;

	bool isFaceNormalShown_;
	bool isVertexNormalShown_;
	bool isBoundingBoxShown_;
};
