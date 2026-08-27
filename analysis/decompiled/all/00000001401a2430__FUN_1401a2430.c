// Function: FUN_1401a2430
// Addr: 1401a2430
// Size: 345 bytes


undefined8 * FUN_1401a2430(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 unaff_R14;
  undefined8 *puVar12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar8 = auStack_48;
  puVar9 = auStack_48;
  lVar2 = *param_1;
  if (param_1[1] - lVar2 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar5 = param_1[2] - lVar2 >> 3;
  if (uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar1 = (param_1[1] - lVar2 >> 3) + 1;
    uVar10 = uVar1;
    if (uVar1 <= uVar5) {
      uVar10 = uVar5;
    }
    if (uVar10 < 0x2000000000000000) {
      uVar5 = uVar10 * 8;
      if (uVar5 == 0) {
        puVar7 = (undefined8 *)0x0;
        puVar9 = auStack_48;
      }
      else if (uVar5 < 0x1000) {
        puVar7 = (undefined8 *)FUN_14028af20();
      }
      else {
        if (uVar5 + 0x27 <= uVar5) goto LAB_1401a2585;
        lVar11 = FUN_14028af20(uVar5 + 0x27);
        if (lVar11 == 0) {
          pcVar4 = (code *)swi(0x29);
          lVar11 = (*pcVar4)(5);
          puVar8 = auStack_40;
        }
        puVar7 = (undefined8 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
        puVar7[-1] = lVar11;
        puVar9 = puVar8;
      }
      uVar3 = *param_3;
      *(undefined8 *)(puVar9 + 0x20) = unaff_R14;
      puVar12 = (undefined8 *)((param_2 - lVar2 & 0xfffffffffffffff8U) + (longlong)puVar7);
      *puVar12 = uVar3;
      lVar2 = *param_1;
      if (param_2 == param_1[1]) {
        lVar11 = param_1[1] - lVar2;
        puVar6 = puVar7;
        param_2 = lVar2;
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x1401a2539;
        FUN_1404210f0(puVar7,lVar2,param_2 - lVar2);
        puVar6 = puVar12 + 1;
        lVar11 = param_1[1] - param_2;
      }
      *(undefined8 *)(puVar9 + -8) = 0x1401a254c;
      FUN_1404210f0(puVar6,param_2,lVar11);
      *(undefined8 *)(puVar9 + -8) = 0x1401a255d;
      FUN_1400384c0(param_1,puVar7,uVar1,uVar10);
      return puVar12;
    }
  }
LAB_1401a2585:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

