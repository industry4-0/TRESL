// Copyright (c) 2018, Boris Bogaerts
// All rights reserved.

// Copyright (c) 2019, Athabasca University, UofPatras, RealTwin, Gaia-Net Solutions Inc.
// Industry 4.0 Hackathon NOW SEV, Athens Greece (December 1st, 2029) 
// All rights reserved.
// Note: Changes to operate with Oculus Rift S, for demonstrative purposes

// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:

// 1. Redistributions of source code must retain the above copyright 
// notice, this list of conditions and the following disclaimer.

// 2. Redistributions in binary form must reproduce the above copyright 
// notice, this list of conditions and the following disclaimer in the 
// documentation and/or other materials provided with the distribution.

// 3. Neither the name of the copyright holder nor the names of its 
// contributors may be used to endorse or promote products derived from 
// this software without specific prior written permission.

// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#pragma once
#include <vtkSmartPointer.h>
#include <vtkPolyData.h>
#include <string>

class vrep_mesh_reader {
public:
	vrep_mesh_reader() { };
	int read_mesh(int clientID, int meshIndex, int &h, int &v);
	vtkSmartPointer<vtkPolyData> getMeshData();
	std::string getName() { return objectName; };
	float color[3];
	int visibilityLayer;
	float opacity;
	bool getTexture() { return texture; };
protected:

private:
	vtkSmartPointer<vtkPolyData> mesh = vtkSmartPointer<vtkPolyData>::New();
	std::string objectName;
	bool texture = false;
};
