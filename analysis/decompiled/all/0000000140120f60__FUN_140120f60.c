// Function: FUN_140120f60
// Addr: 140120f60
// Size: 1714 bytes


/* WARNING: Removing unreachable block (ram,0x0001401215ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140120f60(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  undefined4 local_res8 [2];
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  longlong *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  int iStack_14c;
  longlong local_148 [2];
  uint local_138 [14];
  longlong alStack_100 [9];
  longlong local_b8;
  undefined **local_98 [12];
  
  plVar10 = (longlong *)0x0;
  puVar7 = (undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x58)) {
    puVar7 = (undefined8 *)*puVar7;
  }
  *(undefined2 *)puVar7 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  local_170 = (longlong *)0x0;
  local_188 = (longlong *)0x0;
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  plVar8 = (longlong *)0x0;
  plVar9 = plVar10;
  if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
LAB_140121033:
    plVar5 = *(longlong **)(param_1 + 0x98);
    if (plVar5 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar5 + 0x60))(plVar5);
      plVar8 = *(longlong **)(param_1 + 0x88);
      plVar9 = (longlong *)(ulonglong)uVar2;
      if ((int)uVar2 < 0) goto LAB_140121062;
    }
    if (plVar8 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar8 + 0x68))();
      plVar9 = (longlong *)(ulonglong)uVar2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 6;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x60))();
    plVar9 = (longlong *)(ulonglong)uVar2;
    if (-1 < (int)uVar2) {
      DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xb8),5000);
      if (DVar3 != 0x102) {
        plVar8 = *(longlong **)(param_1 + 0x88);
        goto LAB_140121033;
      }
      plVar9 = (longlong *)0x80004005;
    }
  }
LAB_140121062:
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  plVar8 = plVar10;
  if (-1 < (int)plVar9) {
    uVar2 = MFCreateMediaSession(0,param_1 + 0x88);
    if (((int)uVar2 < 0) ||
       (uVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))
                          (*(longlong **)(param_1 + 0x88),param_1 + 0x70,0), (int)uVar2 < 0)) {
      plVar9 = (longlong *)(ulonglong)uVar2;
      plVar8 = (longlong *)0x0;
      if ((int)uVar2 < 0) goto LAB_1401215bd;
    }
    else {
      *(undefined4 *)(param_1 + 0xb0) = 1;
    }
    plVar8 = plVar10;
    if (*(int *)(param_1 + 0xc4) == 1) {
      local_178 = 0;
      FUN_1400499e0(local_148,param_2,0x24);
      if (local_b8 != 0) {
        plVar9 = *(longlong **)((longlong)alStack_100 + (longlong)*(int *)(local_148[0] + 4));
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
        lVar4 = (longlong)*(int *)(local_148[0] + 4);
        if (*(uint *)((longlong)local_138 + lVar4) == 0) {
          if (*(longlong *)((longlong)alStack_100 + lVar4 + 8) != 0) {
            FUN_140012a00();
          }
        }
        else {
          uVar2 = 6;
          if (*(longlong *)((longlong)alStack_100 + lVar4) != 0) {
            uVar2 = 2;
          }
          FUN_140013b50((longlong)local_148 + lVar4,*(uint *)((longlong)local_138 + lVar4) | uVar2,0
                       );
        }
        if ((*(byte *)((longlong)local_138 + (longlong)*(int *)(local_148[0] + 4)) & 6) == 0) {
          plVar9 = *(longlong **)((longlong)alStack_100 + (longlong)*(int *)(local_148[0] + 4));
          (**(code **)(*plVar9 + 0x50))(plVar9,&local_168,0,1,1);
          plVar9 = *(longlong **)((longlong)alStack_100 + (longlong)*(int *)(local_148[0] + 4));
        }
        else {
          local_168 = _DAT_140492b10;
          uStack_160 = _UNK_140492b18;
          local_158 = 0;
          plVar9 = *(longlong **)((longlong)alStack_100 + (longlong)*(int *)(local_148[0] + 4));
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        iVar11 = (int)uStack_160 + (int)local_168;
        FUN_14004a920(local_148,0,0);
        local_178 = thunk_FUN_14028af20(iVar11);
        plVar9 = (longlong *)FUN_14004aa50(local_148,local_178,iVar11);
        if ((*(uint *)((longlong)*(int *)(*plVar9 + 4) + 0x10 + (longlong)plVar9) >> 2 & 1) == 0) {
          *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) =
               &PTR_LAB_140475df8;
          *(int *)((longlong)&iStack_14c + (longlong)*(int *)(local_148[0] + 4)) =
               *(int *)(local_148[0] + 4) + -0xb0;
          FUN_14004a790(local_138);
          *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) =
               &PTR_LAB_140474098;
          *(int *)((longlong)&iStack_14c + (longlong)*(int *)(local_148[0] + 4)) =
               *(int *)(local_148[0] + 4) + -0x18;
          local_98[0] = std::ios_base::vftable;
          FUN_14028c430(local_98);
          plVar5 = (longlong *)FUN_1402ecff0(0x88,&PTR_140426e20);
          lVar4 = local_178;
          plVar9 = DAT_1404e8f80;
          if (plVar5 != (longlong *)0x0) {
            *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
            *plVar5 = (longlong)&PTR_FUN_140488278;
            if (plVar9 != (longlong *)0x0) {
              (**(code **)(*plVar9 + 8))();
            }
            plVar5[3] = lVar4;
            *plVar5 = (longlong)&PTR_FUN_140488310;
            *(int *)(plVar5 + 4) = iVar11;
            plVar5[5] = 0;
            *(undefined4 *)(plVar5 + 6) = 0;
            plVar5[10] = 0;
            plVar5[0xb] = 0;
            plVar5[0xc] = 0;
            plVar5[0xd] = 0;
            plVar5[0xe] = 0;
            plVar5[0xf] = 0;
            plVar5[8] = 0;
            plVar5[9] = 0;
            *(undefined4 *)(plVar5 + 0x10) = 0xffffffff;
            *(undefined4 *)(plVar5 + 7) = 0x102;
            *(undefined4 *)((longlong)plVar5 + 0x84) = 0;
            puVar6 = _aligned_malloc(4,0x20);
            plVar5[2] = (longlong)puVar6;
            *puVar6 = 0;
            LOCK();
            *(int *)plVar5[2] = *(int *)plVar5[2] + 1;
            UNLOCK();
            plVar8 = plVar5;
          }
          goto LAB_1401213a1;
        }
        thunk_FUN_14028af80(&local_178);
      }
      *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) =
           &PTR_LAB_140475df8;
      *(int *)((longlong)&iStack_14c + (longlong)*(int *)(local_148[0] + 4)) =
           *(int *)(local_148[0] + 4) + -0xb0;
      FUN_14004a790(local_138);
      *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) =
           &PTR_LAB_140474098;
      *(int *)((longlong)&iStack_14c + (longlong)*(int *)(local_148[0] + 4)) =
           *(int *)(local_148[0] + 4) + -0x18;
      local_98[0] = std::ios_base::vftable;
      FUN_14028c430(local_98);
    }
    else {
LAB_1401213a1:
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
    local_res8[0] = 2;
    local_res18 = (longlong *)0x0;
    local_res20 = (longlong *)0x0;
    uVar2 = MFCreateSourceResolver(&local_res18);
    plVar9 = (longlong *)(ulonglong)uVar2;
    if (-1 < (int)uVar2) {
      if (plVar8 == (longlong *)0x0) {
        uVar2 = (**(code **)(*local_res18 + 0x18))(local_res18,param_2,1,0,local_res8,&local_res20);
        plVar9 = (longlong *)(ulonglong)uVar2;
      }
      else {
        local_180 = (longlong *)0x0;
        (**(code **)*plVar8)(plVar8,&DAT_140487168,&local_180);
        uVar2 = (**(code **)(*local_res18 + 0x20))
                          (local_res18,local_180,param_2,1,0,local_res8,&local_res20);
        plVar5 = local_180;
        plVar9 = (longlong *)(ulonglong)uVar2;
        if (local_180 != (longlong *)0x0) {
          local_180 = (longlong *)0x0;
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      if (-1 < (int)plVar9) {
        uVar2 = (**(code **)*local_res20)(local_res20,&DAT_1404872e8,param_1 + 0x98);
        plVar9 = (longlong *)(ulonglong)uVar2;
      }
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x10))();
      local_res18 = (longlong *)0x0;
    }
    if (local_res20 != (longlong *)0x0) {
      (**(code **)(*local_res20 + 0x10))();
      local_res20 = (longlong *)0x0;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    plVar8 = plVar10;
    if (-1 < (int)plVar9) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x40))
                        (*(longlong **)(param_1 + 0x98),&local_188);
      plVar9 = (longlong *)(ulonglong)uVar2;
      plVar8 = (longlong *)0x0;
      if (-1 < (int)uVar2) {
        (**(code **)(*local_188 + 0x40))(local_188,&DAT_140474288,param_1 + 0x78);
        if ((*(char *)(param_1 + 0x34) == '\0') || ((*(byte *)(param_1 + 0xd0) & 1) != 0)) {
          uVar1 = 0;
        }
        else {
          uVar1 = 1;
        }
        uVar2 = FUN_140123530(*(undefined8 *)(param_1 + 0x98),local_188,
                              *(undefined8 *)(param_1 + 0xa8),&local_170,uVar1,
                              *(undefined1 *)(param_1 + 0x35));
        plVar8 = local_170;
        plVar9 = (longlong *)(ulonglong)uVar2;
        if (-1 < (int)uVar2) {
          uVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x38))
                            (*(longlong **)(param_1 + 0x88),0,local_170);
          plVar9 = (longlong *)(ulonglong)uVar2;
          if (-1 < (int)uVar2) {
            *(undefined4 *)(param_1 + 0xb0) = 2;
            FUN_140014f70(param_1 + 0x40,param_2);
            goto LAB_1401215c4;
          }
        }
      }
    }
  }
LAB_1401215bd:
  *(undefined4 *)(param_1 + 0xb0) = 0;
LAB_1401215c4:
  if (local_188 != (longlong *)0x0) {
    (**(code **)(*local_188 + 0x10))();
    local_188 = (longlong *)0x0;
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return plVar9;
}

