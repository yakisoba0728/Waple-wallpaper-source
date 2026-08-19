// Function: FUN_1402f4400
// Addr: 1402f4400
// Size: 380 bytes


int FUN_1402f4400(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined1 local_38 [8];
  undefined8 local_30;
  
  if ((*(uint *)(*(longlong *)(param_2 + 0xf0) + 0x30) & 0x100000) != 0) {
    lVar8 = *(longlong *)(param_2 + 8);
    local_30 = 0;
    if ((((lVar8 != 0) && (uVar1 = *(uint *)(param_2 + 0x18), uVar1 < *(uint *)(lVar8 + 0x10))) &&
        ((*(byte *)(lVar8 + 8) & 8) != 0)) &&
       ((pcVar2 = *(code **)(*(longlong *)(lVar8 + 0x2d0) + 0x118), pcVar2 != (code *)0x0 &&
        (cVar3 = (*pcVar2)(lVar8,uVar1,local_res20,local_res10,local_38), cVar3 != '\0')))) {
      iVar4 = FUN_1402f22f0(lVar8,0);
      if (iVar4 == 0) {
        lVar7 = *(longlong *)(lVar8 + 0x2d0);
        while (iVar4 = FUN_1402f13a0(lVar8,local_res20[0],
                                     *(uint *)(*(longlong *)(param_2 + 0xf0) + 0x30) & 0xffefffff |
                                     4), iVar4 == 0) {
          iVar4 = (**(code **)(lVar7 + 0x148))
                            (lVar8,local_res10[0],param_2,*(undefined8 *)(lVar8 + 0x78));
          if (iVar4 != 0) break;
          if (((*(uint *)(lVar8 + 0x10) <= uVar1) || ((*(byte *)(lVar8 + 8) & 8) == 0)) ||
             ((pcVar2 = *(code **)(*(longlong *)(lVar8 + 0x2d0) + 0x118), pcVar2 == (code *)0x0 ||
              (cVar3 = (*pcVar2)(lVar8,uVar1,local_res20,local_res10,local_38), cVar3 == '\0')))) {
            *(undefined4 *)(param_2 + 0x60) = 0x62697473;
            func_0x0001402efc30(*(undefined8 *)(lVar8 + 0x78));
            return 0;
          }
        }
        func_0x0001402efc30(*(undefined8 *)(lVar8 + 0x78));
      }
      *(undefined4 *)(param_2 + 0x60) = 0x6f75746c;
    }
  }
  if (*(int *)(param_2 + 0x60) == 0x6f75746c) {
    lVar8 = *(longlong *)(param_1 + 0x128);
    lVar7 = *(longlong *)(param_1 + 0x118);
  }
  else {
    lVar8 = 0;
    lVar7 = 0;
    if (param_1 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x118);
      while( true ) {
        lVar8 = 0;
        lVar7 = 0;
        if ((lVar6 == 0) ||
           (lVar8 = *(longlong *)(lVar6 + 0x10), lVar7 = lVar6,
           *(int *)(lVar8 + 0x20) == *(int *)(param_2 + 0x60))) break;
        lVar6 = *(longlong *)(lVar6 + 8);
      }
    }
  }
  iVar4 = 0x13;
  if (lVar8 != 0) {
    do {
      iVar4 = (**(code **)(lVar8 + 0x70))(lVar8,param_2,param_3,0);
      if (iVar4 == 0) break;
      if ((char)iVar4 != '\x13') {
        return iVar4;
      }
      lVar8 = 0;
      if (param_1 != 0) {
        if (lVar7 == 0) {
          lVar6 = *(longlong *)(param_1 + 0x118);
        }
        else {
          lVar6 = *(longlong *)(lVar7 + 8);
        }
        lVar7 = 0;
        if (lVar6 != 0) {
          while (lVar8 = *(longlong *)(lVar6 + 0x10), lVar7 = lVar6,
                *(int *)(lVar8 + 0x20) != *(int *)(param_2 + 0x60)) {
            lVar6 = *(longlong *)(lVar6 + 8);
            if (lVar6 == 0) goto code_r0x0001402f4622;
          }
        }
      }
    } while (lVar8 != 0);
    if ((char)iVar4 != '\x13') {
      return iVar4;
    }
  }
code_r0x0001402f4622:
  iVar5 = 0;
  if (*(int *)(param_2 + 0x60) != 0x62697473) {
    iVar5 = iVar4;
  }
  return iVar5;
}

