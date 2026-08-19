// Function: FUN_140227330
// Addr: 140227330
// Size: 32 bytes


void FUN_140227330(longlong param_1,undefined8 param_2,uint *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x2d8);
  if (((lVar4 != 0) && (*(longlong **)(param_1 + 0x2e8) != (longlong *)0x0)) &&
     (**(longlong **)(param_1 + 0x2e8) != 0)) {
    uVar3 = *param_3;
    if ((uVar3 >> 9 & 1) == 0) {
      if ((uVar3 & 8) == 0) {
        if (((uVar3 >> 0xb & 1) != 0) && (*param_4 != 0)) {
          plVar8 = *(longlong **)(lVar4 + 0x78);
          while (plVar1 = plVar8, plVar1 != *(longlong **)(lVar4 + 0x80)) {
            plVar8 = plVar1 + 1;
            if (*plVar1 == *param_4) {
              FUN_14019e210(*(longlong *)(param_1 + 200) + 0x1478,plVar1);
                    /* WARNING: Subroutine does not return */
              FUN_1404211c0(plVar1,plVar8,
                            *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x80) - (longlong)plVar8)
              ;
            }
          }
        }
      }
      else {
        uVar7 = (ulonglong)*(int *)*param_4;
        if ((-1 < *(int *)*param_4) &&
           (uVar7 < (ulonglong)(*(longlong *)(lVar4 + 0x80) - *(longlong *)(lVar4 + 0x78) >> 3))) {
          FUN_14019e210(*(longlong *)(param_1 + 200) + 0x1478,
                        *(longlong *)(lVar4 + 0x78) + uVar7 * 8);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x78) + uVar7 * 8;
          lVar4 = lVar2 + 8;
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(lVar2,lVar4,*(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x80) - lVar4);
        }
      }
    }
    else {
      pcVar5 = (char *)*param_4;
      if ((*pcVar5 != '\0') &&
         (plVar8 = *(longlong **)(lVar4 + 0x78), plVar8 != *(longlong **)(lVar4 + 0x80))) {
        do {
          plVar1 = plVar8 + 1;
          cVar6 = FUN_14000d0e0(*plVar8 + 0xd8,pcVar5);
          if (cVar6 != '\0') {
            FUN_14019e210(*(longlong *)(param_1 + 200) + 0x1478,plVar8);
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(plVar8,plVar1,
                          *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x80) - (longlong)plVar1);
          }
          plVar8 = plVar1;
        } while (plVar1 != *(longlong **)(*(longlong *)(param_1 + 0x2d8) + 0x80));
      }
    }
  }
  return;
}

