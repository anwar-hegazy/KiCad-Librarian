/*
 *  Librarian for KiCad, a free EDA CAD application.
 *  Loading and drawing of VRML models, based on the CyberX3D library.
 *
 *  Copyright (C) 2015 CompuPhase
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you may not
 *  use this file except in compliance with the License. You may obtain a copy
 *  of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 *  License for the specific language governing permissions and limitations
 *  under the License.
 *
 *  $Id: vrmlsupport.h 5686 2017-05-24 13:56:46Z thiadmer $
 */
#ifndef VRMLSUPPORT_H
#define VRMLSUPPORT_H

#if !defined NO_3DMODEL

#define CX3D_SUPPORT_OPENGL
#include <cybergarage/x3d/CyberX3D.h>

enum {
  OGL_RENDERING_WIRE,
  OGL_RENDERING_SHADE,
  OGL_RENDERING_TEXTURE,
};
void DrawSceneGraph(CyberX3D::SceneGraph* sceneGraph, int drawMode, float AngleX, float AngleZ);

void SetSceneGraphBackground(unsigned long rgb);

#endif /* !defined NO_3DMODEL */

#endif /* VRMLSUPPORT_H */
