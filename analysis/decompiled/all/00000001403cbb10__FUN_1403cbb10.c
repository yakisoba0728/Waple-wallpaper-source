// Function: FUN_1403cbb10
// Addr: 1403cbb10
// Size: 672 bytes


ulonglong FUN_1403cbb10(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  
  uVar2 = *(undefined4 *)(param_4 + 0x60);
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
    uVar4 = FUN_1403cfe10((ulonglong)*(byte *)(param_1 + 0x17) +
                          ((ulonglong)*(byte *)(param_1 + 0x16) +
                          (ulonglong)
                          CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15))
                          * 0x100) * 0x100 + param_1,param_2,uVar2);
    uVar5 = FUN_1403cfe10((ulonglong)*(byte *)(param_1 + 0x1b) +
                          ((ulonglong)
                           CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19))
                           * 0x100 + (ulonglong)*(byte *)(param_1 + 0x1a)) * 0x100 + param_1,param_3
                          ,uVar2);
    pcVar8 = "OUT-OF-RANGE";
    lVar1 = (ulonglong)*(byte *)(param_1 + 0x1f) + param_1 +
            (((ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x1d)) *
              0x100 + (ulonglong)*(byte *)(param_1 + 0x1e)) * 0x80 + (ulonglong)uVar5 +
            (ulonglong)uVar4) * 2 + 2;
    if ((ulonglong)(lVar1 - *(longlong *)(param_4 + 0x30)) <= (ulonglong)*(uint *)(param_4 + 0x40))
    {
      pcVar8 = "OK";
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",lVar1,0,1,*(int *)(param_4 + 0x28) + 1,0,
                  "check_point [%p] in [%p..%p] -> %s",lVar1,*(longlong *)(param_4 + 0x30),
                  *(undefined8 *)(param_4 + 0x38),pcVar8);
  }
  uVar6 = FUN_1403cfef0();
  iVar7 = FUN_1403cfef0((ulonglong)*(byte *)(param_1 + 0x1b) +
                        ((ulonglong)
                         CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19)) *
                         0x100 + (ulonglong)*(byte *)(param_1 + 0x1a)) * 0x100 + param_1,param_3,
                        uVar2);
  uVar9 = iVar7 + uVar6;
  if ((uVar6 <= uVar9) && (uVar9 < 0x3fffffff)) {
    pbVar10 = (byte *)((ulonglong)(uVar9 * 4) +
                      (ulonglong)*(byte *)(param_1 + 0x1f) + param_1 +
                      ((ulonglong)
                       CONCAT11(*(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x1d)) *
                       0x100 + (ulonglong)*(byte *)(param_1 + 0x1e)) * 0x100);
    cVar3 = FUN_1403ff460(pbVar10,param_4 + 0x28);
    if (cVar3 != '\0') {
      iVar7 = (uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
              (uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 0xb);
      uVar11 = (ulonglong)
               ((uint)pbVar10[3] +
               (((uint)pbVar10[1] + (uint)*pbVar10 * 0x100) * 0x100 + (uint)pbVar10[2]) * 0x100);
      if ((iVar7 != 0) && (param_4 != 0)) {
        pbVar10 = (byte *)(uVar11 + (ulonglong)*(byte *)(param_1 + 0x23) + param_1 +
                                    ((ulonglong)
                                     CONCAT11(*(undefined1 *)(param_1 + 0x20),
                                              *(undefined1 *)(param_1 + 0x21)) * 0x100 +
                                    (ulonglong)*(byte *)(param_1 + 0x22)) * 0x100);
        cVar3 = FUN_14036f190(param_4 + 0x28,pbVar10,iVar7,2);
        if (cVar3 == '\0') {
          return 0;
        }
        return (ulonglong)(uint)(int)(short)((ushort)pbVar10[1] + (ushort)*pbVar10 * 0x100);
      }
      return uVar11;
    }
  }
  return 0;
}

