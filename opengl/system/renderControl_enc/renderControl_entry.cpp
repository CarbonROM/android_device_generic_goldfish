// Generated Code - DO NOT EDIT !!
// generated by 'emugen'
#include <stdio.h>
#include <stdlib.h>
#include "renderControl_client_context.h"

#ifndef GL_TRUE
extern "C" {
	GLint rcGetRendererVersion();
	EGLint rcGetEGLVersion(EGLint* major, EGLint* minor);
	EGLint rcQueryEGLString(EGLenum name, void* buffer, EGLint bufferSize);
	EGLint rcGetGLString(EGLenum name, void* buffer, EGLint bufferSize);
	EGLint rcGetNumConfigs(uint32_t* numAttribs);
	EGLint rcGetConfigs(uint32_t bufSize, GLuint* buffer);
	EGLint rcChooseConfig(EGLint* attribs, uint32_t attribs_size, uint32_t* configs, uint32_t configs_size);
	EGLint rcGetFBParam(EGLint param);
	uint32_t rcCreateContext(uint32_t config, uint32_t share, uint32_t glVersion);
	void rcDestroyContext(uint32_t context);
	uint32_t rcCreateWindowSurface(uint32_t config, uint32_t width, uint32_t height);
	void rcDestroyWindowSurface(uint32_t windowSurface);
	uint32_t rcCreateColorBuffer(uint32_t width, uint32_t height, GLenum internalFormat);
	void rcOpenColorBuffer(uint32_t colorbuffer);
	void rcCloseColorBuffer(uint32_t colorbuffer);
	void rcSetWindowColorBuffer(uint32_t windowSurface, uint32_t colorBuffer);
	int rcFlushWindowColorBuffer(uint32_t windowSurface);
	EGLint rcMakeCurrent(uint32_t context, uint32_t drawSurf, uint32_t readSurf);
	void rcFBPost(uint32_t colorBuffer);
	void rcFBSetSwapInterval(EGLint interval);
	void rcBindTexture(uint32_t colorBuffer);
	void rcBindRenderbuffer(uint32_t colorBuffer);
	EGLint rcColorBufferCacheFlush(uint32_t colorbuffer, EGLint postCount, int forRead);
	void rcReadColorBuffer(uint32_t colorbuffer, GLint x, GLint y, GLint width, GLint height, GLenum format, GLenum type, void* pixels);
	int rcUpdateColorBuffer(uint32_t colorbuffer, GLint x, GLint y, GLint width, GLint height, GLenum format, GLenum type, void* pixels);
	int rcOpenColorBuffer2(uint32_t colorbuffer);
	uint32_t rcCreateClientImage(uint32_t context, EGLenum target, GLuint buffer);
	int rcDestroyClientImage(uint32_t image);
};

#endif
#ifndef GET_CONTEXT
static renderControl_client_context_t::CONTEXT_ACCESSOR_TYPE *getCurrentContext = NULL;
void renderControl_client_context_t::setContextAccessor(CONTEXT_ACCESSOR_TYPE *f) { getCurrentContext = f; }
#define GET_CONTEXT renderControl_client_context_t * ctx = getCurrentContext()
#endif

GLint rcGetRendererVersion()
{
	GET_CONTEXT;
	return ctx->rcGetRendererVersion(ctx);
}

EGLint rcGetEGLVersion(EGLint* major, EGLint* minor)
{
	GET_CONTEXT;
	return ctx->rcGetEGLVersion(ctx, major, minor);
}

EGLint rcQueryEGLString(EGLenum name, void* buffer, EGLint bufferSize)
{
	GET_CONTEXT;
	return ctx->rcQueryEGLString(ctx, name, buffer, bufferSize);
}

EGLint rcGetGLString(EGLenum name, void* buffer, EGLint bufferSize)
{
	GET_CONTEXT;
	return ctx->rcGetGLString(ctx, name, buffer, bufferSize);
}

EGLint rcGetNumConfigs(uint32_t* numAttribs)
{
	GET_CONTEXT;
	return ctx->rcGetNumConfigs(ctx, numAttribs);
}

EGLint rcGetConfigs(uint32_t bufSize, GLuint* buffer)
{
	GET_CONTEXT;
	return ctx->rcGetConfigs(ctx, bufSize, buffer);
}

