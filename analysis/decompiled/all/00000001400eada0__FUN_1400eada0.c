// Function: FUN_1400eada0
// Addr: 1400eada0
// Size: 114 bytes


void FUN_1400eada0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_res10 [2];
  ulonglong uVar6;
  undefined4 *puVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  uVar5 = (ulonglong)param_2;
  if (uVar5 < (ulonglong)(*(longlong *)(param_1 + 0x40) - lVar1 >> 4)) {
    uVar4 = FUN_1400d8060(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),
                          *(undefined4 *)(param_1 + 0x24));
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
    (**(code **)(*plVar2 + 0x88))(plVar2,uVar4);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
    (**(code **)(*plVar2 + 0xc0))(plVar2,*(undefined4 *)(param_1 + 0x30));
    puVar7 = local_res10;
    local_res10[0] = 0;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
    uVar6 = param_1 + 0x28;
    (**(code **)(*plVar2 + 0x90))(plVar2,0,1,param_1 + 0x10,uVar6,puVar7);
    FUN_14009a030(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18));
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
    pcVar3 = *(code **)(*plVar2 + 0x98);
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x50) == '\0') {
      (*pcVar3)();
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
      (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(lVar1 + 8 + uVar5 * 0x10),0,0);
      return;
    }
    (*pcVar3)(plVar2,*(undefined8 *)(lVar1 + uVar5 * 0x10),*(undefined4 *)(param_1 + 0x20),0);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
    (**(code **)(*plVar2 + 0xa0))
              (plVar2,*(undefined4 *)(lVar1 + 8 + uVar5 * 0x10),
               *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x50),0,uVar6 & 0xffffffff00000000,
               (ulonglong)puVar7 & 0xffffffff00000000);
  }
  return;
}

