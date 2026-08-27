// Function: FUN_1404149f0
// Addr: 1404149f0
// Size: 813 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1404149f0(longlong param_1,uint param_2,uint param_3,undefined1 *param_4,uint param_5,
                 int *param_6,int param_7,uint param_8)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 auStack_898 [32];
  longlong local_878;
  longlong local_870;
  int local_868 [4];
  undefined1 local_858;
  undefined1 local_857;
  undefined4 local_856;
  undefined1 local_852 [1018];
  undefined1 local_458;
  undefined1 local_457 [1023];
  ulonglong local_58 [3];
  
  local_58[0] = DAT_1404dc040 ^ (ulonglong)auStack_898;
  uVar8 = param_2;
  if (param_2 <= param_3) {
    uVar8 = param_3;
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar8 <= *(uint *)(param_1 + 0x60)) {
    uVar2 = uVar8;
  }
  uVar8 = uVar2;
  if (param_2 <= uVar2) {
    uVar8 = param_2;
  }
  local_878 = CONCAT44(local_878._4_4_,uVar8);
  piVar10 = local_868;
  if (param_6 != (int *)0x0) {
    piVar10 = param_6;
  }
  *piVar10 = 0;
  if (param_5 != 0) {
    *param_4 = 0;
  }
  if ((uVar8 == uVar2) || (param_7 == 0)) {
LAB_140414ce3:
    iVar3 = 0;
  }
  else {
    uVar5 = uVar2;
    if (param_7 == 0x4a534f4e) {
      local_870 = *(longlong *)(param_1 + 0x70);
      *piVar10 = 0;
      if (uVar8 < uVar2) {
        while( true ) {
          local_857 = 0x7b;
          local_858 = 0x5b;
          if (uVar8 != 0) {
            local_858 = 0x2c;
          }
          local_856 = DAT_14047078c;
          local_852[0] = DAT_140470790;
          lVar1 = local_870 + (ulonglong)uVar8 * 0x14;
          iVar3 = FUN_1400899e0(local_852,0x3fa,&DAT_14047077c,
                                *(undefined4 *)(local_870 + (ulonglong)uVar8 * 0x14));
          if (iVar3 < 1) {
            iVar3 = 0;
          }
          lVar9 = (longlong)iVar3;
          puVar6 = local_852 + lVar9;
          if ((param_8 & 1) == 0) {
            iVar3 = FUN_1400899e0(puVar6,0x3fa - lVar9,",\"cl\":%u",*(undefined4 *)(lVar1 + 8));
            if (iVar3 < 1) {
              iVar3 = 0;
            }
            puVar6 = local_852 + iVar3 + lVar9;
          }
          *puVar6 = 0x7d;
          puVar6 = puVar6 + 1;
          if (uVar8 == uVar2 - 1) {
            *puVar6 = 0x5d;
            puVar6 = (undefined1 *)(ulonglong)((int)puVar6 + 1);
          }
          uVar5 = (int)puVar6 - (int)&local_858;
          if (param_5 <= uVar5) break;
          if (uVar5 != 0) {
            FUN_1404210f0(param_4,&local_858,(ulonglong)uVar5);
          }
          *piVar10 = *piVar10 + uVar5;
          param_4 = param_4 + uVar5;
          param_5 = param_5 - uVar5;
          uVar8 = uVar8 + 1;
          *param_4 = 0;
          if (uVar2 <= uVar8) {
            return uVar2 - (int)local_878;
          }
        }
        return uVar8 - (int)local_878;
      }
    }
    else {
      if (param_7 != 0x54455854) goto LAB_140414ce3;
      local_878 = *(longlong *)(param_1 + 0x70);
      *piVar10 = 0;
      if (uVar8 < uVar2) {
        uVar7 = uVar8;
        do {
          local_458 = 0x3c;
          if (uVar7 != 0) {
            local_458 = 0x7c;
          }
          lVar1 = local_878 + (ulonglong)uVar7 * 0x14;
          iVar3 = FUN_1400899e0(local_457,0x3ff,"U+%04X",
                                *(undefined4 *)(local_878 + (ulonglong)uVar7 * 0x14));
          if (iVar3 < 1) {
            iVar3 = 0;
          }
          puVar6 = local_457 + iVar3;
          if ((param_8 & 1) == 0) {
            iVar3 = FUN_1400899e0(puVar6,(longlong)local_58 - (longlong)puVar6,&DAT_140470794,
                                  *(undefined4 *)(lVar1 + 8));
            if (iVar3 < 1) {
              iVar3 = 0;
            }
            puVar6 = puVar6 + iVar3;
          }
          if (uVar7 == uVar2 - 1) {
            *puVar6 = 0x3e;
            puVar6 = puVar6 + 1;
          }
          uVar4 = (int)puVar6 - (int)&local_458;
          uVar5 = uVar7;
          if (param_5 <= uVar4) break;
          if (uVar4 != 0) {
            FUN_1404210f0(param_4,&local_458,(ulonglong)uVar4);
          }
          *piVar10 = *piVar10 + uVar4;
          param_4 = param_4 + uVar4;
          param_5 = param_5 - uVar4;
          uVar7 = uVar7 + 1;
          *param_4 = 0;
          uVar5 = uVar2;
        } while (uVar7 < uVar2);
      }
    }
    iVar3 = uVar5 - uVar8;
  }
  return iVar3;
}

