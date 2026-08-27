// Function: FUN_140082a50
// Addr: 140082a50
// Size: 517 bytes


void FUN_140082a50(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  puVar7 = auStack_68;
  lVar11 = *param_1;
  uVar9 = param_5 - param_4;
  puVar8 = auStack_68;
  if (uVar9 != 0) {
    lVar1 = param_1[1];
    if ((ulonglong)(param_1[2] - lVar1) < uVar9) {
      lVar12 = lVar1 - lVar11;
      uVar10 = 0x7fffffffffffffff;
      if (0x7fffffffffffffffU - lVar12 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar5 = param_1[2] - lVar11;
      uVar4 = lVar12 + uVar9;
      uVar6 = uVar5 >> 1;
      if (uVar5 <= 0x7fffffffffffffff - uVar6) goto LAB_140082b03;
      uVar5 = 0x8000000000000026;
      puVar7 = auStack_68;
      while( true ) {
        *(undefined8 *)(puVar7 + -8) = 0x140082af7;
        lVar3 = FUN_14028af20(uVar5);
        if (lVar3 != 0) break;
        uVar5 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        puVar7 = puVar7 + 8;
LAB_140082b03:
        uVar10 = uVar4;
        if (uVar4 <= uVar6 + uVar5) {
          uVar10 = uVar6 + uVar5;
        }
        if (uVar10 == 0) {
          uVar4 = 0;
          goto LAB_140082b4b;
        }
        if (uVar10 < 0x1000) {
          *(undefined8 *)(puVar7 + -8) = 0x140082b48;
          uVar4 = FUN_14028af20(uVar10);
          goto LAB_140082b4b;
        }
        uVar5 = uVar10 + 0x27;
        if (uVar5 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar7 + -8) = &UNK_140082c56;
          FUN_140017370();
        }
      }
      uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar4 - 8) = lVar3;
LAB_140082b4b:
      *(ulonglong *)(puVar7 + 0x90) = *(longlong *)(puVar7 + 0x70) + uVar4;
      *(undefined8 *)(puVar7 + -8) = 0x140082b6e;
      FUN_1404210f0(*(longlong *)(puVar7 + 0x70) + uVar4,*(undefined8 *)(puVar7 + 0x88),uVar9);
      if ((uVar9 != 1) || (uVar5 = uVar4, param_3 != lVar1)) {
        *(undefined8 *)(puVar7 + -8) = 0x140082b94;
        FUN_1404210f0(uVar4,lVar11,*(undefined8 *)(puVar7 + 0x70));
        lVar12 = lVar1 - param_3;
        uVar5 = *(longlong *)(puVar7 + 0x90) + uVar9;
        lVar11 = param_3;
      }
      *(undefined8 *)(puVar7 + -8) = 0x140082bad;
      FUN_1404210f0(uVar5,lVar11,lVar12);
      *(undefined8 *)(puVar7 + -8) = 0x140082bc3;
      FUN_14005b010(param_1,uVar4,*(undefined8 *)(puVar7 + 0x80),uVar10);
      puVar8 = puVar7;
    }
    else {
      uVar10 = lVar1 - param_3;
      if (uVar9 < uVar10) {
        FUN_1404210f0(lVar1,lVar1 - uVar9,uVar9);
        lVar11 = (lVar1 - uVar9) - param_3;
        param_1[1] = uVar9 + lVar1;
        FUN_1404210f0(lVar1 - lVar11,param_3,lVar11);
      }
      else {
        FUN_1404210f0(param_3 + uVar9,param_3,uVar10);
        param_1[1] = uVar10 + param_3 + uVar9;
      }
      FUN_1404210f0(param_3,param_4,uVar9);
      puVar8 = auStack_68;
    }
  }
  **(longlong **)(puVar8 + 0x78) = *(longlong *)(puVar8 + 0x70) + *param_1;
  return;
}

