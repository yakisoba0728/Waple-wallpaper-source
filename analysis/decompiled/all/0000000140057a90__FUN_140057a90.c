// Function: FUN_140057a90
// Addr: 140057a90
// Size: 603 bytes


undefined8 FUN_140057a90(ulonglong param_1,int param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  lVar6 = DAT_1404e8dc8;
  plVar4 = DAT_1404e8db8;
  if (param_2 == 1) {
    (*DAT_140426968)(param_1,0xffffffeb,*param_4);
    uVar8 = DAT_1404e8de0 &
            ((((((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_1 >> 8 & 0xff) *
                  0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^ param_1 >> 0x18 & 0xff)
                * 0x100000001b3 ^ param_1 >> 0x20 & 0xff) * 0x100000001b3 ^ param_1 >> 0x28 & 0xff)
              * 0x100000001b3 ^ param_1 >> 0x30 & 0xff) * 0x100000001b3 ^ param_1 >> 0x38) *
            0x100000001b3;
    plVar4 = *(longlong **)(DAT_1404e8dc8 + 8 + uVar8 * 0x10);
    if (plVar4 == DAT_1404e8db8) {
LAB_140057d67:
      if (DAT_1404e8dc0 != 0xaaaaaaaaaaaaaaa) {
        uVar5 = func_0x00014028aff0(0x18);
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14028c3b0("unordered_map/set too long");
    }
    uVar2 = plVar4[2];
    while (param_1 != uVar2) {
      if (plVar4 == *(longlong **)(DAT_1404e8dc8 + uVar8 * 0x10)) goto LAB_140057d67;
      plVar4 = (longlong *)plVar4[1];
      uVar2 = plVar4[2];
    }
  }
  else if (param_2 == 2) {
    uVar8 = DAT_1404e8de0 &
            ((((((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_1 >> 8 & 0xff) *
                  0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^ param_1 >> 0x18 & 0xff)
                * 0x100000001b3 ^ param_1 >> 0x20 & 0xff) * 0x100000001b3 ^ param_1 >> 0x28 & 0xff)
              * 0x100000001b3 ^ param_1 >> 0x30 & 0xff) * 0x100000001b3 ^ param_1 >> 0x38) *
            0x100000001b3;
    plVar1 = *(longlong **)(DAT_1404e8dc8 + 8 + uVar8 * 0x10);
    if (plVar1 == DAT_1404e8db8) {
code_r0x000140057be7:
      plVar7 = (longlong *)0x0;
    }
    else {
      uVar2 = plVar1[2];
      plVar7 = plVar1;
      while (param_1 != uVar2) {
        if (plVar7 == *(longlong **)(DAT_1404e8dc8 + uVar8 * 0x10)) goto code_r0x000140057be7;
        plVar7 = (longlong *)plVar7[1];
        uVar2 = plVar7[2];
      }
    }
    if (plVar7 != (longlong *)0x0) {
      plVar3 = *(longlong **)(DAT_1404e8dc8 + uVar8 * 0x10);
      if (plVar1 == plVar7) {
        if (plVar3 == plVar7) {
          *(longlong **)(DAT_1404e8dc8 + uVar8 * 0x10) = DAT_1404e8db8;
          *(longlong **)(lVar6 + 8 + uVar8 * 0x10) = plVar4;
        }
        else {
          *(longlong *)(DAT_1404e8dc8 + 8 + uVar8 * 0x10) = plVar7[1];
        }
      }
      else if (plVar3 == plVar7) {
        *(longlong *)(DAT_1404e8dc8 + uVar8 * 0x10) = *plVar7;
      }
      lVar6 = *plVar7;
      DAT_1404e8dc0 = DAT_1404e8dc0 + -1;
      *(longlong *)plVar7[1] = lVar6;
      *(longlong *)(lVar6 + 8) = plVar7[1];
      func_0x00014028b040(plVar7,0x18);
    }
    lVar6 = (*DAT_140426948)(param_1,0xffffffeb);
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140017310(lVar6);
    }
    (*DAT_140426968)(param_1,0xffffffeb,0);
  }
  else if (param_2 == 0x46) {
    *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) & 0xfffffdfb;
    param_4[1] = 1;
  }
  else {
    if (param_2 != 0x113) {
LAB_140057b05:
      uVar5 = (*DAT_140426810)();
      return uVar5;
    }
    if (param_3 == 0) {
      (*DAT_140426950)(param_1,1,0,0,0,0,0x13);
    }
    else {
      if (param_3 != 1) goto LAB_140057b05;
      (*DAT_140426808)();
    }
  }
  return 0;
}

