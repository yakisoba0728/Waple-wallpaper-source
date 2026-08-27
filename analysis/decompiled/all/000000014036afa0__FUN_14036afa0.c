// Function: FUN_14036afa0
// Addr: 14036afa0
// Size: 466 bytes


ulonglong FUN_14036afa0(int *param_1,undefined1 *param_2)

{
  longlong lVar1;
  ushort uVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  ulonglong uVar10;
  
  uVar5 = (ulonglong)(uint)param_1[6];
  puVar8 = param_2 + 2;
  pcVar3 = "OUT-OF-RANGE";
  uVar10 = (longlong)puVar8 - *(longlong *)(param_1 + 2);
  if (uVar10 <= uVar5) {
    pcVar3 = "OK";
  }
  uVar4 = FUN_1402fc370("SANITIZE",puVar8,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        puVar8,*(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar3);
  if (uVar10 <= uVar5) {
    uVar5 = (ulonglong)(uint)param_1[6];
    uVar2 = CONCAT11(*param_2,param_2[1]);
    uVar10 = (longlong)(param_2 + (ulonglong)uVar2 * 2 + 4) - *(longlong *)(param_1 + 2);
    uVar4 = FUN_1402fc370("SANITIZE",param_2 + (ulonglong)uVar2 * 2 + 4,0);
    if (uVar10 <= uVar5) {
      lVar1 = *(longlong *)(param_1 + 2);
      uVar5 = (ulonglong)(uint)param_1[6];
      iVar7 = (uint)(byte)param_2[(ulonglong)uVar2 * 2 + 3] +
              (uint)(byte)param_2[(ulonglong)uVar2 * 2 + 2] * 0x100;
      iVar6 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      pbVar9 = param_2 + (ulonglong)uVar2 * 2 + 2 + (iVar6 * 2 + 2);
      uVar10 = FUN_1402fc370("SANITIZE",pbVar9 + 2,0);
      if (uVar5 < (ulonglong)((longlong)(pbVar9 + 2) - lVar1)) {
        return uVar10 & 0xffffffffffffff00;
      }
      uVar5 = FUN_140407b60(pbVar9 + ((ulonglong)pbVar9[1] + (ulonglong)*pbVar9 * 0x100 + 1) * 2,
                            param_1);
      return uVar5;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}

