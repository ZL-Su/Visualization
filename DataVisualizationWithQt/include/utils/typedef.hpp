#pragma once
#include "configs.hpp"
#include "type_traits.hpp"
#ifdef DPLAB_IMPROC_KERNEL == DPLAB_USE_IPP
#include <ipp.h>
#include <ipps.h>
#include <ippi.h>
#endif
#ifdef DPLAB_MATH_KERNEL == DPLAB_USE_MKL
#include <mkl.h>
#include <fftw3_mkl.h>
#endif
#ifdef _OPENMP
#include <omp.h>
#endif

class QSize;
namespace dplab {

	struct Size {
		Size(const QSize& size) noexcept
			:width(size.width()), height(size.height()) {}

		inline size_t size() const noexcept {
			return size_t(width * height);
		}
		inline int stride() const noexcept {
			return (width % 64) ? ((width / 64)*64 + 64) : width;
		}
#ifdef DPLAB_IMPROC_KERNEL == DPLAB_USE_IPP
		inline operator IppiSize() const noexcept {
			return { width, height };
		}
#endif
		int width, height;
	};
}