//
// Created by constantin on 12/09/2020.
//

#ifndef RAYTRACING_RENDERER_H
#define RAYTRACING_RENDERER_H


#include "Vector.h"

class Renderer {
public:
    unsigned int width;
    unsigned int height;
    const unsigned int maxThread = 32;
    static Vector3f backgroundColor;
    Renderer(const int & width, const int& height,const Vector3f & BG=Vector3f(200,200,200));
    void render();
    void renderThread();

    void threadRayCast(Vector3f *framebuffer,const Vector3f & origin, const float & fov, const float &ratio, const unsigned int & offset);

    void saveToFile(const Vector3f * frameBuffer);

private:
    Vector3f * frameBuffer;
};

float clamp(const float & low, const float & high, const float &val);
float deg2rad(const float &deg);


#endif //RAYTRACING_RENDERER_H
