// Function: FUN_1400af380
// Addr: 1400af380
// Size: 101 bytes


char * FUN_1400af380(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  char *pcVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  
  pbVar5 = (byte *)0x0;
  pcVar4 = (char *)0x0;
  pbVar10 = (byte *)0x0;
  if ((param_2 != (longlong *)0x0) && (lVar2 = *param_2, lVar2 != 0)) {
    pbVar10 = (byte *)(param_2[3] + lVar2);
    pbVar5 = (byte *)(param_2[2] + lVar2);
  }
  iVar8 = *(int *)(param_1 + 0xe0);
  iVar9 = 1;
  if ((iVar8 == 0) || (iVar8 == 1)) {
    if (pbVar10 == pbVar5) {
      pcVar4 = "$base: short read";
      *(undefined4 *)(param_1 + 0xe0) = 1;
      goto code_r0x0001400af5e5;
    }
    bVar1 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    if ((char)bVar1 < '\0') {
      iVar8 = 2;
      *(ulonglong *)(param_1 + 0xfd88) = (ulonglong)(uint)(3 << (bVar1 & 7) + 1);
      goto LAB_1400af427;
    }
code_r0x0001400af466:
    iVar8 = 3;
LAB_1400af46b:
    if (pbVar10 == pbVar5) {
      pcVar4 = "$base: short read";
      *(int *)(param_1 + 0xe0) = iVar8;
      goto code_r0x0001400af5e5;
    }
    bVar1 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    if (8 < bVar1) {
      pcVar4 = "#gif: bad literal width";
      goto code_r0x0001400af5e5;
    }
    if (param_2 != (longlong *)0x0) {
      param_2[3] = (longlong)pbVar10 - *param_2;
    }
    iVar8 = 4;
LAB_1400af4b5:
    pbVar5 = (byte *)0x0;
    pbVar7 = (byte *)0x0;
    if ((param_2 != (longlong *)0x0) && (lVar2 = *param_2, lVar2 != 0)) {
      pbVar5 = (byte *)(param_2[3] + lVar2);
      pbVar7 = (byte *)(param_2[2] + lVar2);
    }
    iVar12 = *(int *)(param_1 + 0xfc);
    iVar11 = iVar9;
    if (iVar12 == 0) goto code_r0x0001400af4f9;
    iVar11 = iVar12;
    if (iVar12 == 1) goto code_r0x0001400af4f9;
    if (iVar12 == 2) {
      while (uVar6 = *(ulonglong *)(param_1 + 0xfdb8),
            uVar6 <= (ulonglong)((longlong)pbVar7 - (longlong)pbVar5)) {
        pbVar5 = pbVar5 + uVar6;
        iVar11 = iVar9;
code_r0x0001400af4f9:
        iVar12 = iVar11;
        if (pbVar5 == pbVar7) goto code_r0x0001400af540;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        if (bVar1 == 0) {
          pcVar4 = (char *)0x0;
          iVar11 = 0;
          goto code_r0x0001400af551;
        }
        *(ulonglong *)(param_1 + 0xfdb8) = (ulonglong)bVar1;
        iVar12 = 2;
      }
      *(byte **)(param_1 + 0xfdb8) = pbVar5 + (uVar6 - (longlong)pbVar7);
      pbVar5 = pbVar7;
code_r0x0001400af540:
      bVar3 = true;
      pcVar4 = "$base: short read";
    }
    else {
      pcVar4 = (char *)0x0;
      bVar3 = false;
    }
    iVar11 = 0;
    if (bVar3) {
      iVar11 = iVar12;
    }
code_r0x0001400af551:
    *(int *)(param_1 + 0xfc) = iVar11;
    if (param_2 != (longlong *)0x0) {
      lVar2 = *param_2;
      if (lVar2 != 0) {
        param_2[3] = (longlong)pbVar5 - lVar2;
      }
      pbVar10 = (byte *)(param_2[3] + lVar2);
    }
    if (pcVar4 == (char *)0x0) {
      if (*(char *)(param_1 + 0x40) == '\0') {
        uVar6 = *(ulonglong *)(param_1 + 0x78) + 1;
        if (uVar6 < *(ulonglong *)(param_1 + 0x78)) {
          uVar6 = 0xffffffffffffffff;
        }
        *(ulonglong *)(param_1 + 0x78) = uVar6;
      }
      else {
        *(undefined1 *)(param_1 + 0x47) = 1;
      }
      *(undefined2 *)(param_1 + 0x5c) = 0;
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 0x30) = 0x20;
      *(undefined4 *)(param_1 + 0xe0) = 0;
      goto code_r0x0001400af5e5;
    }
    if (*pcVar4 != '$') goto LAB_1400af582;
  }
  else {
    if (iVar8 == 2) {
LAB_1400af427:
      uVar6 = *(ulonglong *)(param_1 + 0xfd88);
      if ((ulonglong)((longlong)pbVar5 - (longlong)pbVar10) < uVar6) {
        pcVar4 = "$base: short read";
        *(byte **)(param_1 + 0xfd88) = pbVar10 + (uVar6 - (longlong)pbVar5);
        *(int *)(param_1 + 0xe0) = iVar8;
        pbVar10 = pbVar5;
        goto code_r0x0001400af5e5;
      }
      pbVar10 = pbVar10 + uVar6;
      goto code_r0x0001400af466;
    }
    if (iVar8 == 3) goto LAB_1400af46b;
    if (iVar8 == 4) goto LAB_1400af4b5;
LAB_1400af582:
    iVar9 = 0;
  }
  iVar12 = 0;
  if (iVar9 != 0) {
    iVar12 = iVar8;
  }
  *(int *)(param_1 + 0xe0) = iVar12;
code_r0x0001400af5e5:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)pbVar10 - *param_2;
  }
  return pcVar4;
}

