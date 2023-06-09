#pragma once
#include "ViewProjection.h"
#include "WorldTransform.h"
#include "Model.h"
#include "MathUtilityForText.h"
#include "Input.h"

class Player
{
public:

	Player();
	~Player();

	void Initialize(ViewProjection view);
	void Update();
	void Draw3D();

private:

	Input* input_ = nullptr;

	ViewProjection viewProjection_;

	uint32_t textureHandlePlayer_ = 0;
	Model* modelPlayer_ = nullptr;
	WorldTransform worldTransformPlayer_;
};