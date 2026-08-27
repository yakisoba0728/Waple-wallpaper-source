// Function: FUN_140306f00
// Addr: 140306f00
// Size: 322 bytes


uint FUN_140306f00(longlong param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x438);
  if (param_2 < uVar1) {
    lVar3 = *(longlong *)(param_1 + 0x440);
    if (*(short *)(param_1 + 0x132) == 0) {
      puVar6 = (undefined1 *)((ulonglong)(param_2 * 2) + lVar3);
      uVar7 = (uint)CONCAT11(*puVar6,puVar6[1]);
      if ((undefined1 *)((ulonglong)(uVar1 * 2) + lVar3) < puVar6 + 4) {
        uVar5 = uVar7 * 2;
        uVar7 = uVar7 * 2;
      }
      else {
        uVar5 = uVar7 * 2;
        uVar7 = (uint)CONCAT11(puVar6[2],puVar6[3]) * 2;
      }
    }
    else {
      uVar5 = param_2 * 4;
      uVar8 = (ulonglong)uVar5;
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)uVar5 + lVar3),
                                         *(undefined1 *)((ulonglong)uVar5 + 1 + lVar3)),
                                *(undefined1 *)(uVar8 + 2 + lVar3)),
                       *(undefined1 *)(uVar8 + 3 + lVar3));
      uVar7 = uVar5;
      if (lVar3 + 8 + uVar8 <= (ulonglong)(uVar1 * 4) + lVar3) {
        uVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar8 + 4 + lVar3),
                                           *(undefined1 *)(uVar8 + 5 + lVar3)),
                                  *(undefined1 *)(uVar8 + 6 + lVar3)),
                         *(undefined1 *)(uVar8 + 7 + lVar3));
      }
    }
  }
  else {
    uVar5 = 0;
    uVar7 = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x3f8);
  if ((uVar5 <= uVar2) && ((uVar7 <= uVar2 || (uVar7 = uVar2, param_2 == uVar1 - 2)))) {
    iVar4 = uVar7 - uVar5;
    if (uVar7 < uVar5) {
      iVar4 = uVar2 - uVar5;
    }
    *param_3 = iVar4;
    return uVar5;
  }
  *param_3 = 0;
  return 0;
}

