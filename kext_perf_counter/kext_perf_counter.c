//
//  kext_perf_counter.c
//  kext_perf_counter
//
//  Created by Luis von der Eltz on 07.09.17.
//  Copyright © 2017 Luis von der Eltz. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t kext_perf_counter_start(kmod_info_t * ki, void *d);
kern_return_t kext_perf_counter_stop(kmod_info_t *ki, void *d);

kern_return_t kext_perf_counter_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t kext_perf_counter_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
