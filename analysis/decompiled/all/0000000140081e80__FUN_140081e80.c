// Function: FUN_140081e80
// Addr: 140081e80
// Size: 349 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140081e80(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      return;
    }
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    iVar5 = func_0x000140290e50(param_1 + 0x140);
    while( true ) {
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290e00(5);
      }
      if (*(int *)(param_1 + 0x18c) == 0x7fffffff) {
        *(undefined4 *)(param_1 + 0x18c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290e00(6);
      }
      if (*(longlong *)(param_1 + 0x1b0) == 0) break;
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 0x198) +
                (*(longlong *)(param_1 + 0x1a0) - 1U & *(ulonglong *)(param_1 + 0x1a8)) * 8);
      uVar4 = *puVar2;
      uVar3 = puVar2[1];
      func_0x00014028b040(puVar2[3]);
      plVar1 = (longlong *)(param_1 + 0x1b0);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        *(undefined8 *)(param_1 + 0x1a8) = 0;
      }
      else {
        *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_1 + 0x1a8) + 1;
      }
      local_38 = 0;
      local_30 = 0;
      local_48 = uVar4;
      local_40 = uVar3;
      func_0x00014028b040(0);
      FUN_140290f70(param_1 + 0x140);
      (*_UNK_1404268f8)(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x218),0,&local_48
                       );
      func_0x00014028b040(local_40);
      iVar5 = func_0x000140290e50(param_1 + 0x140);
    }
  }
  else {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    iVar5 = func_0x000140290e50(param_1 + 0x140);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    if (*(int *)(param_1 + 0x18c) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x18c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
    }
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      func_0x00014028b040(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)(param_1 + 0x198) +
                             (*(longlong *)(param_1 + 0x1a0) - 1U & *(ulonglong *)(param_1 + 0x1a8))
                             * 8) + 0x18));
      return;
    }
  }
  FUN_140290f70(param_1 + 0x140);
  func_0x00014028b040(local_30);
  return;
}

