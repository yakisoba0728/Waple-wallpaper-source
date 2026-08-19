// Function: FUN_1403e5c80
// Addr: 1403e5c80
// Size: 48 bytes


longlong FUN_1403e5c80(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 10) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0xe) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x10) = 0xffffffffffffffff;
  param_2[0x12] = 0xffffffff;
  param_2[0x14] = 0;
  *(undefined8 *)(param_2 + 0x17) = 0;
  *(undefined8 *)(param_2 + 0x19) = 0;
  param_2[0x1b] = 0;
  *(undefined8 *)(param_2 + 0x15) = 0x2210;
  lVar4 = *param_1;
  uVar2 = *(int *)(lVar4 + 0x14) + 1;
  if (uVar2 <= *(uint *)(lVar4 + 0x10)) {
    do {
      uVar2 = *(uint *)(lVar4 + 0x14);
      uVar5 = uVar2 + 1;
      if (*(uint *)(lVar4 + 0x10) < uVar5) {
        uVar3 = 0xffff;
      }
      else {
        bVar1 = *(byte *)((ulonglong)uVar2 + *(longlong *)(lVar4 + 8));
        uVar3 = (uint)bVar1;
        *(uint *)(lVar4 + 0x14) = uVar5;
        if (bVar1 == 0xc) {
          if (*(uint *)(lVar4 + 0x10) < uVar2 + 2) {
            uVar3 = 0xffff;
          }
          else {
            uVar3 = *(byte *)((ulonglong)uVar5 + *(longlong *)(lVar4 + 8)) + 0x100;
            *(uint *)(lVar4 + 0x14) = uVar2 + 2;
          }
        }
      }
      func_0x0001403f46a0(uVar3,*param_1,param_2);
      lVar4 = *param_1;
      uVar2 = *(uint *)(lVar4 + 0x14);
      if ((*(uint *)(lVar4 + 0x10) < uVar2) || (*(char *)(lVar4 + 0x18) != '\0')) {
        return (ulonglong)(uint3)(uVar2 >> 8) << 8;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(lVar4 + 0x10));
  }
  return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
}

