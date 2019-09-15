#pragma once

#define VIS_OPEN_FOLDER           2
#define VIS_OPEN_FILE             1
#define VIS_OPEN_DEFAULT          0
#ifndef VIS_OPEN_TYPE
#define VIS_OPEN_TYPE             VIS_OPEN_DEFAULT
#endif

#define DPLAB_USE_IPP             1
#ifndef DPLAB_IMPROC_KERNEL
#define DPLAB_IMPROC_KERNEL       DPLAB_USE_IPP
#endif // !DPLAB_IMPROC_KERNEL

#define DPLAB_USE_MKL             1
#ifndef DPLAB_MATH_KERNEL
#define DPLAB_MATH_KERNEL         DPLAB_USE_MKL
#endif // !DPLAB_MATH_KERNEL
