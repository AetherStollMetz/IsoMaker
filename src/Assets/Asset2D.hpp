#pragma once

#include "AAsset.hpp"

class Asset2D : public AAsset
{
    public:
        Asset2D();
        ~Asset2D();
        Texture2D getTexture();
        void loadFile();

    protected:
        bool _textureLoaded;
        Texture2D _texture;
};