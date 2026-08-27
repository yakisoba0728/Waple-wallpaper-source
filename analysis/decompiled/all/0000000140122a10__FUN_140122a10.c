// Function: FUN_140122a10
// Addr: 140122a10
// Size: 382 bytes


undefined8 FUN_140122a10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *local_res8 [2];
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  iVar3 = 0;
  local_res8[0] = (longlong *)0x0;
  SendMessageTimeoutW(*(HWND *)(param_1 + 0xa8),0x40a,0,0,1,0,(PDWORD_PTR)local_res8);
  if ((local_res8[0] != (longlong *)0x1) &&
     (plVar1 = *(longlong **)(param_1 + 0x88), plVar1 != (longlong *)0x0)) {
    if (*(int *)(param_1 + 0xc0) == 1) {
      local_res8[0] = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x70))(plVar1,local_res8);
      if (local_res8[0] != (longlong *)0x0) {
        do {
          local_res18 = 0;
          iVar2 = (**(code **)(*local_res8[0] + 0x20))(local_res8[0],0,&local_res18,local_res20);
          if ((iVar2 < 0) || (local_res18 == 0)) break;
          Sleep(1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 200);
        if (local_res8[0] != (longlong *)0x0) {
          (**(code **)(*local_res8[0] + 0x10))();
        }
      }
    }
    if ((*(int *)(param_1 + 0xc0) != 2) && (*(int *)(param_1 + 0xb0) != 4)) {
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x50))();
      *(undefined4 *)(param_1 + 0xb0) = 4;
      local_28 = 0;
      uStack_30 = 0;
      local_38 = 0x14;
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x48))
                (*(longlong **)(param_1 + 0x88),0,&local_38);
      *(undefined4 *)(param_1 + 0xb0) = 3;
      PropVariantClear((PROPVARIANT *)&local_38);
    }
  }
  return 0;
}

