// Function: FUN_140157730
// Addr: 140157730
// Size: 64 bytes


void FUN_140157730(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uStackX_8;
  longlong *plStackX_10;
  
  FUN_140177040(*(longlong *)(param_1 + 200) + 0x1708,param_1,0);
  puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x278);
  while( true ) {
    if (puVar1 == *(undefined8 **)(param_1 + 0x278)) {
      FUN_14015a460(param_1 + 0x270);
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
        lVar7 = *(longlong *)(param_1 + 0x30);
        lVar3 = *(longlong *)(param_1 + 0x38);
        if (lVar7 != lVar3) {
          do {
            plVar4 = *(longlong **)(lVar7 + 0x38);
            uStackX_8 = CONCAT71(uStackX_8._1_7_,1);
            plStackX_10 = puVar2 + 6;
            if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_14028c390();
            }
            (**(code **)(*plVar4 + 0x10))(plVar4,&plStackX_10,&uStackX_8);
            lVar7 = lVar7 + 0x40;
          } while (lVar7 != lVar3);
        }
      }
      if (*(ulonglong *)(param_1 + 0x58) != 0) {
        plVar4 = *(longlong **)(param_1 + 0x50);
        if (*(ulonglong *)(param_1 + 0x58) < *(ulonglong *)(param_1 + 0x80) >> 3) {
          plVar5 = (longlong *)*plVar4;
          if (plVar5 != plVar4) {
            plStackX_10 = *(longlong **)(param_1 + 0x60);
            uStackX_8 = plVar5[1];
            uVar6 = 0;
            if (plVar5[4] != 0) {
              do {
                uVar6 = uVar6 + 1;
              } while (uVar6 < (ulonglong)plVar5[4]);
            }
                    /* WARNING: Subroutine does not return */
            FUN_140017310(plVar5 + 0xd);
          }
        }
        else {
          *(undefined8 *)plVar4[1] = 0;
          if (*plVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140017310(*plVar4 + 0x68);
          }
          *(undefined8 *)*(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x50);
          *(longlong *)(*(longlong *)(param_1 + 0x50) + 8) = *(longlong *)(param_1 + 0x50);
          *(undefined8 *)(param_1 + 0x58) = 0;
          uStackX_8 = *(undefined8 *)(param_1 + 0x50);
          func_0x00014000f8a0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                              &uStackX_8);
        }
      }
      return;
    }
    if (*(longlong *)(puVar1[3] + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140017310(*(longlong *)(puVar1[3] + 8) + 0x38);
    }
    if (puVar1[3] != 0) break;
    puVar1 = (undefined8 *)*puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017310(puVar1[3] + 0x10);
}

