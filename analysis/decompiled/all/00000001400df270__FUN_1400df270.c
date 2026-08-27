// Function: FUN_1400df270
// Addr: 1400df270
// Size: 522 bytes


void FUN_1400df270(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  if (param_4 != 0) {
    puVar7 = auStack_68;
    lVar1 = param_1[1];
    if ((ulonglong)(param_1[2] - lVar1) < param_4) {
      uVar8 = 0x7fffffffffffffff;
      lVar9 = *param_1;
      lVar10 = lVar1 - lVar9;
      if (0x7fffffffffffffffU - lVar10 < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar6 = param_1[2] - lVar9;
      uVar4 = lVar10 + param_4;
      uVar5 = uVar6 >> 1;
      if (uVar6 <= 0x7fffffffffffffff - uVar5) goto LAB_1400df31b;
      uVar5 = 0x8000000000000026;
      puVar7 = auStack_68;
      while( true ) {
        *(undefined8 *)(puVar7 + -8) = 0x1400df30f;
        lVar3 = FUN_14028af20(uVar5);
        if (lVar3 != 0) break;
        uVar5 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        puVar7 = puVar7 + 8;
LAB_1400df31b:
        uVar8 = uVar4;
        if (uVar4 <= uVar5 + uVar6) {
          uVar8 = uVar5 + uVar6;
        }
        if (uVar8 == 0) {
          uVar4 = 0;
          goto LAB_1400df363;
        }
        if (uVar8 < 0x1000) {
          *(undefined8 *)(puVar7 + -8) = 0x1400df360;
          uVar4 = FUN_14028af20(uVar8);
          goto LAB_1400df363;
        }
        uVar5 = uVar8 + 0x27;
        if (uVar5 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar7 + -8) = &UNK_1400df47b;
          FUN_140017370();
        }
      }
      uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar4 - 8) = lVar3;
LAB_1400df363:
      *(longlong *)(puVar7 + 0x70) = param_2 - lVar9;
      lVar3 = (param_2 - lVar9) + uVar4;
      *(longlong *)(puVar7 + 0x78) = lVar3;
      *(undefined8 *)(puVar7 + -8) = 0x1400df389;
      FUN_1404210f0(lVar3,*(undefined8 *)(puVar7 + 0x80),param_4);
      if ((param_4 != 1) || (uVar5 = uVar4, param_2 != lVar1)) {
        *(undefined8 *)(puVar7 + -8) = 0x1400df3af;
        FUN_1404210f0(uVar4,lVar9,*(undefined8 *)(puVar7 + 0x70));
        lVar10 = lVar1 - param_2;
        uVar5 = *(longlong *)(puVar7 + 0x78) + param_4;
        lVar9 = param_2;
      }
      *(undefined8 *)(puVar7 + -8) = 0x1400df3c5;
      FUN_1404210f0(uVar5,lVar9,lVar10);
      *(undefined8 *)(puVar7 + -8) = 0x1400df3db;
      FUN_14005b010(param_1,uVar4,*(undefined8 *)(puVar7 + 0x88),uVar8);
    }
    else {
      uVar8 = lVar1 - param_2;
      if (param_4 < uVar8) {
        FUN_1404210f0(lVar1,lVar1 - param_4,param_4);
        lVar9 = (lVar1 - param_4) - param_2;
        param_1[1] = param_4 + lVar1;
        FUN_1404210f0(lVar1 - lVar9,param_2,lVar9);
        FUN_1404210f0(param_2,param_3,param_4);
      }
      else {
        FUN_1404210f0(param_2 + param_4,param_2,uVar8);
        param_1[1] = uVar8 + param_2 + param_4;
        FUN_1404210f0(param_2,param_3,param_4);
      }
    }
  }
  return;
}