EGLint rcChooseConfig(EGLint* attribs, uint32_t attribs_size, uint32_t* configs, uint32_t configs_size)
{
	GET_CONTEXT;
	return ctx->rcChooseConfig(ctx, attribs, attribs_size, configs, configs_size);
}

EGLint rcGetFBParam(EGLint param)
{
	GET_CONTEXT;
	return ctx->rcGetFBParam(ctx, param);
}

uint32_t rcCreateContext(uint32_t config, uint32_t share, uint32_t glVersion)
{
	GET_CONTEXT;
	return ctx->rcCreateContext(ctx, config, share, glVersion);
}

void rcDestroyContext(uint32_t context)
{
	GET_CONTEXT;
	ctx->rcDestroyContext(ctx, context);
}

uint32_t rcCreateWindowSurface(uint32_t config, uint32_t width, uint32_t height)
{
	GET_CONTEXT;
	return ctx->rcCreateWindowSurface(ctx, config, width, height);
}

void rcDestroyWindowSurface(uint32_t windowSurface)
{
	GET_CONTEXT;
	ctx->rcDestroyWindowSurface(ctx, windowSurface);
}

uint32_t rcCreateColorBuffer(uint32_t width, uint32_t height, GLenum internalFormat)
{
	GET_CONTEXT;
	return ctx->rcCreateColorBuffer(ctx, width, height, internalFormat);
}

void rcOpenColorBuffer(uint32_t colorbuffer)
{
	GET_CONTEXT;
	ctx->rcOpenColorBuffer(ctx, colorbuffer);
}

void rcCloseColorBuffer(uint32_t colorbuffer)
{
	GET_CONTEXT;
	ctx->rcCloseColorBuffer(ctx, colorbuffer);
}

void rcSetWindowColorBuffer(uint32_t windowSurface, uint32_t colorBuffer)
{
	GET_CONTEXT;
	ctx->rcSetWindowColorBuffer(ctx, windowSurface, colorBuffer);
}

int rcFlushWindowColorBuffer(uint32_t windowSurface)
{
	GET_CONTEXT;
	return ctx->rcFlushWindowColorBuffer(ctx, windowSurface);
}

EGLint rcMakeCurrent(uint32_t context, uint32_t drawSurf, uint32_t readSurf)
{
	GET_CONTEXT;
	return ctx->rcMakeCurrent(ctx, context, drawSurf, readSurf);
}

void rcFBPost(uint32_t colorBuffer)
{
	GET_CONTEXT;
	ctx->rcFBPost(ctx, colorBuffer);
}

void rcFBSetSwapInterval(EGLint interval)
{
	GET_CONTEXT;
	ctx->rcFBSetSwapInterval(ctx, interval);
}

void rcBindTexture(uint32_t colorBuffer)
{
	GET_CONTEXT;
	ctx->rcBindTexture(ctx, colorBuffer);
}

void rcBindRenderbuffer(uint32_t colorBuffer)
{
	GET_CONTEXT;
	ctx->rcBindRenderbuffer(ctx, colorBuffer);
}

EGLint rcColorBufferCacheFlush(uint32_t colorbuffer, EGLint postCount, int forRead)
{
	GET_CONTEXT;
	return ctx->rcColorBufferCacheFlush(ctx, colorbuffer, postCount, forRead);
}

void rcReadColorBuffer(uint32_t colorbuffer, GLint x, GLint y, GLint width, GLint height, GLenum format, GLenum type, void* pixels)
{
	GET_CONTEXT;
	ctx->rcReadColorBuffer(ctx, colorbuffer, x, y, width, height, format, type, pixels);
}

int rcUpdateColorBuffer(uint32_t colorbuffer, GLint x, GLint y, GLint width, GLint height, GLenum format, GLenum type, void* pixels)
{
	GET_CONTEXT;
	return ctx->rcUpdateColorBuffer(ctx, colorbuffer, x, y, width, height, format, type, pixels);
}

int rcOpenColorBuffer2(uint32_t colorbuffer)
{
	GET_CONTEXT;
	return ctx->rcOpenColorBuffer2(ctx, colorbuffer);
}

uint32_t rcCreateClientImage(uint32_t context, EGLenum target, GLuint buffer)
{
	GET_CONTEXT;
	return ctx->rcCreateClientImage(ctx, context, target, buffer);
}

int rcDestroyClientImage(uint32_t image)
{
	GET_CONTEXT;
	return ctx->rcDestroyClientImage(ctx, image);
}

