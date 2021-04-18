#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "hblk_crypto.h"


EC_KEY *ec_create(void)
{

EC_KEY *key = EC_KEY_new();
key = EC_KEY_new_by_curve_name(EC_CURVE);
if (key == NULL)
return (NULL);

EC_KEY_generate_key(key);

return (key);

}
