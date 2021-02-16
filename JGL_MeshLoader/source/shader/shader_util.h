#pragma once

#include "elems/camera.h"

namespace nshaders
{

	// Utitlity class to load, compile and attach a vertex- and fragment shader to a program
	class Shader
	{

	private:
		unsigned int mProgramId;

		unsigned int get_compiled_shader(unsigned int shader_type, const std::string& shader_source);

	public:
		Shader() = default;

		// Load a vertex and a fragment shader from file
		bool load(const std::string& vertexshader_file, const std::string& fragmentshader_file);

		// Use the program
		void use();

    void update(const nelems::Camera* camera);

		// Delete the program
		void unload();

    unsigned int get_program_id() { return mProgramId; }

    void set_vec4(const glm::vec4& vec4, const std::string& name);



	};
}

