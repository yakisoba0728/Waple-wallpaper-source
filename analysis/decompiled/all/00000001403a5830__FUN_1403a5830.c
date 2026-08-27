// Function: FUN_1403a5830
// Addr: 1403a5830
// Size: 698 bytes


void FUN_1403a5830(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  uVar12 = 0;
  pbVar8 = (byte *)(param_1 +
                   ((ulonglong)*(byte *)(param_1 + 8) * 0x100 +
                   (ulonglong)*(byte *)(param_1 + 9) + 1) * 0xc);
  uVar11 = (uint)*(byte *)(param_1 + 0xb) + (uint)*(byte *)(param_1 + 10) * 0x100;
  if (uVar11 == 0) {
LAB_1403a5a04:
    if (*(char *)(param_2 + 0x8c) != '\0') {
      FUN_1403f8e70(*(longlong *)(param_2 + 0x20),0,
                    *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x60));
      *(bool *)(param_2 + 0x8c) = *(char *)(param_2 + 0x8c) == '\0';
    }
    return;
  }
LAB_1403a58a0:
  uVar10 = (uint)pbVar8[5] * 0x10000 + (uint)pbVar8[6] * 0x100 + (uint)pbVar8[4] * 0x1000000 +
           (uint)pbVar8[7];
  puVar6 = *(uint **)(*(longlong *)(param_2 + 0x80) + 8);
  for (iVar5 = *(int *)(*(longlong *)(param_2 + 0x80) + 4); iVar5 != 0; iVar5 = iVar5 + -1) {
    if ((*puVar6 & uVar10) != 0) {
      bVar1 = pbVar8[2];
      if (((bVar1 & 0x20) != 0) ||
         (((*(uint *)(*(longlong *)(param_2 + 0x20) + 0x38) & 0xfffffffe) == 6) ==
          (bool)(bVar1 >> 7))) {
        *(uint *)(param_2 + 0x88) = uVar10;
        if (param_3 == 0) {
          puVar7 = &DAT_14045dd10;
          lVar4 = 0;
        }
        else {
          puVar7 = (undefined8 *)(param_3 + 8 + uVar12 * 0x230);
          lVar4 = param_3 + 0x38 + uVar12 * 0x230;
        }
        *(undefined8 **)(param_2 + 0x98) = puVar7;
        *(longlong *)(param_2 + 0xa8) = lVar4;
        if (*(char *)(param_2 + 0x8d) != '\0') {
          cVar3 = FUN_1403e64c0(*(undefined8 *)(param_2 + 0x90));
          if (cVar3 == '\0') goto LAB_1403a59b6;
          goto LAB_1403a596a;
        }
        lVar4 = *(longlong *)(param_2 + 0x20);
        if (*(int *)(lVar4 + 0x60) == 0) goto LAB_1403a59b6;
        uVar9 = 0;
        goto LAB_1403a5990;
      }
      break;
    }
    if (iVar5 == 0) break;
    puVar6 = puVar6 + 3;
  }
  goto LAB_1403a59d1;
  while( true ) {
    lVar4 = *(longlong *)(param_2 + 0x20);
    uVar10 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar10;
    if (*(uint *)(lVar4 + 0x60) <= uVar10) break;
LAB_1403a5990:
    cVar3 = FUN_1403c58e0(*(undefined8 *)(param_2 + 0x98),
                          *(undefined4 *)(*(longlong *)(lVar4 + 0x70) + uVar9 * 0x14));
    if (cVar3 != '\0') goto LAB_1403a596a;
  }
LAB_1403a59b6:
  FUN_1403ec530(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
                "skipped chainsubtable %u because no glyph matches",*(undefined4 *)(param_2 + 0xb0))
  ;
  goto LAB_1403a59d1;
LAB_1403a596a:
  if ((bVar1 & 0x10) == 0) {
    bVar13 = ((bVar1 & 0x40) != 0) ==
             ((*(uint *)(*(longlong *)(param_2 + 0x20) + 0x38) & 0xfffffffd) == 5);
  }
  else {
    bVar13 = (bVar1 & 0x40) == 0;
  }
  cVar3 = FUN_1403ec530(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
                        "start chainsubtable %u",*(undefined4 *)(param_2 + 0xb0));
  if (cVar3 != '\0') {
    if (!bVar13 != (bool)*(char *)(param_2 + 0x8c)) {
      FUN_1403f8e70(*(longlong *)(param_2 + 0x20),0,
                    *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x60));
      *(bool *)(param_2 + 0x8c) = *(char *)(param_2 + 0x8c) == '\0';
    }
    FUN_140375fd0(pbVar8,param_2);
    FUN_1403ec530(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
                  "end chainsubtable %u",*(undefined4 *)(param_2 + 0xb0));
    if (*(char *)(*(longlong *)(param_2 + 0x20) + 0x58) == '\0') goto LAB_1403a5a04;
  }
LAB_1403a59d1:
  bVar1 = *pbVar8;
  uVar10 = (int)uVar12 + 1;
  uVar12 = (ulonglong)uVar10;
  bVar2 = pbVar8[1];
  *(int *)(param_2 + 0xb0) = *(int *)(param_2 + 0xb0) + 1;
  pbVar8 = pbVar8 + (ulonglong)bVar1 * 0x100 + (ulonglong)bVar2;
  if (uVar11 <= uVar10) goto LAB_1403a5a04;
  goto LAB_1403a58a0;
}

