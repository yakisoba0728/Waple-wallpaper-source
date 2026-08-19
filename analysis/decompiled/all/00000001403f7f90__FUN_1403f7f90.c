// Function: FUN_1403f7f90
// Addr: 1403f7f90
// Size: 22 bytes


undefined8 FUN_1403f7f90(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ushort uVar11;
  
  lVar7 = *(longlong *)(param_1 + 0xa0);
  *(ulonglong *)(lVar7 + 0xb8) = *(ulonglong *)(lVar7 + 0xb8) | 1L << (param_2 >> 4 & 0x3f);
  *(ulonglong *)(lVar7 + 0xc0) = *(ulonglong *)(lVar7 + 0xc0) | 1L << (param_2 & 0x3f);
  *(ulonglong *)(lVar7 + 200) = *(ulonglong *)(lVar7 + 200) | 1L << (ulonglong)(param_2 >> 6 & 0x3f)
  ;
  if (*(int *)(param_1 + 0x134) != -1) {
    *(char *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x70) + 0xf +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa0) + 0x5c) * 0x14) =
         (char)*(int *)(param_1 + 0x134);
  }
  uVar9 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa0) + 0x5c);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x70);
  uVar4 = *(ushort *)(lVar7 + 0xc + uVar9 * 0x14);
  uVar11 = uVar4 | 0x10;
  if (*(char *)(param_1 + 300) != '\0') {
    uVar11 = FUN_1403cabd0(*(undefined8 *)(param_1 + 0xf8),param_2);
    uVar11 = uVar11 | uVar4 & 0x70 | 0x10;
  }
  *(ushort *)(lVar7 + uVar9 * 0x14 + 0xc) = uVar11;
  lVar7 = *(longlong *)(param_1 + 0xa0);
  uVar8 = func_0x0001403eb040(lVar7,1,1);
  if ((char)uVar8 != '\0') {
    uVar9 = (ulonglong)*(uint *)(lVar7 + 0x5c);
    if (*(uint *)(lVar7 + 0x5c) < *(uint *)(lVar7 + 0x60)) {
      lVar10 = *(longlong *)(lVar7 + 0x70);
    }
    else {
      uVar9 = (ulonglong)(*(int *)(lVar7 + 100) - 1);
      if (*(int *)(lVar7 + 100) == 0) {
        uVar9 = 0;
      }
      lVar10 = *(longlong *)(lVar7 + 0x78);
    }
    puVar1 = (undefined8 *)(lVar10 + uVar9 * 0x14);
    uVar8 = puVar1[1];
    uVar5 = *(uint *)(lVar7 + 100);
    lVar6 = *(longlong *)(lVar7 + 0x78);
    puVar2 = (undefined8 *)(lVar6 + (ulonglong)uVar5 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    puVar3 = (uint *)(lVar6 + (ulonglong)uVar5 * 0x14);
    uVar5 = *(uint *)(lVar10 + uVar9 * 0x14 + 0x10);
    puVar3[4] = uVar5;
    *puVar3 = param_2;
    *(int *)(lVar7 + 0x5c) = *(int *)(lVar7 + 0x5c) + 1;
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
  }
  return uVar8;
}

