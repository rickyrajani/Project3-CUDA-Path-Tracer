#pragma once

#include "common.h"
#include <src/sceneStructs.h>

namespace StreamCompaction {
    namespace Efficient {
        StreamCompaction::Common::PerformanceTimer& timer();

        void scan(int n, int *odata, const int *idata);

        int compact(int n, int *odata, const int *idata);

        int compactPaths(int n, PathSegment *odata, PathSegment *idata, int* bools_arr, int* indices_arr);
    }
}