// Function: FUN_140121030
// Addr: 140121030
// Size: 1285 bytes


/* WARNING: Removing unreachable block (ram,0x0001401215c5) */
/* WARNING: Removing unreachable block (ram,0x000140121479) */
/* WARNING: Removing unreachable block (ram,0x0001401214ba) */
/* WARNING: Removing unreachable block (ram,0x000140121517) */
/* WARNING: Removing unreachable block (ram,0x0001401216bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140121030(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 local_res8 [2];
  longlong *local_res18;
  longlong *local_res20;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar10;
  longlong *local_188 [2];
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  int iStack_14c;
  longlong local_148 [2];
  uint local_138 [14];
  longlong alStack_100 [9];
  longlong local_b8;
  
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  plVar6 = (longlong *)0x0;
  puVar7 = (undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x58)) {
    puVar7 = (undefined8 *)*puVar7;
  }
  *(undefined2 *)puVar7 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  local_170 = (longlong *)0x0;
  local_188[0] = (longlong *)0x0;
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  plVar8 = (longlong *)0x0;
  plVar9 = plVar6;
  if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
LAB_140121103:
    plVar1 = *(longlong **)(param_1 + 0x98);
    if (plVar1 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1);
      plVar8 = *(longlong **)(param_1 + 0x88);
      plVar9 = (longlong *)(ulonglong)uVar3;
      if ((int)uVar3 < 0) goto LAB_140121132;
    }
    if (plVar8 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar8 + 0x68))();
      plVar9 = (longlong *)(ulonglong)uVar3;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 6;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x60))();
    plVar9 = (longlong *)(ulonglong)uVar3;
    if (-1 < (int)uVar3) {
      iVar4 = (*DAT_140426228)(*(undefined8 *)(param_1 + 0xb8),5000);
      if (iVar4 != 0x102) {
        plVar8 = *(longlong **)(param_1 + 0x88);
        goto LAB_140121103;
      }
      plVar9 = (longlong *)0x80004005;
    }
  }
LAB_140121132:
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  plVar8 = plVar6;
  if (-1 < (int)plVar9) {
    uVar3 = (*DAT_1404e3a60)(0,param_1 + 0x88);
    if (((int)uVar3 < 0) ||
       (uVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))
                          (*(longlong **)(param_1 + 0x88),param_1 + 0x70,0), (int)uVar3 < 0)) {
      plVar9 = (longlong *)(ulonglong)uVar3;
      plVar8 = (longlong *)0x0;
      if ((int)uVar3 < 0) goto LAB_14012168d;
    }
    else {
      *(undefined4 *)(param_1 + 0xb0) = 1;
    }
    if (*(int *)(param_1 + 0xc4) == 1) {
      local_178 = 0;
      FUN_140049ab0(local_148,param_2,0x24);
      if (local_b8 == 0) {
        *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) =
             &PTR_UNWIND_INFO_140475ec8;
        *(int *)((longlong)&iStack_14c + (longlong)*(int *)(local_148[0] + 4)) =
             *(int *)(local_148[0] + 4) + -0xb0;
                    /* WARNING: Subroutine does not return */
        FUN_14004a860(local_138);
      }
      plVar6 = *(longlong **)((longlong)alStack_100 + (longlong)*(int *)(local_148[0] + 4));
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      lVar5 = (longlong)*(int *)(local_148[0] + 4);
      if (*(uint *)((longlong)local_138 + lVar5) == 0) {
        if (*(longlong *)((longlong)alStack_100 + lVar5 + 8) != 0) {
          FUN_140012ad0();
        }
        if ((*(byte *)((longlong)local_138 + (longlong)*(int *)(local_148[0] + 4)) & 6) == 0) {
          plVar6 = *(longlong **)((longlong)alStack_100 + (longlong)*(int *)(local_148[0] + 4));
          (**(code **)(*plVar6 + 0x50))(plVar6,&local_168,0,1,CONCAT44(uVar10,1));
          plVar6 = *(longlong **)((longlong)alStack_100 + (longlong)*(int *)(local_148[0] + 4));
        }
        else {
          local_168 = _DAT_140492be0;
          uStack_160 = _UNK_140492be8;
          local_158 = 0;
          plVar6 = *(longlong **)((longlong)alStack_100 + (longlong)*(int *)(local_148[0] + 4));
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        iVar4 = (int)uStack_160 + (int)local_168;
        FUN_14004a9f0(local_148,0,0);
        local_178 = FUN_14028b190(iVar4);
        plVar6 = (longlong *)FUN_14004ab20(local_148,local_178,iVar4);
        if ((*(uint *)((longlong)*(int *)(*plVar6 + 4) + 0x10 + (longlong)plVar6) >> 2 & 1) != 0) {
          plVar6 = (longlong *)func_0x00014028b040(&local_178);
          return plVar6;
        }
        *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) =
             &PTR_UNWIND_INFO_140475ec8;
        *(int *)((longlong)&iStack_14c + (longlong)*(int *)(local_148[0] + 4)) =
             *(int *)(local_148[0] + 4) + -0xb0;
                    /* WARNING: Subroutine does not return */
        FUN_14004a860(local_138);
      }
      uVar3 = 6;
      if (*(longlong *)((longlong)alStack_100 + lVar5) != 0) {
        uVar3 = 2;
      }
      plVar6 = (longlong *)
               func_0x000140013c20((longlong)local_148 + lVar5,
                                   *(uint *)((longlong)local_138 + lVar5) | uVar3,0);
      return plVar6;
    }
    local_res8[0] = 2;
    local_res18 = (longlong *)0x0;
    local_res20 = (longlong *)0x0;
    uVar3 = (*DAT_1404e3a90)(&local_res18);
    plVar9 = (longlong *)(ulonglong)uVar3;
    if (-1 < (int)uVar3) {
      uVar3 = (**(code **)(*local_res18 + 0x18))(local_res18,param_2,1,0,local_res8,&local_res20);
      plVar9 = (longlong *)(ulonglong)uVar3;
      if (-1 < (int)uVar3) {
        uVar3 = (**(code **)*local_res20)(local_res20,&DAT_1404873b8,param_1 + 0x98);
        plVar9 = (longlong *)(ulonglong)uVar3;
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
    plVar8 = plVar6;
    if (-1 < (int)plVar9) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x40))
                        (*(longlong **)(param_1 + 0x98),local_188);
      plVar9 = (longlong *)(ulonglong)uVar3;
      plVar8 = (longlong *)0x0;
      if (-1 < (int)uVar3) {
        (**(code **)(*local_188[0] + 0x40))(local_188[0],&DAT_140474358,param_1 + 0x78);
        if ((*(char *)(param_1 + 0x34) == '\0') || ((*(byte *)(param_1 + 0xd0) & 1) != 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        uVar3 = FUN_140123600(*(undefined8 *)(param_1 + 0x98),local_188[0],
                              *(undefined8 *)(param_1 + 0xa8),&local_170,uVar2,
                              *(undefined1 *)(param_1 + 0x35));
        plVar8 = local_170;
        plVar9 = (longlong *)(ulonglong)uVar3;
        if (-1 < (int)uVar3) {
          uVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x38))
                            (*(longlong **)(param_1 + 0x88),0,local_170);
          plVar9 = (longlong *)(ulonglong)uVar3;
          if (-1 < (int)uVar3) {
            *(undefined4 *)(param_1 + 0xb0) = 2;
            func_0x000140015040(param_1 + 0x40,param_2);
            goto code_r0x000140121694;
          }
        }
      }
    }
  }
LAB_14012168d:
  *(undefined4 *)(param_1 + 0xb0) = 0;
code_r0x000140121694:
  if (local_188[0] != (longlong *)0x0) {
    (**(code **)(*local_188[0] + 0x10))();
    local_188[0] = (longlong *)0x0;
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return plVar9;
}

