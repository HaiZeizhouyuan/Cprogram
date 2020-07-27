/*************************************************************************
	> File Name: head.h
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 26 18:38:02 2020
 ************************************************************************/

#ifndef _HEAD_H
#define _HEAD_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/teyps.h>
#include <sys/stat.h>
#include "color.h"

#ifdef _D
#define DBG(fmt, args...) printf(fmt, ##args);
#else 
#define DBG(fmt, args...) 
#endif
#endif

