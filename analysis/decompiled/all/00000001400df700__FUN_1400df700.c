// Function: FUN_1400df700
// Addr: 1400df700
// Size: 561 bytes


undefined8 FUN_1400df700(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [72];
  
  puVar6 = auStack_78;
  puVar7 = auStack_78;
  lVar8 = *param_1;
  lVar5 = (param_1[1] - lVar8) / 0x28;
  if (lVar5 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar9 = (param_1[2] - lVar8) / 0x28;
  if (uVar9 <= 0x666666666666666 - (uVar9 >> 1)) {
    uVar1 = lVar5 + 1;
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar10 = uVar1;
    if (uVar1 <= uVar9) {
      uVar10 = uVar9;
    }
    if (uVar10 < 0x666666666666667) {
      uVar9 = uVar10 * 0x28;
      if (uVar9 == 0) {
        uVar9 = 0;
        puVar7 = auStack_78;
      }
      else if (uVar9 < 0x1000) {
        uVar9 = FUN_14028af20();
      }
      else {
        if (uVar9 + 0x27 <= uVar9) goto LAB_1400df92d;
        lVar5 = FUN_14028af20(uVar9 + 0x27);
        if (lVar5 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar5 = (*pcVar3)(5);
          puVar6 = auStack_70;
        }
        uVar9 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar9 - 8) = lVar5;
        puVar7 = puVar6;
      }
      *(longlong **)(puVar7 + 0x20) = param_1;
      *(ulonglong *)(puVar7 + 0x30) = uVar10;
      lVar5 = uVar9 + ((param_2 - lVar8) / 0x28) * 0x28;
      lVar8 = lVar5 + 0x28;
      *(longlong *)(puVar7 + 0x80) = lVar5;
      *(longlong *)(puVar7 + 0x40) = lVar8;
      *(undefined8 *)(puVar7 + -8) = 0x1400df849;
      FUN_1400e6b50(lVar5,param_3);
      lVar2 = param_1[1];
      *(longlong *)(puVar7 + 0x38) = lVar5;
      lVar5 = *param_1;
      uVar4 = uVar9;
      if (param_2 == lVar2) {
        for (; lVar5 != lVar2; lVar5 = lVar5 + 0x28) {
          *(undefined8 *)(puVar7 + -8) = 0x1400df86f;
          FUN_1400e6b50(uVar4,lVar5);
          uVar4 = uVar4 + 0x28;
        }
      }
      else {
        for (; lVar5 != param_2; lVar5 = lVar5 + 0x28) {
          *(undefined8 *)(puVar7 + -8) = 0x1400df89b;
          FUN_1400e6b50(uVar4,lVar5);
          uVar4 = uVar4 + 0x28;
        }
        lVar5 = param_1[1];
        *(ulonglong *)(puVar7 + 0x38) = uVar9;
        for (; param_2 != lVar5; param_2 = param_2 + 0x28) {
          *(undefined8 *)(puVar7 + -8) = 0x1400df8cb;
          FUN_1400e6b50(lVar8,param_2);
          lVar8 = lVar8 + 0x28;
        }
      }
      *(undefined8 *)(puVar7 + 0x28) = 0;
      *(undefined8 *)(puVar7 + -8) = 0x1400df8f2;
      FUN_1400e4660(param_1,uVar9,uVar1,uVar10);
      *(undefined8 *)(puVar7 + -8) = 0x1400df8fc;
      FUN_1400e45b0(puVar7 + 0x20);
      return *(undefined8 *)(puVar7 + 0x80);
    }
  }
LAB_1400df92d:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

