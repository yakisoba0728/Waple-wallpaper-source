// Function: FUN_1403bd440
// Addr: 1403bd440
// Size: 737 bytes


void FUN_1403bd440(longlong param_1,char param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  ushort uVar8;
  int local_res8 [2];
  int local_res10 [2];
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14);
  local_res10[0] = 0;
  if (param_2 != '\0') {
    local_res10[0] = *(int *)(lVar3 + 0x28);
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x90) + 0x10);
    uVar7 = 0;
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(lVar5 + 0x10);
    }
    iVar6 = (**(code **)(*(longlong *)(lVar4 + 0x90) + 0x30))
                      (lVar4,*(undefined8 *)(lVar4 + 0x98),uVar2,local_res10,uVar7);
    if (iVar6 != 0) {
      *(int *)(*(longlong *)(lVar3 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14) =
           local_res10[0];
      goto LAB_1403bd708;
    }
  }
  iVar6 = FUN_1403bd190(param_1,param_2,uVar2);
  if (iVar6 != 0) {
    *(int *)(lVar3 + 0x5c) = *(int *)(lVar3 + 0x5c) + 1;
    return;
  }
  if (param_2 == '\0') {
    local_res10[0] = *(int *)(lVar3 + 0x28);
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x90) + 0x10);
    uVar7 = 0;
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(lVar5 + 0x10);
    }
    iVar6 = (**(code **)(*(longlong *)(lVar4 + 0x90) + 0x30))
                      (lVar4,*(undefined8 *)(lVar4 + 0x98),uVar2,local_res10,uVar7);
    if (iVar6 == 0) goto LAB_1403bd534;
LAB_1403bd6f5:
    uVar2 = *(uint *)(lVar3 + 0x5c);
    iVar6 = local_res10[0];
  }
  else {
LAB_1403bd534:
    if ((*(byte *)(*(longlong *)(lVar3 + 0x70) + 0x10 + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14) &
        0x1f) == 0x1d) {
      if (uVar2 < 0x2001) {
        if (uVar2 == 0x2000) {
switchD_1403bd5ab_caseD_2002:
          uVar8 = 0x200;
          goto LAB_1403bd5f8;
        }
        if ((uVar2 == 0x20) || (uVar2 == 0xa0)) {
          uVar8 = 0x1200;
          goto LAB_1403bd5f8;
        }
        goto LAB_1403bd6f5;
      }
      if (0x3000 < uVar2) goto switchD_1403bd5ab_caseD_200b;
      if (uVar2 == 0x3000) {
switchD_1403bd5ab_caseD_2001:
        uVar8 = 0x100;
      }
      else {
        switch(uVar2) {
        case 0x2001:
        case 0x2003:
          goto switchD_1403bd5ab_caseD_2001;
        case 0x2002:
          goto switchD_1403bd5ab_caseD_2002;
        case 0x2004:
          uVar8 = 0x300;
          break;
        case 0x2005:
          uVar8 = 0x400;
          break;
        case 0x2006:
          uVar8 = 0x600;
          break;
        case 0x2007:
          uVar8 = 0x1300;
          break;
        case 0x2008:
          uVar8 = 0x1400;
          break;
        case 0x2009:
          uVar8 = 0x500;
          break;
        case 0x200a:
          uVar8 = 0x1000;
          break;
        default:
          goto switchD_1403bd5ab_caseD_200b;
        case 0x202f:
          uVar8 = 0x1500;
          break;
        case 0x205f:
          uVar8 = 0x1100;
        }
      }
LAB_1403bd5f8:
      lVar4 = *(longlong *)(param_1 + 0x10);
      local_res8[0] = 0;
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x90) + 0x10);
      uVar7 = 0;
      if (lVar5 != 0) {
        uVar7 = *(undefined8 *)(lVar5 + 0x10);
      }
      iVar6 = (**(code **)(*(longlong *)(lVar4 + 0x90) + 0x30))
                        (lVar4,*(undefined8 *)(lVar4 + 0x98),0x20,local_res8,uVar7);
      if ((iVar6 != 0) || (local_res8[0] = *(int *)(lVar3 + 0x24), local_res8[0] != 0)) {
        uVar1 = *(ushort *)
                 (*(longlong *)(lVar3 + 0x70) + 0x10 + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14);
        if (((byte)uVar1 & 0x1f) == 0x1d) {
          *(ushort *)
           (*(longlong *)(lVar3 + 0x70) + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14 + 0x10) =
               uVar1 & 0xff | uVar8;
        }
        *(int *)(*(longlong *)(lVar3 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14) =
             local_res8[0];
        FUN_1403ecfd0(lVar3);
        *(uint *)(lVar3 + 0xd8) = *(uint *)(lVar3 + 0xd8) | 4;
        return;
      }
    }
switchD_1403bd5ab_caseD_200b:
    if (uVar2 != 0x2011) goto LAB_1403bd6f5;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_res8[0] = 0;
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x90) + 0x10);
    uVar7 = 0;
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(lVar5 + 0x10);
    }
    iVar6 = (**(code **)(*(longlong *)(lVar4 + 0x90) + 0x30))
                      (lVar4,*(undefined8 *)(lVar4 + 0x98),0x2010,local_res8,uVar7);
    if (iVar6 == 0) goto LAB_1403bd6f5;
    uVar2 = *(uint *)(lVar3 + 0x5c);
    iVar6 = local_res8[0];
  }
  *(int *)(*(longlong *)(lVar3 + 0x70) + 0xc + (ulonglong)uVar2 * 0x14) = iVar6;
LAB_1403bd708:
  FUN_1403ecfd0(lVar3);
  return;
}

