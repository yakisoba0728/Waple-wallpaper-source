// Function: FUN_1403a5530
// Addr: 1403a5530
// Size: 768 bytes


void FUN_1403a5530(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  
  uVar14 = 0;
  puVar10 = (undefined1 *)
            (((((ulonglong)CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9)) *
                0x100 + (ulonglong)*(byte *)(param_1 + 10)) * 0x100 +
              (ulonglong)*(byte *)(param_1 + 0xb)) * 3 & 0x3fffffff) * 4 + 0x10 + param_1);
  uVar13 = (uint)*(byte *)(param_1 + 0xd) * 0x10000 + (uint)*(byte *)(param_1 + 0xe) * 0x100 +
           (uint)*(byte *)(param_1 + 0xc) * 0x1000000 + (uint)*(byte *)(param_1 + 0xf);
  if (uVar13 == 0) {
LAB_1403a574a:
    if (*(char *)(param_2 + 0x8c) != '\0') {
      FUN_1403f8e70(*(longlong *)(param_2 + 0x20),0,
                    *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x60));
      *(bool *)(param_2 + 0x8c) = *(char *)(param_2 + 0x8c) == '\0';
    }
    return;
  }
LAB_1403a55d0:
  uVar12 = (uint)(byte)puVar10[9] * 0x10000 + (uint)(byte)puVar10[10] * 0x100 +
           (uint)(byte)puVar10[8] * 0x1000000 + (uint)(byte)puVar10[0xb];
  puVar8 = *(uint **)(*(longlong *)(param_2 + 0x80) + 8);
  for (iVar7 = *(int *)(*(longlong *)(param_2 + 0x80) + 4); iVar7 != 0; iVar7 = iVar7 + -1) {
    if ((*puVar8 & uVar12) != 0) {
      bVar3 = puVar10[4];
      if (((bVar3 & 0x20) != 0) ||
         (((*(uint *)(*(longlong *)(param_2 + 0x20) + 0x38) & 0xfffffffe) == 6) ==
          (bool)(bVar3 >> 7))) {
        *(uint *)(param_2 + 0x88) = uVar12;
        if (param_3 == 0) {
          puVar9 = &DAT_14045dd10;
          lVar6 = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_3 + 8 + uVar14 * 0x230);
          lVar6 = param_3 + 0x38 + uVar14 * 0x230;
        }
        *(undefined8 **)(param_2 + 0x98) = puVar9;
        *(longlong *)(param_2 + 0xa8) = lVar6;
        if (*(char *)(param_2 + 0x8d) != '\0') {
          cVar5 = FUN_1403e64c0(*(undefined8 *)(param_2 + 0x90));
          if (cVar5 == '\0') goto LAB_1403a56e6;
          goto LAB_1403a569a;
        }
        lVar6 = *(longlong *)(param_2 + 0x20);
        if (*(int *)(lVar6 + 0x60) == 0) goto LAB_1403a56e6;
        uVar11 = 0;
        goto LAB_1403a56c0;
      }
      break;
    }
    if (iVar7 == 0) break;
    puVar8 = puVar8 + 3;
  }
  goto LAB_1403a5701;
  while( true ) {
    lVar6 = *(longlong *)(param_2 + 0x20);
    uVar12 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar12;
    if (*(uint *)(lVar6 + 0x60) <= uVar12) break;
LAB_1403a56c0:
    cVar5 = FUN_1403c58e0(*(undefined8 *)(param_2 + 0x98),
                          *(undefined4 *)(*(longlong *)(lVar6 + 0x70) + uVar11 * 0x14));
    if (cVar5 != '\0') goto LAB_1403a569a;
  }
LAB_1403a56e6:
  FUN_1403ec530(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
                "skipped chainsubtable %u because no glyph matches",*(undefined4 *)(param_2 + 0xb0))
  ;
  goto LAB_1403a5701;
LAB_1403a569a:
  if ((bVar3 & 0x10) == 0) {
    bVar15 = ((bVar3 & 0x40) != 0) ==
             ((*(uint *)(*(longlong *)(param_2 + 0x20) + 0x38) & 0xfffffffd) == 5);
  }
  else {
    bVar15 = (bVar3 & 0x40) == 0;
  }
  cVar5 = FUN_1403ec530(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
                        "start chainsubtable %u",*(undefined4 *)(param_2 + 0xb0));
  if (cVar5 != '\0') {
    if (!bVar15 != (bool)*(char *)(param_2 + 0x8c)) {
      FUN_1403f8e70(*(longlong *)(param_2 + 0x20),0,
                    *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x60));
      *(bool *)(param_2 + 0x8c) = *(char *)(param_2 + 0x8c) == '\0';
    }
    FUN_140375cc0(puVar10,param_2);
    FUN_1403ec530(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
                  "end chainsubtable %u",*(undefined4 *)(param_2 + 0xb0));
    if (*(char *)(*(longlong *)(param_2 + 0x20) + 0x58) == '\0') goto LAB_1403a574a;
  }
LAB_1403a5701:
  uVar1 = puVar10[1];
  uVar12 = (int)uVar14 + 1;
  uVar14 = (ulonglong)uVar12;
  uVar2 = *puVar10;
  bVar3 = puVar10[2];
  bVar4 = puVar10[3];
  *(int *)(param_2 + 0xb0) = *(int *)(param_2 + 0xb0) + 1;
  puVar10 = puVar10 + ((ulonglong)CONCAT11(uVar2,uVar1) * 0x100 + (ulonglong)bVar3) * 0x100 +
                      (ulonglong)bVar4;
  if (uVar13 <= uVar12) goto LAB_1403a574a;
  goto LAB_1403a55d0;
}

