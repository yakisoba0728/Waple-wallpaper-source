// Function: FUN_140014560
// Addr: 140014560
// Size: 492 bytes


int FUN_140014560(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar4 = auStack_58;
  puVar5 = auStack_58;
  if ((*(byte *)(param_1 + 0x70) & 2) != 0) {
    return -1;
  }
  if (param_2 == -1) {
    return 0;
  }
  uVar8 = **(ulonglong **)(param_1 + 0x40);
  if (uVar8 == 0) {
    uVar7 = 0;
    lVar6 = **(longlong **)(param_1 + 0x18);
LAB_140014667:
    uVar8 = 0x20;
  }
  else {
    iVar1 = **(int **)(param_1 + 0x58);
    uVar7 = uVar8 + (longlong)iVar1;
    if (uVar8 < uVar7) {
      **(int **)(param_1 + 0x58) = iVar1 + -1;
      puVar5 = (undefined1 *)**(longlong **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x40) = (longlong)(puVar5 + 1);
      *puVar5 = (char)param_2;
      *(ulonglong *)(param_1 + 0x68) = uVar8 + 1;
      return param_2;
    }
    lVar6 = **(longlong **)(param_1 + 0x18);
    uVar7 = uVar7 - lVar6;
    if (uVar7 < 0x20) goto LAB_140014667;
    if (0x3ffffffe < uVar7) {
      uVar8 = 0x7fffffff;
      if (0x7ffffffe < uVar7) {
        return -1;
      }
      uVar10 = 0x80000026;
LAB_14001463b:
      lVar9 = FUN_14028af20(uVar10);
      if (lVar9 == 0) {
        pcVar3 = (code *)swi(0x29);
        lVar9 = (*pcVar3)(5);
        puVar4 = auStack_50;
      }
      uVar10 = lVar9 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar10 - 8) = lVar9;
      puVar5 = puVar4;
      goto LAB_140014677;
    }
    uVar8 = uVar7 * 2;
    if (uVar8 == 0) {
      uVar10 = 0;
      puVar5 = auStack_58;
      goto LAB_140014677;
    }
    if (0xfff < uVar8) {
      uVar10 = uVar8 + 0x27;
      if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      goto LAB_14001463b;
    }
  }
  uVar10 = FUN_14028af20(uVar8);
LAB_140014677:
  *(undefined8 *)(puVar5 + -8) = 0x140014685;
  FUN_1404210f0(uVar10,lVar6,uVar7);
  lVar9 = uVar10 + uVar7;
  *(longlong *)(param_1 + 0x68) = lVar9 + 1;
  **(ulonglong **)(param_1 + 0x20) = uVar10;
  **(longlong **)(param_1 + 0x40) = lVar9;
  **(int **)(param_1 + 0x58) = ((int)uVar8 - (int)lVar9) + (int)uVar10;
  if ((*(byte *)(param_1 + 0x70) & 4) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    lVar9 = (**(longlong **)(param_1 + 0x38) - lVar6) + uVar10;
    **(ulonglong **)(param_1 + 0x18) = uVar10;
    **(longlong **)(param_1 + 0x38) = lVar9;
    **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar9;
  }
  else {
    **(ulonglong **)(param_1 + 0x18) = uVar10;
    **(ulonglong **)(param_1 + 0x38) = uVar10;
    **(undefined4 **)(param_1 + 0x50) = 0;
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    *(undefined8 *)(puVar5 + -8) = 0x140014706;
    FUN_1400171c0(param_1 + 0x74,lVar6,uVar7);
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
  **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) + -1;
  puVar5 = (undefined1 *)**(longlong **)(param_1 + 0x40);
  **(longlong **)(param_1 + 0x40) = (longlong)(puVar5 + 1);
  *puVar5 = (char)param_2;
  return param_2;
}

