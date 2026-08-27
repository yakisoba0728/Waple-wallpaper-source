// Function: FUN_14040f310
// Addr: 14040f310
// Size: 500 bytes


byte FUN_14040f310(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int local_res8 [8];
  uint uVar9;
  undefined1 *puVar10;
  
  if (*(uint *)(param_1 + 0x1c) < 2) {
    uVar5 = 1;
    if (1 < *(uint *)(param_1 + 0x60)) {
      do {
        uVar8 = *(uint *)(*(longlong *)(param_1 + 0x70) + 8 + (ulonglong)(uVar5 - 1) * 0x14);
        uVar9 = *(uint *)(*(longlong *)(param_1 + 0x70) + 8 + (ulonglong)uVar5 * 0x14);
        if ((uVar8 != uVar9) && (uVar8 < uVar9 != ((*(uint *)(param_1 + 0x38) & 0xfffffffd) == 4)))
        {
          FUN_1403b2470(param_1,param_3,"buffer verify error: clusters are not monotone.");
          bVar3 = 0;
          goto LAB_14040f38a;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x60));
    }
  }
  bVar3 = 1;
LAB_14040f38a:
  bVar2 = FUN_1403b2520(param_1,param_2,param_3,param_4,param_5,param_6);
  bVar2 = bVar2 & bVar3;
  if ((*(byte *)(param_1 + 0x18) & 0x40) != 0) {
    bVar3 = FUN_1403b2890(param_1,param_2,param_3,param_4,param_5,param_6);
    bVar2 = bVar3 & bVar2;
  }
  if (bVar2 != 0) {
    return bVar2;
  }
  iVar1 = *(int *)(param_2 + 0x60);
  uVar6 = 0;
  uVar5 = 0;
  puVar7 = (undefined1 *)0x0;
  uVar8 = iVar1 * 10 + 0x10;
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  puVar4 = puVar7;
  local_res8[0] = iVar1;
  puVar10 = (undefined1 *)0x0;
  uVar9 = 0;
  if (uVar8 != 0) {
    do {
      uVar5 = (int)uVar6 + 8 + (int)(uVar6 >> 1);
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < uVar8);
    if (uVar5 == 0xffffffff) {
LAB_14040f4fd:
      uVar5 = 0xffffffff;
      goto LAB_14040f4d8;
    }
    if (uVar5 == 0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4 = (undefined1 *)_realloc_base(0,uVar5);
      if (puVar4 == (undefined1 *)0x0) goto LAB_14040f4fd;
    }
    puVar10 = puVar4;
    uVar9 = uVar5;
    if (uVar8 != 0) {
      FUN_1404217a0(puVar4,0,uVar8);
    }
  }
  FUN_1404149f0(param_2,0,iVar1,puVar4,uVar8,local_res8,0x54455854,1,CONCAT44(uVar8,uVar9),puVar10);
  puVar7 = &DAT_140474480;
  if (puVar4 != (undefined1 *)0x0) {
    puVar7 = puVar4;
  }
  FUN_1403b2470(param_1,param_3,"buffer verify error: text was: %s.",puVar7);
  puVar7 = puVar4;
LAB_14040f4d8:
  if (1 < uVar5 + 1) {
    thunk_FUN_1402d9040(puVar7);
  }
  return 0;
}

