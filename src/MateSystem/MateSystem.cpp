//****************************************************************
//* This file is part of the AsFem framework
//* A Simple Finite Element Method program (AsFem)
//* All rights reserved, Yang Bai @ CopyRight 2019
//* https://github.com/walkandthinker/AsFem
//* Licensed under GNU GPLv3, please see LICENSE for details
//* https://www.gnu.org/licenses/gpl-3.0.en.html
//****************************************************************


#include "MateSystem/MateSystem.h"

MateSystem::MateSystem(){
    _ScalarMaterials.clear();
    _Rank2Materials.clear();
    _Rank4Materials.clear();
    _MateBlockList.clear();
    _nMateBlocks=0;
}