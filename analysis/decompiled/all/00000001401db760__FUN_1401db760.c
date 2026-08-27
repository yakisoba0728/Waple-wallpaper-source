// Function: FUN_1401db760
// Addr: 1401db760
// Size: 417 bytes


undefined4 *
FUN_1401db760(longlong *param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar10 = auStack_48;
  puVar11 = auStack_48;
  lVar4 = *param_1;
  lVar13 = (param_1[1] - lVar4 >> 2) * -0x5555555555555555;
  if (lVar13 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar7 = (param_1[2] - lVar4 >> 2) * -0x5555555555555555;
  uVar6 = 0x1555555555555555 - (uVar7 >> 1);
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
    uVar6 = lVar13 + 1;
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar12 = uVar6;
    if (uVar6 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 < 0x1555555555555556) {
      uVar7 = uVar12 * 0xc;
      if (uVar7 == 0) {
        puVar9 = (undefined4 *)0x0;
        puVar11 = auStack_48;
      }
      else if (uVar7 < 0x1000) {
        puVar9 = (undefined4 *)FUN_14028af20();
      }
      else {
        if (uVar7 + 0x27 <= uVar7) goto LAB_1401db8fd;
        lVar13 = FUN_14028af20(uVar7 + 0x27);
        if (lVar13 == 0) {
          pcVar5 = (code *)swi(0x29);
          lVar13 = (*pcVar5)(5);
          puVar10 = auStack_40;
        }
        puVar9 = (undefined4 *)(lVar13 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(puVar9 + -2) = lVar13;
        puVar11 = puVar10;
      }
      puVar1 = puVar9 + ((param_2 - lVar4) / 0xc) * 3;
      uVar2 = **(undefined4 **)(puVar11 + 0x70);
      uVar3 = *param_3;
      puVar1[1] = *param_4;
      puVar1[2] = uVar2;
      *puVar1 = uVar3;
      lVar4 = *param_1;
      if (param_2 == param_1[1]) {
        lVar13 = param_1[1] - lVar4;
        puVar8 = puVar9;
        param_2 = lVar4;
      }
      else {
        *(undefined8 *)(puVar11 + -8) = 0x1401db8b4;
        FUN_1404210f0(puVar9,lVar4,param_2 - lVar4);
        puVar8 = puVar1 + 3;
        lVar13 = param_1[1] - param_2;
      }
      *(undefined8 *)(puVar11 + -8) = 0x1401db8c7;
      FUN_1404210f0(puVar8,param_2,lVar13);
      *(undefined8 *)(puVar11 + -8) = 0x1401db8d8;
      FUN_1401dc9c0(param_1,puVar9,uVar6,uVar12);
      return puVar1;
    }
  }
LAB_1401db8fd:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

