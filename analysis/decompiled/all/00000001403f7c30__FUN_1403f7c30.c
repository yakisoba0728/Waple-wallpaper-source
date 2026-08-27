// Function: FUN_1403f7c30
// Addr: 1403f7c30
// Size: 272 bytes


undefined1 FUN_1403f7c30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = 0;
  cVar2 = FUN_1403ec530(param_3,param_2,"start reordering USE");
  if (cVar2 != '\0') {
    uVar3 = FUN_1403ddc10(param_2,param_3,7,1,0x12,0xffffffff);
    uVar1 = *(uint *)(param_3 + 0x60);
    if (uVar1 != 0) {
      uVar7 = 0;
      uVar5 = 0;
      do {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        if (uVar1 <= uVar4) break;
      } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf) ==
               *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar5 * 0x14));
      if (uVar1 != 0) {
        do {
          uVar6 = uVar5;
          FUN_1403f79e0(param_3,uVar7,uVar6);
          uVar5 = uVar6;
          do {
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            if (*(uint *)(param_3 + 0x60) <= uVar4) break;
          } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar6 * 0x14) ==
                   *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar5 * 0x14));
          uVar7 = uVar6;
        } while ((uint)uVar6 < uVar1);
      }
    }
    FUN_1403ec530(param_3,param_2,"end reordering USE");
  }
  *(byte *)(param_3 + 0xd0) = *(byte *)(param_3 + 0xd0) & 0xbf;
  return uVar3;
}

