#pragma once

#include "abstractLight.h"

class PointLight : public AbstractLight {
public:

	PointLight();
	virtual ~PointLight();
    
    /* The position is relative to the camera */
    void setPosition(const glm::vec3 &_pos );
    void setAttenuation(float _constant = 0.0, float _linear = 0.0, float _quadratic = 0.0);
    
    virtual std::string getTransform();

    virtual void setupProgram( ShaderProgram &_program );
    
protected:
    glm::vec4	m_position;

    float m_constantAttenuation;
    float m_linearAttenuation;
    float m_quadraticAttenuation;
};