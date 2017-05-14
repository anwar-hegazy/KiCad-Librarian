#ifndef ZOOMOUT_PNG_H
#define ZOOMOUT_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char ZoomOut_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x20, 
	0x00, 0x00, 0x00, 0x20, 0x08, 0x06, 0x00, 0x00, 0x00, 0x73, 
	0x7A, 0x7A, 0xF4, 0x00, 0x00, 0x00, 0x06, 0x62, 0x4B, 0x47, 
	0x44, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xA0, 0xBD, 0xA7, 
	0x93, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 
	0x00, 0x0B, 0x13, 0x00, 0x00, 0x0B, 0x13, 0x01, 0x00, 0x9A, 
	0x9C, 0x18, 0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 0x4D, 0x45, 
	0x07, 0xE1, 0x02, 0x14, 0x13, 0x36, 0x10, 0x3E, 0xBC, 0x6D, 
	0x17, 0x00, 0x00, 0x04, 0xDC, 0x49, 0x44, 0x41, 0x54, 0x58, 
	0xC3, 0xED, 0x57, 0x6B, 0x4C, 0x54, 0x47, 0x14, 0xFE, 0xE6, 
	0xDE, 0x5D, 0x56, 0xD6, 0xC5, 0xA5, 0xA0, 0x40, 0xA1, 0x3C, 
	0x0A, 0x5B, 0x79, 0x74, 0xA5, 0x40, 0x56, 0x23, 0x14, 0xB0, 
	0x08, 0x45, 0x69, 0x74, 0x6B, 0x7D, 0xC4, 0x48, 0x6D, 0x49, 
	0x8B, 0xC1, 0x47, 0xD2, 0x86, 0xDA, 0xB5, 0x69, 0x8C, 0x6D, 
	0xD1, 0xA8, 0x69, 0xD3, 0xB5, 0xDA, 0xB4, 0x56, 0xC1, 0x90, 
	0x20, 0x69, 0x69, 0x0D, 0xA5, 0x29, 0x6B, 0x4C, 0x2B, 0x5A, 
	0xAA, 0xF8, 0xA8, 0x96, 0x35, 0x20, 0x02, 0x96, 0xF0, 0x08, 
	0x48, 0xD5, 0x2A, 0x04, 0x04, 0x81, 0x65, 0x5F, 0xF7, 0xF4, 
	0x07, 0x5C, 0xB2, 0x35, 0x61, 0xD9, 0xAD, 0xF0, 0xAB, 0x9D, 
	0x64, 0x72, 0xE7, 0xCE, 0x3D, 0x67, 0xCE, 0x37, 0xDF, 0x7C, 
	0x73, 0x66, 0x2E, 0xF0, 0x5F, 0x2F, 0xEC, 0x71, 0x07, 0x38, 
	0x65, 0xFC, 0x73, 0xDB, 0xFE, 0x8A, 0xEB, 0xA3, 0x11, 0x01, 
	0x5E, 0xE9, 0xFE, 0xDE, 0x9E, 0xD9, 0x00, 0xC0, 0x31, 0xA0, 
	0x67, 0xC0, 0x5C, 0x38, 0x68, 0xB2, 0x18, 0xCB, 0x77, 0xA4, 
	0x95, 0x32, 0xC6, 0x2C, 0xBB, 0x4F, 0xD4, 0xE1, 0xA3, 0xF5, 
	0xF1, 0xD3, 0x03, 0x40, 0x57, 0x52, 0x8B, 0x4F, 0x73, 0x34, 
	0xF2, 0xDC, 0xC3, 0x97, 0x6E, 0x36, 0x74, 0xF6, 0x85, 0x38, 
	0x9B, 0x9D, 0xC5, 0x2E, 0xD8, 0x36, 0x2E, 0x89, 0xA8, 0xDC, 
	0xB1, 0x6A, 0xC1, 0xDA, 0x93, 0xB5, 0xDD, 0x58, 0xB9, 0x30, 
	0xF8, 0xF1, 0x01, 0x6C, 0x3A, 0x7C, 0x31, 0xA3, 0x67, 0xD0, 
	0x7C, 0xE6, 0x56, 0xCF, 0x10, 0x78, 0x8E, 0x41, 0x20, 0x82, 
	0x5D, 0x20, 0x48, 0x79, 0x6E, 0xC2, 0xC6, 0x6A, 0x13, 0x20, 
	0x95, 0x8C, 0xBD, 0xDB, 0x04, 0x42, 0x6A, 0x4C, 0x00, 0x12, 
	0x23, 0xE7, 0x26, 0xDD, 0xED, 0x37, 0xFD, 0xB6, 0x5D, 0xAB, 
	0xFE, 0xF7, 0x00, 0x5E, 0x3B, 0x54, 0x33, 0xF7, 0x76, 0xDF, 
	0x48, 0xCF, 0xE0, 0x88, 0x45, 0xEC, 0xB2, 0x87, 0xF9, 0x29, 
	0x86, 0x72, 0x33, 0x22, 0x4B, 0xB2, 0x12, 0x82, 0xF2, 0xC5, 
	0xCE, 0xA3, 0xA7, 0xFF, 0xA8, 0xFF, 0xFA, 0x7C, 0x7B, 0x84, 
	0xD9, 0x6A, 0x57, 0x10, 0x8D, 0xF5, 0x45, 0x3D, 0xA5, 0x44, 
	0xFE, 0x0A, 0xB5, 0x42, 0xA3, 0xF2, 0x1D, 0x16, 0xED, 0x38, 
	0x77, 0x82, 0x9F, 0xAE, 0xBB, 0xBD, 0xA2, 0xBB, 0x77, 0xB8, 
	0x67, 0x60, 0xD8, 0x0C, 0x22, 0x20, 0x26, 0xD8, 0x1B, 0xBE, 
	0x73, 0x66, 0x3D, 0xF7, 0xFD, 0x7B, 0x4B, 0xBD, 0xB3, 0x12, 
	0x82, 0xF2, 0xCB, 0x6A, 0x3A, 0x26, 0x6C, 0xB7, 0x2C, 0x8B, 
	0x8A, 0xBB, 0xB0, 0xEF, 0x25, 0x1F, 0x3F, 0xA5, 0x67, 0x86, 
	0x4C, 0xCA, 0x03, 0x00, 0x6E, 0x74, 0xF5, 0x53, 0xF1, 0xD9, 
	0x96, 0x21, 0xC7, 0x31, 0xDD, 0x02, 0xB0, 0xB7, 0xBC, 0x3E, 
	0x63, 0x68, 0xD4, 0x0A, 0x80, 0xC1, 0xC7, 0x4B, 0x86, 0xE4, 
	0x68, 0x3F, 0x55, 0x52, 0xE4, 0xBC, 0x66, 0xF1, 0x7B, 0x76, 
	0x6A, 0xF8, 0x3F, 0xD7, 0x97, 0x31, 0xEB, 0x88, 0xD9, 0x56, 
	0x2D, 0x97, 0x49, 0x34, 0x44, 0x10, 0xA4, 0x3C, 0xC7, 0x6A, 
	0xDB, 0x7A, 0x91, 0xFB, 0xE5, 0xA5, 0xBC, 0xDD, 0x27, 0xEA, 
	0x5C, 0x5F, 0x82, 0xB2, 0x9A, 0x0E, 0x96, 0x9D, 0x1A, 0x4E, 
	0x29, 0x3B, 0x4F, 0x91, 0xC9, 0x62, 0x07, 0xC7, 0x31, 0xAC, 
	0x5E, 0x1C, 0x16, 0xF4, 0xFE, 0xEA, 0x05, 0x77, 0x5C, 0x05, 
	0x7F, 0xA0, 0xB2, 0x91, 0x4A, 0xAA, 0x5B, 0x49, 0x26, 0xE5, 
	0x59, 0x7C, 0xB8, 0xCF, 0xD0, 0xB1, 0x6D, 0xC9, 0x5E, 0x2E, 
	0x33, 0x90, 0x9D, 0x1A, 0x4E, 0xC5, 0x67, 0x5B, 0xE9, 0xC1, 
	0xB0, 0x85, 0x00, 0xE0, 0xF9, 0x28, 0xBF, 0x36, 0x77, 0x82, 
	0x17, 0x55, 0xB5, 0xB0, 0x77, 0x5F, 0x56, 0xB3, 0x90, 0x79, 
	0x0A, 0x06, 0x00, 0x0D, 0x9D, 0xFD, 0x8A, 0xF1, 0x7E, 0x48, 
	0x5C, 0x1D, 0xE4, 0xBB, 0x8B, 0x1D, 0x03, 0x1E, 0x12, 0x5E, 
	0xC9, 0x00, 0xDC, 0x1F, 0x18, 0xDD, 0x5F, 0x54, 0xD5, 0x82, 
	0xBC, 0xCC, 0x48, 0x00, 0x40, 0xC3, 0x86, 0x64, 0x06, 0x40, 
	0x01, 0xC0, 0x1F, 0xC0, 0x7D, 0x00, 0xC2, 0x38, 0xBB, 0x76, 
	0x00, 0xA6, 0xD8, 0xCC, 0x48, 0x02, 0x80, 0x07, 0xC3, 0x96, 
	0x02, 0x00, 0x05, 0x23, 0x66, 0x1B, 0x4A, 0x7F, 0x6D, 0x6B, 
	0x7C, 0x3D, 0x4D, 0xA5, 0x76, 0x19, 0x40, 0xDF, 0x43, 0x33, 
	0x18, 0x03, 0x18, 0x63, 0xC8, 0x4A, 0x08, 0x62, 0x1B, 0x97, 
	0xA8, 0xD0, 0xB0, 0x21, 0x59, 0x0A, 0xC0, 0x32, 0x85, 0x6B, 
	0x18, 0x80, 0x2E, 0x00, 0x50, 0xCC, 0x92, 0x98, 0xCC, 0xD6, 
	0xB1, 0x25, 0x6C, 0xEA, 0x7E, 0xA0, 0x74, 0x4B, 0x84, 0xCC, 
	0x41, 0x2D, 0x3C, 0x37, 0xE1, 0x16, 0xEB, 0x82, 0x6B, 0x94, 
	0xD8, 0x98, 0x1F, 0xA8, 0x04, 0x11, 0xC0, 0xC0, 0xF0, 0xD0, 
	0x64, 0x75, 0x6F, 0x17, 0xD8, 0x05, 0x9A, 0x68, 0x8B, 0xCE, 
	0x00, 0x3A, 0x5D, 0x70, 0xBD, 0x06, 0x00, 0xE7, 0x1A, 0xEF, 
	0xE2, 0xC2, 0xCD, 0x7B, 0x16, 0xC6, 0x00, 0x81, 0x08, 0x4F, 
	0xFB, 0x2B, 0xDC, 0x03, 0x90, 0x10, 0xE1, 0xCB, 0xEC, 0x02, 
	0x41, 0x20, 0xC2, 0x8F, 0x57, 0x6F, 0x09, 0x9B, 0x8F, 0x5C, 
	0x06, 0x80, 0x3E, 0x00, 0xDE, 0x00, 0x7C, 0x01, 0x78, 0x8D, 
	0x57, 0x05, 0x00, 0x2E, 0xF6, 0xDB, 0x8B, 0x6C, 0xBC, 0xF6, 
	0x02, 0xC0, 0x0B, 0xEA, 0x27, 0x91, 0x12, 0xED, 0x9F, 0x0B, 
	0x00, 0x44, 0x04, 0x55, 0xC0, 0x9C, 0xDB, 0x00, 0x5C, 0x17, 
	0xE1, 0xAA, 0x45, 0x21, 0x15, 0xB5, 0xAD, 0xBD, 0x6F, 0xF0, 
	0x1C, 0x83, 0x5C, 0x26, 0xF9, 0xB8, 0x70, 0x6B, 0x52, 0x49, 
	0x21, 0x40, 0x00, 0x06, 0xA6, 0xF2, 0xDD, 0x7C, 0xE4, 0x32, 
	0x2B, 0xDC, 0x9A, 0x44, 0x0D, 0x9D, 0x7D, 0x6A, 0x00, 0xF0, 
	0x56, 0xC8, 0xF0, 0xCA, 0xE2, 0xD0, 0xC5, 0x65, 0x35, 0x1D, 
	0xAE, 0x31, 0xB0, 0xB7, 0xBC, 0x9E, 0xAD, 0x5C, 0x18, 0xF2, 
	0xA6, 0xAF, 0x97, 0x0C, 0x00, 0xD0, 0xFE, 0xD7, 0xA0, 0xFF, 
	0xF2, 0x3D, 0x55, 0x31, 0xAE, 0xF8, 0x9E, 0xAC, 0xED, 0xC6, 
	0xD1, 0x2D, 0x89, 0x92, 0x9C, 0xCF, 0x2F, 0xD0, 0xA0, 0xC9, 
	0x4A, 0x00, 0xB0, 0x48, 0x35, 0xF7, 0x9E, 0x98, 0xB8, 0x5C, 
	0x02, 0xB0, 0x6B, 0x5D, 0x1C, 0x69, 0x74, 0x86, 0x1B, 0xE2, 
	0xDA, 0xF3, 0x1C, 0xC3, 0xE0, 0x88, 0xA5, 0xE9, 0xAD, 0x63, 
	0x57, 0xA2, 0xD3, 0x3E, 0xF8, 0x69, 0xD2, 0x64, 0xF6, 0x99, 
	0xA1, 0x11, 0x2B, 0x17, 0x06, 0xE3, 0xAB, 0x9F, 0x5B, 0xCC, 
	0x4D, 0xDD, 0xFD, 0xE0, 0xB9, 0x31, 0x29, 0x47, 0x07, 0x7B, 
	0x7F, 0x58, 0x54, 0xD5, 0x32, 0xB5, 0x06, 0x34, 0x3A, 0x83, 
	0xF8, 0x3C, 0x0E, 0x40, 0xED, 0xF8, 0xCD, 0x62, 0x13, 0x70, 
	0xAD, 0xBD, 0xB7, 0x79, 0xB6, 0x4C, 0xB2, 0xFE, 0x91, 0xAC, 
	0x39, 0x31, 0xA6, 0x2A, 0x40, 0x99, 0x97, 0x5F, 0x7C, 0x75, 
	0xF8, 0x8B, 0x53, 0xCD, 0x13, 0x3B, 0x49, 0x1D, 0xFA, 0x44, 
	0xD1, 0xA6, 0x8C, 0xF9, 0x45, 0x62, 0x0E, 0x99, 0x32, 0x15, 
	0x6B, 0x74, 0x86, 0x3A, 0x00, 0x71, 0xCE, 0x6C, 0x04, 0x22, 
	0x5B, 0xEA, 0xB3, 0x01, 0xC8, 0x88, 0x0D, 0xE4, 0x57, 0x68, 
	0x82, 0xB9, 0xA2, 0xAA, 0x16, 0x3A, 0x73, 0xFD, 0x8E, 0xB5, 
	0xF3, 0xFE, 0x43, 0xA9, 0x78, 0x12, 0x12, 0x00, 0xA5, 0xDC, 
	0xE3, 0x60, 0xF5, 0x9E, 0xE5, 0xDB, 0x5F, 0x3D, 0x78, 0x1E, 
	0xDF, 0xBC, 0xB3, 0x64, 0x72, 0x00, 0x1A, 0x9D, 0x01, 0x46, 
	0xBD, 0x16, 0x1A, 0x9D, 0xA1, 0x1C, 0xC0, 0xDA, 0xC9, 0x02, 
	0x3B, 0x9E, 0xF9, 0x76, 0x81, 0x60, 0xB3, 0x0B, 0x98, 0xE5, 
	0xC1, 0xC3, 0x6C, 0x15, 0x48, 0xC2, 0x33, 0xC6, 0x31, 0x06, 
	0xBB, 0x40, 0xA4, 0x94, 0x7B, 0x30, 0x0F, 0x09, 0xB7, 0xAF, 
	0xAA, 0x60, 0xD9, 0xAE, 0x29, 0x6F, 0x44, 0x0E, 0xC1, 0x7F, 
	0x01, 0x90, 0x36, 0x19, 0x48, 0x22, 0x34, 0xEC, 0x5C, 0x1B, 
	0xDB, 0x7E, 0xA0, 0xB2, 0x31, 0x93, 0x08, 0xB3, 0xAD, 0x76, 
	0xE1, 0xD1, 0x93, 0x10, 0x3C, 0xC7, 0x84, 0xA8, 0x20, 0x25, 
	0x57, 0xF2, 0x76, 0x0A, 0x73, 0xEB, 0x4E, 0x38, 0x1E, 0x7C, 
	0xA9, 0x13, 0xD6, 0x4B, 0x8D, 0x7A, 0x6D, 0xCE, 0xF8, 0x9E, 
	0x9E, 0xFD, 0xC9, 0x0F, 0x8D, 0x2F, 0x56, 0xFE, 0xDE, 0x45, 
	0x8E, 0x20, 0x02, 0x7D, 0xE4, 0x58, 0x93, 0x18, 0x3A, 0x90, 
	0x93, 0xF6, 0xCC, 0x39, 0x71, 0x1B, 0x3A, 0x05, 0xF0, 0x08, 
	0xED, 0x6B, 0x9C, 0xE8, 0xA3, 0xDE, 0xA8, 0xD7, 0xC6, 0xCF, 
	0xC8, 0xAD, 0x78, 0x0A, 0xC1, 0x11, 0x80, 0x0A, 0xA3, 0x5E, 
	0xBB, 0x4E, 0x04, 0x3B, 0xAD, 0x00, 0x34, 0x3A, 0x43, 0x09, 
	0x80, 0x1C, 0x27, 0xB6, 0xD5, 0x46, 0xBD, 0x36, 0x7D, 0xBA, 
	0xFF, 0x0B, 0x1C, 0xF3, 0x40, 0x8E, 0x93, 0x99, 0x57, 0x1B, 
	0xF5, 0xDA, 0x74, 0x31, 0x2F, 0xCC, 0x14, 0x80, 0x2B, 0x93, 
	0xD8, 0x54, 0x88, 0xC1, 0xA7, 0x8B, 0x76, 0x67, 0x1A, 0x18, 
	0x01, 0xE0, 0x39, 0x53, 0x82, 0x73, 0xCA, 0x80, 0x46, 0x67, 
	0x60, 0x46, 0xBD, 0x56, 0xEE, 0xC0, 0xC4, 0x71, 0xA3, 0x5E, 
	0x1B, 0x3F, 0x13, 0xB4, 0xFF, 0x5F, 0x1C, 0xCB, 0xDF, 0x47, 
	0x11, 0xF0, 0xB3, 0x8E, 0x02, 0xF9, 0x59, 0x00, 0x00, 0x00, 
	0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, };

wxBitmap& ZoomOut_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( ZoomOut_png, sizeof( ZoomOut_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //ZOOMOUT_PNG_H