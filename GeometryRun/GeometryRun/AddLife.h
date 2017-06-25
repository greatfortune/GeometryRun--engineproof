/**
 * Project:		GeometryRun
 * File Name:	AddLife.h
 * Author:		�ƽ�ˮ
 * Date:		2017-6-24
 */
#pragma once

#include "GameObjectManager.h"
#include "KeyAndObjUpdate.h"
#include "Player.h"

Status AddLifeLoad();

Status AddLifeStart();

Status AddLifeUpdate(GameObj* pInst);

Status AddLifeCollision(GameObj* pInst);

GameObj* AddLifeCreateAtPosWithVel(Vector2D AddLifePos, Vector2D AddLifeVel);

GameObj* AddLifeCreateAtPos(Vector2D AddLifePos);

float AddLifeScaleGet();

Status AddLifeDefaultVelSet(float vx, float vy);

Status AddLifeDefaultVxChange(float change);