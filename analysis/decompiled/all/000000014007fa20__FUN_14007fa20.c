// Function: FUN_14007fa20
// Addr: 14007fa20
// Size: 487 bytes


undefined8 FUN_14007fa20(undefined4 *param_1)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar2 = 0;
  uVar6 = 0xe3;
  do {
    uVar5 = (param_1[uVar2 + 0x271] ^ param_1[uVar2 + 0x272]) & 0x7fffffff ^ param_1[uVar2 + 0x271];
    param_1[uVar2 + 1] =
         -(uint)((uVar5 & 1) != 0) & 0x9908b0df ^ param_1[uVar2 + 0x3fe] ^ uVar5 >> 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xe3);
  do {
    uVar5 = param_1[uVar6 + 0x272];
    uVar4 = param_1[uVar6 + 0x273];
    uVar3 = (uVar5 ^ param_1[uVar6 + 0x271]) & 0x7fffffff ^ param_1[uVar6 + 0x271];
    param_1[uVar6 + 1] = -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe2] ^ uVar3 >> 1
    ;
    uVar5 = (uVar4 ^ uVar5) & 0x7fffffff ^ uVar5;
    uVar3 = param_1[uVar6 + 0x274];
    param_1[uVar6 + 2] = -(uint)((uVar5 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe1] ^ uVar5 >> 1
    ;
    uVar4 = (uVar3 ^ uVar4) & 0x7fffffff ^ uVar4;
    uVar5 = param_1[uVar6 + 0x275];
    param_1[uVar6 + 3] = -(uint)((uVar4 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe0] ^ uVar4 >> 1
    ;
    uVar3 = (uVar5 ^ uVar3) & 0x7fffffff ^ uVar3;
    uVar4 = param_1[uVar6 + 0x276];
    param_1[uVar6 + 4] = -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xdf] ^ uVar3 >> 1
    ;
    uVar5 = (uVar4 ^ uVar5) & 0x7fffffff ^ uVar5;
    param_1[uVar6 + 5] = -(uint)((uVar5 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xde] ^ uVar5 >> 1
    ;
    uVar4 = (uVar4 ^ param_1[uVar6 + 0x277]) & 0x7fffffff ^ uVar4;
    param_1[uVar6 + 6] = -(uint)((uVar4 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xdd] ^ uVar4 >> 1
    ;
    uVar6 = uVar6 + 6;
  } while (uVar6 < 0x26f);
  *param_1 = 0;
  uVar5 = (param_1[0x4e0] ^ param_1[1]) & 0x7fffffff ^ param_1[0x4e0];
  uVar2 = (ulonglong)uVar5 & 0xffffffffffffff01;
  cVar1 = (char)uVar2;
  param_1[0x270] = -(uint)(cVar1 != '\0') & 0x9908b0df ^ param_1[0x18d] ^ uVar5 >> 1;
  return CONCAT71((int7)(uVar2 >> 8),-cVar1);
}

