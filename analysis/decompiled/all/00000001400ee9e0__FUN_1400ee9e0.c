// Function: FUN_1400ee9e0
// Addr: 1400ee9e0
// Size: 458 bytes


void FUN_1400ee9e0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int local_res10 [4];
  undefined1 local_res20 [8];
  int *piVar9;
  longlong local_68;
  longlong local_60;
  undefined8 uStack_58;
  
  iVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0x144);
  if (*(int *)(*(longlong *)(param_1 + 0xe0) + 0x18) != iVar7) {
    *(int *)(*(longlong *)(param_1 + 0xe0) + 0x18) = iVar7;
    piVar9 = local_res10;
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x158);
    cVar6 = (**(code **)(*plVar4 + 0x148))
                      (plVar4,**(undefined8 **)(param_1 + 0xe0),
                       *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x14c),&local_68,piVar9,
                       local_res20);
    if (cVar6 != '\0') {
      local_60 = 0;
      uStack_58 = 0;
      if (((*(longlong **)(param_1 + 0x140) != *(longlong **)(param_1 + 0x148)) &&
          (lVar5 = **(longlong **)(param_1 + 0x140), lVar5 != 0)) &&
         (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x138) + 8),
         iVar7 = (**(code **)(*plVar4 + 0x70))
                           (plVar4,lVar5,0,4,(ulonglong)piVar9 & 0xffffffff00000000,&local_60),
         lVar5 = local_60, -1 < iVar7)) {
        if (local_60 != 0) {
          iVar7 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc);
          iVar2 = *(int *)(*(longlong *)(param_1 + 0xe0) + 8);
          uVar8 = 0;
          uVar3 = *(uint *)(param_1 + 0x30);
          if (uVar3 != 0) {
            uVar1 = (uint)uStack_58 & 0xfffffffc;
            do {
              FUN_1404210f0((ulonglong)(uVar8 * uVar1) + lVar5,
                            (ulonglong)((uVar8 + iVar7) * local_res10[0] * 4) +
                            (ulonglong)(uint)(iVar2 * 4) + local_68,uVar1);
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar3);
          }
        }
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x138) + 8);
        (**(code **)(*plVar4 + 0x78))(plVar4,**(undefined8 **)(param_1 + 0x140),0);
      }
    }
  }
  return;
}

