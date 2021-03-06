// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once


typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;


#pragma comment(lib, "Shell32.lib")


#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include <map>
#include <vector>


#include <ShlObj_core.h>