#pragma once

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <vector>
#include <string>
#include <memory>
#include "MeshModel.h"
#include "AmbientLight.h"
#include "PointLight.h"
#include "Camera.h"

class Scene {
private:
	std::vector<std::shared_ptr<MeshModel>> models;
	Light light;
	AmbientLight ambientLight;
	std::vector<Camera> cameras;

	int activeCameraIndex;
	int activeModelIndex;

public:
	Scene();

	void AddModel(const std::shared_ptr<MeshModel>& model);
	int GetModelCount() const;
	std::shared_ptr<MeshModel> GetModel(int index) const;

	void AddCamera(const Camera& camera);
	int GetCameraCount() const;
	Camera& GetCamera(int index);
	const Camera& GetCamera(int index) const;

	void AddLight();
	Light& Scene::GetActiveLight();

	const AmbientLight& GetAmbientLight();

	const Camera& GetActiveCamera() const;
	Camera& GetActiveCamera();

	void SetActiveCameraIndex(int index);
	const int GetActiveCameraIndex() const;

	const std::shared_ptr<MeshModel>& GetActiveModel() const;

	void SetActiveModelIndex(int index);
	const int GetActiveModelIndex() const;
};