// Function: FUN_140166520
// Addr: 140166520
// Size: 962 bytes


longlong * FUN_140166520(longlong *param_1,char *param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  
  iVar10 = (int)(param_4 >> 0x20);
  uVar1 = FUN_1401661a0(param_4 & 0xffffffff);
  uVar2 = (ulonglong)uVar1;
  uVar7 = uVar1 + iVar10;
  iVar5 = -3;
  if (uVar1 != 1) {
    iVar5 = -3 - uVar1;
  }
  uVar6 = (uint)param_4;
  if ((iVar10 < iVar5) || ((int)((uVar1 != 1) + 4) < iVar10)) {
    uVar11 = (ulonglong)((1 < uVar1) + 4 + uVar1);
    if (param_3 - (longlong)param_2 < (longlong)uVar11) goto LAB_14016675f;
    iVar5 = uVar7 - 1;
    uVar4 = 0;
    while (uVar3 = (uint)param_4, 9999 < uVar6) {
      param_4 = (param_4 & 0xffffffff) / 10000;
      uVar6 = (uint)param_4;
      uVar3 = uVar3 + uVar6 * -10000;
      *(undefined2 *)(param_2 + (uVar2 - uVar4) + -1) =
           *(undefined2 *)(&DAT_14048bd30 + (uVar3 % 100) * 2);
      *(undefined2 *)(param_2 + (uVar2 - uVar4) + -3) =
           *(undefined2 *)(&DAT_14048bd30 + (uVar3 / 100) * 2);
      uVar4 = (ulonglong)((int)uVar4 + 4);
    }
    uVar6 = uVar3;
    if (99 < uVar3) {
      uVar6 = (uint)((param_4 & 0xffffffff) / 100);
      *(undefined2 *)(param_2 + (uVar2 - uVar4) + -1) =
           *(undefined2 *)(&DAT_14048bd30 + (uVar3 + uVar6 * -100) * 2);
    }
    if (uVar6 < 10) {
      cVar9 = (char)uVar6 + '0';
    }
    else {
      param_2[2] = (&DAT_14048bd30)[uVar6 * 2 + 1];
      cVar9 = (&DAT_14048bd30)[uVar6 * 2];
    }
    *param_2 = cVar9;
    if (uVar1 < 2) {
      uVar2 = 1;
      uVar1 = 3;
      uVar4 = 2;
    }
    else {
      uVar2 = (ulonglong)(uVar1 + 1);
      param_2[1] = '.';
      uVar4 = (ulonglong)(uVar1 + 2);
      uVar1 = uVar1 + 3;
    }
    param_2[uVar2] = 'e';
    cVar9 = '-';
    if (-1 < iVar5) {
      cVar9 = '+';
    }
    param_2[uVar4] = cVar9;
    iVar10 = 1 - uVar7;
    if (-1 < iVar5) {
      iVar10 = iVar5;
    }
    *(undefined2 *)(param_2 + uVar1) = *(undefined2 *)(&DAT_14048bd30 + iVar10 * 2);
    pcVar8 = param_2 + uVar11;
  }
  else {
    if (iVar10 < 0) {
      if ((int)uVar7 < 1) {
        uVar3 = 2 - iVar10;
      }
      else {
        uVar3 = uVar1 + 1;
      }
    }
    else {
      uVar3 = uVar7;
      if (uVar6 == 1) {
        uVar3 = uVar7 - (byte)(&DAT_14048be28)[iVar10];
      }
    }
    uVar11 = (ulonglong)uVar3;
    if (param_3 - (longlong)param_2 < (longlong)uVar11) {
LAB_14016675f:
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
      return param_1;
    }
    if (0 < iVar10) {
      if (10 < iVar10) {
LAB_14016669b:
        FUN_140166210(param_1,param_2);
        return param_1;
      }
      iVar5 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
        }
      }
      uVar3 = uVar1;
      if (*(uint *)(&DAT_14048bdf8 + (longlong)iVar10 * 4) < uVar6 >> ((byte)iVar5 & 0x1f))
      goto LAB_14016669b;
    }
    pcVar8 = param_2 + uVar3;
    while (uVar1 = (uint)param_4, 9999 < uVar6) {
      param_4 = (param_4 & 0xffffffff) / 10000;
      uVar6 = (uint)param_4;
      uVar1 = uVar1 + uVar6 * -10000;
      *(undefined2 *)(pcVar8 + -2) = *(undefined2 *)(&DAT_14048bd30 + (uVar1 % 100) * 2);
      pcVar8 = pcVar8 + -4;
      *(undefined2 *)pcVar8 = *(undefined2 *)(&DAT_14048bd30 + (uVar1 / 100) * 2);
    }
    uVar6 = uVar1;
    if (99 < uVar1) {
      uVar6 = (uint)((param_4 & 0xffffffff) / 100);
      pcVar8 = pcVar8 + -2;
      *(undefined2 *)pcVar8 = *(undefined2 *)(&DAT_14048bd30 + (uVar1 + uVar6 * -100) * 2);
    }
    if (uVar6 < 10) {
      pcVar8[-1] = (char)uVar6 + '0';
    }
    else {
      *(undefined2 *)(pcVar8 + -2) = *(undefined2 *)(&DAT_14048bd30 + uVar6 * 2);
    }
    if (iVar10 < 1) {
      if (iVar10 != 0) {
        if (0 < (int)uVar7) {
          FUN_1404210f0(param_2,param_2 + 1,(longlong)(int)uVar7);
          pcVar8 = param_2 + uVar11;
          param_2[(int)uVar7] = '.';
          goto LAB_1401668c8;
        }
        param_2[0] = '0';
        param_2[1] = '.';
        if (0 < (int)-uVar7) {
          FUN_1404217a0(param_2 + 2,0x30,(longlong)(int)-uVar7);
        }
      }
      pcVar8 = param_2 + uVar11;
    }
    else {
      FUN_1404217a0(param_2 + uVar2,0x30,(longlong)iVar10);
      pcVar8 = param_2 + uVar11;
    }
  }
LAB_1401668c8:
  *param_1 = (longlong)pcVar8;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}

