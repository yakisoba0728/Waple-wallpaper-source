// Function: FUN_14007d8f0
// Addr: 14007d8f0
// Size: 437 bytes


uint FUN_14007d8f0(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar1 = (uint *)*param_1;
  uVar5 = 0x270;
  if (*puVar1 == 0x270) {
    do {
      uVar3 = puVar1[uVar5 - 0x26e];
      uVar4 = puVar1[uVar5 - 0x26d];
      uVar2 = (uVar3 ^ puVar1[uVar5 - 0x26f]) & 0x7fffffff ^ puVar1[uVar5 - 0x26f];
      puVar1[uVar5 + 1] = -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ puVar1[uVar5 - 0xe2] ^ uVar2 >> 1
      ;
      uVar3 = (uVar4 ^ uVar3) & 0x7fffffff ^ uVar3;
      uVar2 = puVar1[uVar5 - 0x26c];
      puVar1[uVar5 + 2] = -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ puVar1[uVar5 - 0xe1] ^ uVar3 >> 1
      ;
      uVar4 = (uVar2 ^ uVar4) & 0x7fffffff ^ uVar4;
      uVar3 = puVar1[uVar5 - 0x26b];
      puVar1[uVar5 + 3] = -(uint)((uVar4 & 1) != 0) & 0x9908b0df ^ puVar1[uVar5 - 0xe0] ^ uVar4 >> 1
      ;
      uVar2 = (uVar3 ^ uVar2) & 0x7fffffff ^ uVar2;
      uVar4 = puVar1[uVar5 - 0x26a];
      puVar1[uVar5 + 4] = -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ puVar1[uVar5 - 0xdf] ^ uVar2 >> 1
      ;
      uVar3 = (uVar4 ^ uVar3) & 0x7fffffff ^ uVar3;
      uVar2 = puVar1[uVar5 - 0x269];
      puVar1[uVar5 + 5] = -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ puVar1[uVar5 - 0xde] ^ uVar3 >> 1
      ;
      uVar4 = (uVar4 ^ uVar2) & 0x7fffffff ^ uVar4;
      puVar1[uVar5 + 6] = -(uint)((uVar4 & 1) != 0) & 0x9908b0df ^ puVar1[uVar5 - 0xdd] ^ uVar4 >> 1
      ;
      uVar5 = uVar5 + 6;
    } while (uVar5 < 0x4e0);
  }
  else if (0x4df < *puVar1) {
    FUN_14007fa20(puVar1);
  }
  uVar3 = puVar1[(ulonglong)*puVar1 + 1];
  *puVar1 = *puVar1 + 1;
  uVar3 = uVar3 >> 0xb ^ uVar3;
  uVar3 = (uVar3 & 0xff3a58ad) << 7 ^ uVar3;
  uVar3 = (uVar3 & 0xffffdf8c) << 0xf ^ uVar3;
  return uVar3 >> 0x12 ^ uVar3;
}

