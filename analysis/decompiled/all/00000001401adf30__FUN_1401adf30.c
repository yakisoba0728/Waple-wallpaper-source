// Function: FUN_1401adf30
// Addr: 1401adf30
// Size: 330 bytes


undefined8 FUN_1401adf30(longlong param_1,longlong param_2,int param_3,int param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 local_18 [16];
  
  uVar7 = *(uint *)(param_2 + 0x1c);
  puVar1 = (uint *)(param_2 + 0x1c);
  if (uVar7 == 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar3 = 0;
      *puVar1 = 1;
      uVar9 = 0;
      uVar7 = 1;
      uVar10 = 0;
      goto LAB_1401adfa7;
    }
    if (param_3 < param_4) {
      param_3 = param_4;
    }
    uVar3 = (int)(param_3 + 0x1f + (param_3 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    uVar7 = 1;
    if (1 < (int)uVar3) {
      uVar7 = uVar3;
    }
    *puVar1 = uVar7;
  }
  uVar3 = uVar7 >> 8;
  uVar9 = uVar7 >> 0x10;
  uVar10 = (ulonglong)(uVar7 >> 0x18);
LAB_1401adfa7:
  lVar2 = *(longlong *)(param_1 + 0x80);
  uVar10 = *(ulonglong *)(param_1 + 0xa8) &
           (((((ulonglong)(uVar7 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar3 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar9 & 0xff)) * 0x100000001b3
           ^ uVar10) * 0x100000001b3;
  lVar8 = *(longlong *)(param_1 + 0x90);
  lVar4 = *(longlong *)(lVar8 + 8 + uVar10 * 0x10);
  if (lVar4 != lVar2) {
    lVar8 = *(longlong *)(lVar8 + uVar10 * 0x10);
    uVar3 = *(uint *)(lVar4 + 0x10);
    while (uVar7 != uVar3) {
      if (lVar4 == lVar8) goto LAB_1401ae039;
      lVar4 = *(longlong *)(lVar4 + 8);
      uVar3 = *(uint *)(lVar4 + 0x10);
    }
    if (lVar4 == 0) {
      lVar4 = lVar2;
    }
    if (lVar4 != lVar2) {
      return *(undefined8 *)(lVar4 + 0x18);
    }
  }
LAB_1401ae039:
  uVar5 = FUN_1401ac8d0(CONCAT71((int7)((ulonglong)lVar8 >> 8),1),*(undefined1 *)(param_1 + 0x20),
                        *puVar1);
  plVar6 = (longlong *)FUN_14004b8a0(param_1 + 0x78,local_18,puVar1);
  *(undefined8 *)(*plVar6 + 0x18) = uVar5;
  return uVar5;
}

