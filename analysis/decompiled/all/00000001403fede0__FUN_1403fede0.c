// Function: FUN_1403fede0
// Addr: 1403fede0
// Size: 456 bytes


undefined1 FUN_1403fede0(longlong param_1,int *param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  pbVar1 = (byte *)(param_1 + 2);
  cVar2 = FUN_140409cf0(pbVar1);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_1403cbea0(pbVar1);
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      iVar9 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
      iVar4 = 0;
      if ((iVar9 != 0) &&
         (uVar10 = (ulonglong)
                   (((uint)*pbVar1 * 0x100 + (uint)*(byte *)(param_1 + 3)) * (iVar9 + -1)),
         (uint)pbVar1[uVar10 + 0xb] + (uint)pbVar1[uVar10 + 10] * 0x100 == 0xffff)) {
        iVar4 = 1;
      }
      if (uVar7 < (uint)(iVar9 - iVar4)) {
        uVar10 = (ulonglong)(((uint)*(byte *)(param_1 + 3) + (uint)*pbVar1 * 0x100) * uVar7);
        pbVar8 = (byte *)(param_1 + 0xe + uVar10);
        lVar6 = param_1 + 0x10 + uVar10;
      }
      else {
        pbVar8 = (byte *)((longlong)&DAT_14045dd10 + 2);
        lVar6 = 0x14045dd14;
      }
      uVar11 = (ulonglong)(uint)param_2[6];
      pcVar5 = "OUT-OF-RANGE";
      uVar10 = lVar6 - *(longlong *)(param_2 + 2);
      if (uVar10 <= uVar11) {
        pcVar5 = "OK";
      }
      FUN_1402fc370("SANITIZE",lVar6,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar6,
                    *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
      if (((uVar11 < uVar10) || (cVar2 = FUN_1404093d0(pbVar8,param_2,param_3), cVar2 == '\0')) ||
         (cVar2 = FUN_140407cc0((ulonglong)pbVar8[1] + (ulonglong)*pbVar8 * 0x100 + param_3,param_2)
         , cVar2 == '\0')) {
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return 1;
}

