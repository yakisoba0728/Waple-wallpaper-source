// Function: FUN_1403743d0
// Addr: 1403743d0
// Size: 402 bytes


undefined1 FUN_1403743d0(int *param_1,longlong param_2,uint *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar7;
  
  uVar1 = *param_3;
  cVar3 = FUN_140409930(param_2,param_1,uVar1);
  if (cVar3 == '\0') {
    return 0;
  }
  uVar7 = 0;
  if (uVar1 != 0) {
    do {
      uVar9 = (ulonglong)(uint)param_1[6];
      lVar2 = *param_4;
      lVar5 = param_2 + 0xc + uVar7 * 0xc;
      pcVar4 = "OUT-OF-RANGE";
      uVar8 = lVar5 - *(longlong *)(param_1 + 2);
      if (uVar8 <= uVar9) {
        pcVar4 = "OK";
      }
      FUN_1402fc370("SANITIZE",lVar5,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar5,
                    *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar4);
      if (uVar9 < uVar8) {
        return 0;
      }
      lVar5 = uVar7 * 0xc + param_2;
      cVar3 = FUN_1404094a0(lVar5 + 5,param_1,lVar2);
      if (cVar3 == '\0') {
        return 0;
      }
      cVar3 = FUN_140407740((ulonglong)*(byte *)(lVar5 + 7) +
                            (ulonglong)
                            CONCAT11(*(undefined1 *)(lVar5 + 5),*(undefined1 *)(lVar5 + 6)) * 0x100
                            + lVar2,param_1);
      if (cVar3 == '\0') {
        return 0;
      }
      cVar3 = FUN_140404e10((ulonglong)*(byte *)(lVar5 + 7) +
                            (ulonglong)
                            CONCAT11(*(undefined1 *)(lVar5 + 5),*(undefined1 *)(lVar5 + 6)) * 0x100
                            + 4 + lVar2,param_1);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < uVar1);
  }
  return 1;
}

