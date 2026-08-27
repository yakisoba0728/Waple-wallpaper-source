// Function: FUN_1403e4f90
// Addr: 1403e4f90
// Size: 324 bytes


ulonglong FUN_1403e4f90(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = FUN_1403ec530(param_3,param_2,"start reordering indic initial");
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  FUN_14040f050(param_1,param_2,param_3);
  bVar3 = FUN_1403ddc10(param_2,param_3,4,0xb,0xe,0xe);
  uVar2 = *(uint *)(param_3 + 0x60);
  if (uVar2 != 0) {
    uVar8 = 0;
    uVar4 = 0;
    do {
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
      if (uVar2 <= uVar6) break;
    } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf) ==
             *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar4 * 0x14));
    if (uVar2 != 0) {
      do {
        uVar7 = uVar4;
        bVar1 = *(byte *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar8 * 0x14);
        bVar5 = bVar1 & 0xf;
        if (((((bVar1 & 0xf) == 0) || (bVar5 == 1)) || (bVar5 == 2)) || (bVar5 == 4)) {
          FUN_1403e3fb0(param_1,*(undefined8 *)(param_2 + 0x20),param_3,uVar8,(uint)uVar7);
        }
        uVar4 = uVar7;
        do {
          uVar6 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar6;
          if (*(uint *)(param_3 + 0x60) <= uVar6) break;
        } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar7 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar4 * 0x14));
        uVar8 = uVar7;
      } while ((uint)uVar7 < uVar2);
    }
  }
  FUN_1403ec530(param_3,param_2,"end reordering indic initial");
  return (ulonglong)bVar3;
}

