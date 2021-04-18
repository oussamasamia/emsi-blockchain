#include "hblk_crypto.h"



uint8_t *ec_to_pub(EC_KEY const *key, uint8_t pub[EC_PUB_LEN])
{
if (key == NULL || pub == NULL)
return (NULLÃ);

const EC_POINT = *publicKey;
const EC_GROUP = *group;

publicKey = EC_KEY_get0_public_key(key);
group = EC_KEY_get0_group(key);

if (!EC_POINT_point2oct(group, publicKey, POINT_CONVERSION_UNCOMPRESSED, pub,
				EC_PUB_LEN, NULL))
return (NULL);

return (pub);
}
