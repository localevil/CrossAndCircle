#include "image.h"

CImage::CImage(std::string passed_file, int x, int y, int width, int height, SDL_Renderer *renderer)
    {
        ren = renderer;
        image = IMG_LoadTexture(ren, passed_file.c_str());

    if(image == nullptr)
    {
        std::cout << "IMG_LoadTexture Error" << passed_file << IMG_GetError() << std::endl;
    }

        image_rect.x = x;
        image_rect.y = y;
        image_rect.h = height;
        image_rect.w = width;
    
    }

void CImage::draw()
{
    SDL_RenderCopy(ren, image, NULL, &image_rect);
}

CImage::~CImage()
{
    SDL_DestroyTexture(image);
}