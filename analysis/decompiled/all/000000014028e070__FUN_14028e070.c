// Function: FUN_14028e070
// Addr: 14028e070
// Size: 465 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014028e197) */
/* WARNING: Removing unreachable block (ram,0x00014028e19a) */
/* WARNING: Removing unreachable block (ram,0x00014028e206) */
/* WARNING: Removing unreachable block (ram,0x00014028e209) */

undefined1 (*) [16]
FUN_14028e070(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
             ulonglong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  undefined1 (*pauVar10) [16];
  bool bVar11;
  undefined1 uVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_88;
  pauVar10 = (undefined1 (*) [16])(*param_1 + (param_2 & 0xfffffffffffffff0));
  uVar6 = (uint)param_4;
  if (param_4 < 0x11) {
    FUN_1404210f0(local_68,param_3,param_4);
    auVar1 = local_68;
    for (; param_1 != pauVar10; param_1 = param_1 + 1) {
      iVar2 = pcmpestri(local_68,*param_1,0,uVar6,0x10);
      if (param_1 < pauVar10) goto LAB_14028e11f;
    }
    bVar11 = false;
    uVar9 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      FUN_1404210f0(local_68,param_1,uVar9);
      iVar2 = pcmpestri(auVar1,local_68,0,uVar6,uVar9);
      if (bVar11) {
LAB_14028e11f:
        param_1 = (undefined1 (*) [16])(*param_1 + iVar2);
      }
      else {
        param_1 = (undefined1 (*) [16])(*param_1 + uVar9);
      }
    }
  }
  else {
    uVar6 = uVar6 & 0xf;
    pauVar5 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    FUN_1404210f0(local_68,pauVar5,uVar6);
    auVar1 = local_68;
    for (; param_1 != pauVar10; param_1 = param_1 + 1) {
      bVar11 = param_1 < pauVar10;
      iVar2 = 0x10;
      pauVar8 = param_3;
      do {
        iVar3 = pcmpestri(*pauVar8,*param_1,0,0x10,0x10);
        if ((bVar11) && (iVar3 < iVar2)) {
          iVar2 = iVar3;
        }
        pauVar8 = pauVar8 + 1;
        bVar11 = pauVar8 < pauVar5;
      } while (pauVar8 != pauVar5);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(local_68,*param_1,0,uVar6,0x10);
      }
      if (iVar2 != 0x10) {
        return (undefined1 (*) [16])(*param_1 + iVar2);
      }
    }
    uVar12 = 0;
    uVar9 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      FUN_1404210f0(local_68,param_1,uVar9);
      uVar7 = uVar9;
      do {
        uVar4 = pcmpestri(*param_3,local_68,0,0x10,uVar9);
        if (((bool)uVar12) && ((int)uVar4 < (int)uVar7)) {
          uVar7 = uVar4;
        }
        param_3 = param_3 + 1;
        uVar12 = param_3 < pauVar5;
      } while (param_3 != pauVar5);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(auVar1,local_68,0,uVar6,uVar9);
      }
      param_1 = (undefined1 (*) [16])(*param_1 + (int)uVar7);
    }
  }
  return param_1;
}

