// Function: FUN_140157660
// Addr: 140157660
// Size: 274 bytes


void FUN_140157660(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  longlong *local_res10;
  
  FUN_140176f70(*(longlong *)(param_1 + 200) + 0x1708,param_1,0);
  puVar1 = *(undefined8 **)(param_1 + 0x278);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    lVar5 = *(longlong *)(puVar2[3] + 8);
    if (lVar5 != 0) {
      FUN_140017240(lVar5 + 0x38);
      thunk_FUN_14028af80(lVar5,0x58);
    }
    lVar5 = puVar2[3];
    if (lVar5 != 0) {
      FUN_140017240(lVar5 + 0x10);
      thunk_FUN_14028af80(lVar5,0x38);
    }
  }
  FUN_14015a390(param_1 + 0x270);
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  puVar2 = (undefined8 *)*puVar1;
  do {
    if (puVar2 == puVar1) {
      FUN_14015a800(param_1 + 0x48);
      return;
    }
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar3 = *(longlong *)(param_1 + 0x38);
    if (lVar5 != lVar3) {
      do {
        plVar4 = *(longlong **)(lVar5 + 0x38);
        local_res8[0] = 1;
        local_res10 = puVar2 + 6;
        if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2c0();
        }
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_res10,local_res8);
        lVar5 = lVar5 + 0x40;
      } while (lVar5 != lVar3);
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}

