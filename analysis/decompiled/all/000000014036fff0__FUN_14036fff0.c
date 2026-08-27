// Function: FUN_14036fff0
// Addr: 14036fff0
// Size: 628 bytes


void FUN_14036fff0(longlong param_1,char *param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint uVar11;
  
  cVar1 = *(char *)(param_1 + 7);
  if (cVar1 == '\0') {
    uVar4 = *(undefined1 *)(param_1 + 0xc);
    uVar5 = *(undefined1 *)(param_1 + 0xd);
    bVar2 = *(byte *)(param_1 + 0xe);
    bVar3 = *(byte *)(param_1 + 0xf);
    for (pbVar10 = (byte *)(param_1 + 0x1c);
        pbVar10 !=
        (byte *)(param_1 +
                (((ulonglong)CONCAT11(uVar4,uVar5) * 0x100 + (ulonglong)bVar2) * 0x100 +
                (ulonglong)bVar3) * 6 + 0x1c); pbVar10 = pbVar10 + 6) {
      if (*param_2 != '\0') {
        uVar11 = (uint)*pbVar10 * 0x100 + (uint)pbVar10[1];
        param_2[4] = -1;
        param_2[5] = -1;
        param_2[6] = -1;
        param_2[7] = -1;
        puVar7 = (undefined4 *)FUN_1403ed560(param_2,uVar11,1);
        if (puVar7 != (undefined4 *)0x0) {
          uVar9 = (ulonglong)(uVar11 >> 6 & 7);
          *(ulonglong *)(puVar7 + uVar9 * 2 + 2) =
               *(ulonglong *)(puVar7 + uVar9 * 2 + 2) | 1L << (ulonglong)(uVar11 & 0x3f);
          *puVar7 = 0xffffffff;
        }
      }
      if (*param_3 != '\0') {
        uVar11 = (uint)pbVar10[3] + (uint)pbVar10[2] * 0x100;
        param_3[4] = -1;
        param_3[5] = -1;
        param_3[6] = -1;
        param_3[7] = -1;
        puVar7 = (undefined4 *)FUN_1403ed560(param_3,uVar11,1);
        if (puVar7 != (undefined4 *)0x0) {
          uVar9 = (ulonglong)(uVar11 >> 6 & 7);
          *(ulonglong *)(puVar7 + uVar9 * 2 + 2) =
               *(ulonglong *)(puVar7 + uVar9 * 2 + 2) | 1L << (ulonglong)(uVar11 & 0x3f);
          *puVar7 = 0xffffffff;
        }
      }
    }
    return;
  }
  if (cVar1 == '\x01') {
    FUN_140371540(param_1 + 0xc,param_2,param_4,param_1);
    return;
  }
  if (cVar1 == '\x02') {
    FUN_14036fca0((ulonglong)*(byte *)(param_1 + 0x13) +
                  ((ulonglong)*(byte *)(param_1 + 0x12) +
                  (ulonglong)
                  CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)) * 0x100)
                  * 0x100 + param_1,param_2,param_4);
    bVar2 = *(byte *)(param_1 + 0x17);
    uVar6 = CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15));
    bVar3 = *(byte *)(param_1 + 0x16);
  }
  else {
    if (cVar1 == '\x04') {
      FUN_1403717a0(param_1 + 0xc,param_2,param_4,param_1);
      return;
    }
    if (cVar1 != '\x06') {
      return;
    }
    lVar8 = (ulonglong)*(byte *)(param_1 + 0x17) +
            ((ulonglong)*(byte *)(param_1 + 0x16) +
            (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15)) *
            0x100) * 0x100 + param_1;
    if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
      FUN_14036fca0(lVar8,param_2,param_4);
      FUN_14036fca0((ulonglong)*(byte *)(param_1 + 0x1b) +
                    ((ulonglong)*(byte *)(param_1 + 0x1a) +
                    (ulonglong)
                    CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19)) *
                    0x100) * 0x100 + param_1,param_3,param_4);
      return;
    }
    FUN_14036fca0(lVar8,param_2,param_4);
    bVar2 = *(byte *)(param_1 + 0x1b);
    uVar6 = CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19));
    bVar3 = *(byte *)(param_1 + 0x1a);
  }
  FUN_14036fca0((ulonglong)bVar2 + ((ulonglong)bVar3 + (ulonglong)uVar6 * 0x100) * 0x100 + param_1,
                param_3,param_4);
  return;
}

