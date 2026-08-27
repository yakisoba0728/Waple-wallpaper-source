// Function: FUN_14007f5b0
// Addr: 14007f5b0
// Size: 434 bytes


uint FUN_14007f5b0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0x270;
  if (*param_1 == 0x270) {
    do {
      uVar2 = param_1[uVar4 - 0x26e];
      uVar3 = param_1[uVar4 - 0x26d];
      uVar1 = (uVar2 ^ param_1[uVar4 - 0x26f]) & 0x7fffffff ^ param_1[uVar4 - 0x26f];
      param_1[uVar4 + 1] =
           -(uint)((uVar1 & 1) != 0) & 0x9908b0df ^ param_1[uVar4 - 0xe2] ^ uVar1 >> 1;
      uVar2 = (uVar3 ^ uVar2) & 0x7fffffff ^ uVar2;
      uVar1 = param_1[uVar4 - 0x26c];
      param_1[uVar4 + 2] =
           -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ param_1[uVar4 - 0xe1] ^ uVar2 >> 1;
      uVar3 = (uVar1 ^ uVar3) & 0x7fffffff ^ uVar3;
      uVar2 = param_1[uVar4 - 0x26b];
      param_1[uVar4 + 3] =
           -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ param_1[uVar4 - 0xe0] ^ uVar3 >> 1;
      uVar1 = (uVar2 ^ uVar1) & 0x7fffffff ^ uVar1;
      uVar3 = param_1[uVar4 - 0x26a];
      param_1[uVar4 + 4] =
           -(uint)((uVar1 & 1) != 0) & 0x9908b0df ^ param_1[uVar4 - 0xdf] ^ uVar1 >> 1;
      uVar2 = (uVar3 ^ uVar2) & 0x7fffffff ^ uVar2;
      uVar1 = param_1[uVar4 - 0x269];
      param_1[uVar4 + 5] =
           -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ param_1[uVar4 - 0xde] ^ uVar2 >> 1;
      uVar3 = (uVar3 ^ uVar1) & 0x7fffffff ^ uVar3;
      param_1[uVar4 + 6] =
           -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ param_1[uVar4 - 0xdd] ^ uVar3 >> 1;
      uVar4 = uVar4 + 6;
    } while (uVar4 < 0x4e0);
  }
  else if (0x4df < *param_1) {
    FUN_14007fa20();
  }
  uVar2 = param_1[(ulonglong)*param_1 + 1];
  *param_1 = *param_1 + 1;
  uVar2 = uVar2 >> 0xb ^ uVar2;
  uVar2 = (uVar2 & 0xff3a58ad) << 7 ^ uVar2;
  uVar2 = (uVar2 & 0xffffdf8c) << 0xf ^ uVar2;
  return uVar2 >> 0x12 ^ uVar2;
}

