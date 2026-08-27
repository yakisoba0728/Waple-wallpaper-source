// Function: FUN_1403f7780
// Addr: 1403f7780
// Size: 304 bytes


undefined1 FUN_1403f7780(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = 0;
  cVar3 = FUN_1403ec530(param_3,param_2,"start reordering khmer");
  if (cVar3 != '\0') {
    uVar4 = FUN_1403ddc10(param_2,param_3,1,0xb,0xffffffff,0xffffffff);
    uVar2 = *(uint *)(param_3 + 0x60);
    if (uVar2 != 0) {
      uVar8 = 0;
      uVar6 = 0;
      do {
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        if (uVar2 <= uVar5) break;
      } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf) ==
               *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar6 * 0x14));
      if (uVar2 != 0) {
        do {
          uVar7 = uVar6;
          bVar1 = *(byte *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar8 * 0x14);
          if (((bVar1 & 0xf) == 0) || ((bVar1 & 0xf) == 1)) {
            FUN_1403f7500(param_1,*(undefined8 *)(param_2 + 0x20),param_3,uVar8,(uint)uVar7);
          }
          uVar6 = uVar7;
          do {
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            if (*(uint *)(param_3 + 0x60) <= uVar5) break;
          } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar7 * 0x14) ==
                   *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar6 * 0x14));
          uVar8 = uVar7;
        } while ((uint)uVar7 < uVar2);
      }
    }
    FUN_1403ec530(param_3,param_2,"end reordering khmer");
  }
  *(byte *)(param_3 + 0xd0) = *(byte *)(param_3 + 0xd0) & 0xbf;
  return uVar4;
}

