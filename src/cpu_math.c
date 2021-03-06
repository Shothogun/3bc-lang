#include "3bc.h"

RETURN_DEFINE cpu_math_sum(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    tape_aux_set(AUX + GET_ANY_PARAM);
    return RETURN_OK;
}

RETURN_DEFINE cpu_math_sub(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    tape_aux_set(AUX - GET_ANY_PARAM);
    return RETURN_OK;
}

RETURN_DEFINE cpu_math_mul(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    tape_aux_set(AUX * GET_ANY_PARAM);
    return RETURN_OK;
}

RETURN_DEFINE cpu_math_div(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    tape_aux_set(AUX / GET_ANY_PARAM);
    return RETURN_OK;
}

RETURN_DEFINE cpu_math_mod(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    tape_aux_set(AUX % GET_ANY_PARAM);
    return RETURN_OK;
}

RETURN_DEFINE cpu_math_power(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    tape_aux_set((val_t) pow((double) (AUX), (double) (GET_ANY_PARAM)));
    return RETURN_OK;
}

RETURN_DEFINE cpu_math_root(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    tape_aux_set((val_t) pow((double) (AUX), (1 / (double) (GET_ANY_PARAM))));
    return RETURN_OK;
}

RETURN_DEFINE cpu_math_percentage(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    tape_aux_set((val_t) (AUX) * (((double) GET_ANY_PARAM)/100.0));
    return RETURN_OK;
}

RETURN_DEFINE cpu_math_abs(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    tape_aux_set((val_t) labs((long int) AUX));
    return RETURN_OK;
}

RETURN_DEFINE cpu_math_average(PARAMS_DEFINE)
{   
    VALIDATE_NOT_DUALITY
    return RETURN_OK;
}