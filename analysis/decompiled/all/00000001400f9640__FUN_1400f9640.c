// Function: FUN_1400f9640
// Addr: 1400f9640
// Size: 600 bytes


undefined8 FUN_1400f9640(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  undefined8 unaff_R14;
  ulonglong uVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [72];
  
  lVar2 = DAT_1404e91d0;
  puVar6 = auStack_78;
  puVar7 = auStack_78;
  lVar8 = (DAT_1404e91d8 - DAT_1404e91d0) / 0x28;
  if (lVar8 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar10 = (DAT_1404e91e0 - DAT_1404e91d0) / 0x28;
  if (uVar10 <= 0x666666666666666 - (uVar10 >> 1)) {
    uVar1 = lVar8 + 1;
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar9 = uVar1;
    if (uVar1 <= uVar10) {
      uVar9 = uVar10;
    }
    if (uVar9 < 0x666666666666667) {
      uVar10 = uVar9 * 0x28;
      if (uVar10 == 0) {
        uVar10 = 0;
        puVar7 = auStack_78;
      }
      else if (uVar10 < 0x1000) {
        uVar10 = FUN_14028af20();
      }
      else {
        if (uVar10 + 0x27 <= uVar10) goto LAB_1400f9894;
        lVar8 = FUN_14028af20(uVar10 + 0x27);
        if (lVar8 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar8 = (*pcVar3)(5);
          puVar6 = auStack_70;
        }
        uVar10 = lVar8 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar10 - 8) = lVar8;
        puVar7 = puVar6;
      }
      *(undefined8 *)(puVar7 + 0x98) = unaff_R14;
      *(longlong **)(puVar7 + 0x20) = &DAT_1404e91d0;
      *(ulonglong *)(puVar7 + 0x30) = uVar9;
      lVar2 = uVar10 + ((param_2 - lVar2) / 0x28) * 0x28;
      lVar8 = lVar2 + 0x28;
      *(longlong *)(puVar7 + 0x80) = lVar2;
      *(longlong *)(puVar7 + 0x40) = lVar8;
      *(undefined8 *)(puVar7 + -8) = 0x1400f97a1;
      FUN_1400de280(lVar2,param_3);
      lVar5 = DAT_1404e91d8;
      *(longlong *)(puVar7 + 0x38) = lVar2;
      uVar4 = uVar10;
      lVar2 = DAT_1404e91d0;
      if (param_2 == DAT_1404e91d8) {
        for (; lVar2 != lVar5; lVar2 = lVar2 + 0x28) {
          *(undefined8 *)(puVar7 + -8) = 0x1400f97cc;
          FUN_1400e6b50(uVar4,lVar2);
          uVar4 = uVar4 + 0x28;
        }
      }
      else {
        for (; DAT_1404e91d8 = lVar5, lVar2 != param_2; lVar2 = lVar2 + 0x28) {
          *(undefined8 *)(puVar7 + -8) = 0x1400f97fb;
          FUN_1400e6b50(uVar4,lVar2);
          uVar4 = uVar4 + 0x28;
          lVar5 = DAT_1404e91d8;
        }
        *(ulonglong *)(puVar7 + 0x38) = uVar10;
        for (; param_2 != lVar5; param_2 = param_2 + 0x28) {
          *(undefined8 *)(puVar7 + -8) = 0x1400f982b;
          FUN_1400e6b50(lVar8,param_2);
          lVar8 = lVar8 + 0x28;
        }
      }
      *(undefined8 *)(puVar7 + 0x28) = 0;
      *(undefined8 *)(puVar7 + -8) = 0x1400f9856;
      FUN_1400e4660(&DAT_1404e91d0,uVar10,uVar1,uVar9);
      *(undefined8 *)(puVar7 + -8) = 0x1400f9860;
      FUN_1400e45b0(puVar7 + 0x20);
      return *(undefined8 *)(puVar7 + 0x80);
    }
  }
LAB_1400f9894:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

