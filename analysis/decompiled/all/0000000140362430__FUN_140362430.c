// Function: FUN_140362430
// Addr: 140362430
// Size: 413 bytes


byte * FUN_140362430(longlong param_1,int param_2,int *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  char cVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (param_2 != 0) {
    uVar11 = (ulonglong)(uint)param_3[6];
    pcVar8 = "OUT-OF-RANGE";
    pbVar9 = (byte *)(param_2 + param_1);
    uVar12 = (longlong)pbVar9 - *(longlong *)(param_3 + 2);
    iVar10 = 1;
    if (uVar12 <= uVar11) {
      pcVar8 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar9,0,1,*param_3 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar9,
                  *(longlong *)(param_3 + 2),*(undefined8 *)(param_3 + 4),pcVar8);
    if (uVar12 <= uVar11) {
      bVar1 = param_4[1];
      bVar2 = param_4[2];
      bVar3 = *param_4;
      bVar4 = param_4[3];
      lVar6 = *(longlong *)(param_3 + 2);
      uVar11 = (ulonglong)(uint)param_3[6];
      FUN_1402fc370("SANITIZE",pbVar9 + 2,0);
      if ((ulonglong)((longlong)(pbVar9 + 2) - lVar6) <= uVar11) {
        bVar5 = *pbVar9;
        if (bVar5 == 0) {
          cVar7 = FUN_140403790(pbVar9 + 1,param_3,
                                (uint)bVar3 * 0x1000000 + (uint)bVar2 * 0x100 +
                                (uint)bVar1 * 0x10000 + (uint)bVar4);
        }
        else if (bVar5 == 3) {
          cVar7 = FUN_1403fbf80(pbVar9 + 1,param_3);
        }
        else {
          if (bVar5 - 3 != iVar10) goto LAB_1403625b5;
          cVar7 = FUN_1403fc280(pbVar9 + 1,param_3);
        }
        if (cVar7 != '\0') {
          return pbVar9;
        }
        return (byte *)&DAT_14045dd10;
      }
    }
  }
LAB_1403625b5:
  return (byte *)&DAT_14045dd10;
}

