// Function: FUN_140321280
// Addr: 140321280
// Size: 828 bytes


int FUN_140321280(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                 int param_5,uint param_6,undefined8 *param_7,longlong param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_res8;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  int local_54;
  undefined4 *local_50;
  undefined8 local_48;
  
  lVar2 = param_8;
  local_54 = param_6;
  local_res8 = 0;
  lVar1 = *(longlong *)(param_8 + 0x2f8);
  bVar11 = (param_6 - 0x3000 & 0xffffefff) == 0;
  param_6 = CONCAT31(param_6._1_3_,bVar11);
  uVar8 = 0x60;
  if (bVar11) {
    uVar8 = 0x201;
  }
  local_88 = (undefined8 *)*param_7;
  local_80 = 0;
  local_58 = 0;
  local_48 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = param_1;
  local_68 = FUN_1402f7ff0(*local_88,8,0,uVar8,0,&param_8);
  iVar5 = (int)param_8;
  if ((int)param_8 != 0) goto LAB_140321590;
  uStack_60 = local_68;
  local_58 = uVar8;
  FUN_1404217a0(param_1,0,0xb8);
  cVar4 = (char)param_6;
  param_1[8] = 0x32ff9c;
  param_1[10] = 2;
  uVar8 = 0x30;
  if ((char)param_6 != '\0') {
    uVar8 = 0x201;
  }
  param_1[0xb] = 0x10000;
  param_1[0x2d] = uVar8;
  param_1[0xe] = 0x10000;
  param_1[0x26] = 0x2210;
  *param_1 = 0xffff;
  param_1[1] = 0xffff;
  param_1[2] = 0xffff;
  param_1[3] = 0xffff;
  param_1[4] = 0xffff;
  param_1[5] = 0xffff;
  param_1[0x1f] = 0xffff;
  param_1[0x20] = 0xffff;
  param_1[0x21] = 0xffff;
  param_1[0x2a] = 0xffff;
  if (*(int *)(param_2 + 2) == 0) {
    iVar5 = FUN_1402f5c50(param_4,*(undefined4 *)(param_2 + 3));
    if ((iVar5 != 0) ||
       (iVar5 = FUN_1402f5150(param_4,*(undefined4 *)((longlong)param_2 + 0x1c),&local_res8),
       iVar5 != 0)) goto LAB_140321590;
    uVar6 = *(uint *)((longlong)param_2 + 0x1c);
LAB_140321439:
    if (local_res8 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (ulonglong)uVar6 + local_res8;
    }
    iVar5 = FUN_140320230(&local_88,local_res8,lVar10);
  }
  else {
    iVar5 = FUN_14031f2f0(param_2,param_3,&local_res8,&param_6);
    uVar6 = param_6;
    if (iVar5 == 0) goto LAB_140321439;
  }
  uVar9 = param_4;
  if (*(int *)(param_2 + 2) == 0) {
LAB_14032146d:
    FUN_1402f5c00(uVar9,&local_res8);
  }
  else if (param_2[5] == 0) {
    uVar9 = *param_2;
    goto LAB_14032146d;
  }
  if ((iVar5 == 0) && (param_1[0x20] == 0xffff)) {
    iVar5 = FUN_14031b260(param_7,param_1,0,0);
    if (iVar5 == 0) {
      if (cVar4 == '\0') {
        iVar7 = *(int *)(*(longlong *)(lVar2 + 0xd0) + 0x5c);
        if (iVar7 == -1) {
          lVar2 = *(longlong *)(lVar2 + 0x90);
          param_1[0xb0] = *(undefined4 *)(lVar2 + 0x60);
          iVar7 = *(int *)(lVar2 + 0x60);
          if (iVar7 != 0) {
            do {
              iVar7 = (**(code **)(lVar1 + 0x28))(iVar7);
              *(int *)(lVar2 + 0x60) = iVar7;
            } while (iVar7 < 0);
          }
        }
        else {
          param_1[0xb0] = iVar7;
          lVar10 = *(longlong *)(lVar2 + 0xd0);
          if (*(int *)(lVar10 + 0x5c) != 0) {
            do {
              lVar3 = *(longlong *)(lVar2 + 0xd0);
              uVar8 = (**(code **)(lVar1 + 0x28))(*(undefined4 *)(lVar10 + 0x5c));
              *(undefined4 *)(lVar3 + 0x5c) = uVar8;
              lVar10 = *(longlong *)(lVar2 + 0xd0);
            } while (*(int *)(lVar10 + 0x5c) < 0);
          }
        }
        if (param_1[0xb0] == 0) {
          param_1[0xb0] = param_1[0x84];
        }
      }
      if (((param_1[0x85] != 0) &&
          (iVar5 = FUN_1402f5c50(param_4,param_1[0x1c] + param_1[0x85] + param_5), iVar5 == 0)) &&
         (iVar5 = FUN_14031f7c0(param_1 + 0xa2,param_4,1,cVar4), iVar5 == 0)) {
        iVar5 = FUN_14031f570(param_1 + 0xa2,param_1 + 0xae,0,0);
      }
    }
  }
LAB_140321590:
  FUN_1402f7f90(*local_88,local_68);
  return iVar5;
}

