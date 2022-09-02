/*************************************************************************************************/
/*!
 *  \file   mmdl_scene_sr.h
 *
 *  \brief  Interface of the Scene Server model.
 *
 *  Copyright (c) 2010-2018 Arm Ltd. All Rights Reserved.
 *
 *  Copyright (c) 2019 Packetcraft, Inc.
 *  
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *  
 *      http://www.apache.org/licenses/LICENSE-2.0
 *  
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */
/*************************************************************************************************/

#ifndef MMDL_SCENE_SR_H
#define MMDL_SCENE_SR_H

#ifdef __cplusplus
extern "C"
{
#endif

/**************************************************************************************************
  Function Declarations
**************************************************************************************************/

/*************************************************************************************************/
/*!
 *  \brief     Recalls a scene as a result of a binding with transition time.
 *
 *  \param[in] elementId   Identifier of the Element implementing the model.
 *  \param[in] sceneNumber Scene number.
 *  \param[in] transState  Transition time state.
 *
 *  \return    None.
 */
/*************************************************************************************************/
void MmdlSceneSrRecallSceneWithTrans(meshElementId_t elementId, mmdlSceneNumber_t sceneNumber,
                                     uint8_t transState);

#ifdef __cplusplus
}
#endif

#endif /* MMDL_SCENE_SR_H */
