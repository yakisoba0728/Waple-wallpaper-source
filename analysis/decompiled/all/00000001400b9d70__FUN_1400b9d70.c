// Function: FUN_1400b9d70
// Addr: 1400b9d70
// Size: 1 bytes


byte * FUN_1400b9d70(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  pcVar10 = (char *)0x0;
  bVar3 = false;
  uVar9 = 0;
  pbVar7 = (byte *)pcVar10;
  pbVar8 = (byte *)pcVar10;
  if ((param_2 != (longlong *)0x0) &&
     (lVar2 = *param_2, pbVar7 = (byte *)0x0, pbVar8 = (byte *)0x0, lVar2 != 0)) {
    pbVar7 = (byte *)(param_2[3] + lVar2);
    pbVar8 = (byte *)(param_2[2] + lVar2);
  }
  iVar11 = *(int *)(param_1 + 0x16c);
  if (iVar11 == 0) {
    uVar12 = *(uint *)(param_1 + 0x7c);
    if ((uVar12 < 0x301) && (uVar13 = uVar12 / 3, uVar12 == uVar13 * 3)) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      goto code_r0x0001400b9e20;
    }
    pcVar10 = "#png: bad chunk";
  }
  else {
    uVar13 = *(uint *)(param_1 + 0xae08);
    uVar9 = *(uint *)(param_1 + 0xae0c);
    if (iVar11 == 1) goto code_r0x0001400b9e29;
    if (iVar11 == 2) {
      while (pbVar7 != pbVar8) {
        uVar12 = *(uint *)(param_1 + 0xae10);
        *(ulonglong *)(param_1 + 0xae10) = *(ulonglong *)(param_1 + 0xae10) & 0xffffffffffffff00;
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        uVar6 = uVar12 & 0xff;
        uVar5 = (ulonglong)bVar1 << (0x38U - (char)uVar12 & 0x3f) | *(ulonglong *)(param_1 + 0xae10)
        ;
        *(ulonglong *)(param_1 + 0xae10) = uVar5;
        if (uVar6 == 0x10) {
          uVar5 = uVar5 >> 0x28;
          while( true ) {
            uVar12 = uVar9 * 4;
            *(char *)((ulonglong)uVar12 + 0xa9b8 + param_1) = (char)uVar5;
            *(char *)((ulonglong)(uVar12 + 1) + 0xa9b8 + param_1) = (char)(uVar5 >> 8);
            *(char *)((ulonglong)(uVar12 + 2) + 0xa9b8 + param_1) = (char)(uVar5 >> 0x10);
            uVar9 = uVar9 + 1;
            *(undefined1 *)((ulonglong)(uVar12 + 3) + 0xa9b8 + param_1) = 0xff;
code_r0x0001400b9e20:
            if (uVar13 <= uVar9) goto joined_r0x0001400b9f37;
code_r0x0001400b9e29:
            if ((longlong)pbVar8 - (longlong)pbVar7 < 3) break;
            uVar5 = (ulonglong)CONCAT21(CONCAT11(*pbVar7,pbVar7[1]),pbVar7[2]);
            pbVar7 = pbVar7 + 3;
          }
          *(undefined8 *)(param_1 + 0xae10) = 0;
          iVar11 = 2;
        }
        else {
          *(ulonglong *)(param_1 + 0xae10) = uVar6 + 8 | uVar5;
        }
      }
      pcVar10 = "$base: short read";
      bVar3 = true;
    }
    *(uint *)(param_1 + 0xae08) = uVar13;
    *(uint *)(param_1 + 0xae0c) = uVar9;
    iVar4 = 0;
    if (bVar3) {
      iVar4 = iVar11;
    }
    *(int *)(param_1 + 0x16c) = iVar4;
  }
code_r0x0001400b9f8b:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)pbVar7 - *param_2;
  }
  return (byte *)pcVar10;
joined_r0x0001400b9f37:
  for (; uVar9 < 0x100; uVar9 = uVar9 + 1) {
    uVar12 = uVar9 * 4;
    *(undefined1 *)(param_1 + 0xa9b8 + (ulonglong)uVar12) = 0;
    *(undefined1 *)(param_1 + 0xa9b8 + (ulonglong)(uVar12 + 1)) = 0;
    *(undefined1 *)(param_1 + 0xa9b8 + (ulonglong)(uVar12 + 2)) = 0;
    *(undefined1 *)(param_1 + 0xa9b8 + (ulonglong)(uVar12 + 3)) = 0xff;
  }
  *(undefined4 *)(param_1 + 0x16c) = 0;
  goto code_r0x0001400b9f8b;
}

