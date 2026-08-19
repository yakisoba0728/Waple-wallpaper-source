// Function: FUN_14011fdf0
// Addr: 14011fdf0
// Size: 158 bytes


undefined8 FUN_14011fdf0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uStackX_8;
  undefined8 local_res10;
  undefined8 auStackX_18 [2];
  ulonglong in_stack_ffffffffffffff18;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  local_res10 = param_2;
  iVar5 = func_0x000140290e50(param_1 + 0xe50);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0xe9c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0xe9c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  lVar1 = *(longlong *)(param_1 + 0xe28);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe30);
    *(undefined4 *)(lVar1 + 0x2c) = 0;
    if (*(longlong **)(lVar1 + 0x130) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x130) + 0x10))();
      *(undefined8 *)(lVar1 + 0x130) = 0;
    }
    if (*(longlong **)(lVar1 + 0x138) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x138) + 0x10))();
      *(undefined8 *)(lVar1 + 0x138) = 0;
    }
    puVar3 = *(undefined8 **)(*(longlong *)(lVar1 + 0x70) + 0x20);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    *(undefined8 *)(*(longlong *)(lVar1 + 0x70) + 0x20) = 0;
    if (*(longlong *)(*(longlong *)(lVar1 + 0x70) + 0x10) != 0) {
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0x70) + 0x10);
      (**(code **)(*plVar4 + 0x90))(plVar4,&uStack_98);
      plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0x70) + 0x10);
      iVar5 = (**(code **)(*plVar4 + 0x68))
                        (plVar4,0,param_2 & 0xffffffff,local_res10._4_4_,
                         in_stack_ffffffffffffff18 & 0xffffffff00000000,
                         CONCAT44(uVar7,uStack_70._4_4_));
      if ((iVar5 + 0x7785fffbU & 0xfffffffd) != 0) {
        *(undefined8 *)(lVar1 + 0xb8) = 0;
        *(undefined8 *)(lVar1 + 0xe0) = 0;
        *(undefined8 *)(lVar1 + 0x128) = 0;
        if (-1 < iVar5) {
          puVar3 = *(undefined8 **)(lVar1 + 0x70);
          plVar4 = (longlong *)puVar3[2];
          iVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,0,&DAT_140477fc0,&uStackX_8);
          if (-1 < iVar5) {
            plVar4 = (longlong *)*puVar3;
            (**(code **)(*plVar4 + 0x48))(plVar4,uStackX_8,0,auStackX_18);
          }
          plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0x70) + 0x10);
          (**(code **)(*plVar4 + 0x90))(plVar4,&uStack_68);
          uVar6 = func_0x00014028aff0(0xa0);
          uVar6 = FUN_1400d2d30(uVar6,uStack_68,uStack_64,1,0,lVar2 + 0x10,0x1b,0x18,0,0,
                                *(undefined8 *)(lVar1 + 0x70),auStackX_18[0],uStackX_8);
          *(undefined8 *)(*(longlong *)(lVar1 + 0x70) + 0x20) = uVar6;
          (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x70) + 0x20) + 0x48))();
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xe30) != 0) {
    FUN_14017f280(*(longlong *)(param_1 + 0xe30),param_2 & 0xffffffff,local_res10._4_4_);
    lVar1 = *(longlong *)(param_1 + 0xe30);
    (**(code **)(**(longlong **)(lVar1 + 0x1528) + 0x110))();
    (**(code **)(**(longlong **)(lVar1 + 0x1528) + 0xa8))(*(longlong **)(lVar1 + 0x1528),1);
    (**(code **)(**(longlong **)(lVar1 + 0x1528) + 0xb0))(*(longlong **)(lVar1 + 0x1528),0);
    (**(code **)(**(longlong **)(lVar1 + 0x1528) + 200))(*(longlong **)(lVar1 + 0x1528),1);
    (**(code **)(**(longlong **)(lVar1 + 0x1528) + 0xd8))(*(longlong **)(lVar1 + 0x1528),1,0);
  }
  FUN_140290f70(param_1 + 0xe50);
  return 0;
}

