// Function: FUN_1400d7150
// Addr: 1400d7150
// Size: 308 bytes


void FUN_1400d7150(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  
  *param_1 = &PTR_DAT_140486fc8;
  plVar4 = param_1 + 0x2c;
  puVar1 = (undefined8 *)*plVar4;
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    (**(code **)(*(longlong *)puVar2[3] + 0x10))();
  }
  if (param_1[0x2d] != 0) {
    plVar3 = (longlong *)*plVar4;
    if ((ulonglong)param_1[0x2d] < (ulonglong)param_1[0x32] >> 3) {
      plVar4 = (longlong *)*plVar3;
      if (plVar4 != plVar3) {
        local_res10 = param_1[0x2e];
        lVar5 = (param_1[0x31] &
                (((((ulonglong)*(byte *)(plVar4 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar4 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar4 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar4 + 0x13)) * 0x100000001b3) * 0x10;
        local_res18 = local_res10 + 8 + lVar5;
        local_res8 = *(longlong *)(lVar5 + local_res10);
        func_0x00014028b040(plVar4,0x20);
        return;
      }
    }
    else {
      *(undefined8 *)plVar3[1] = 0;
      puVar1 = (undefined8 *)*plVar3;
      while (puVar1 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar1;
        func_0x00014028b040(puVar1,0x20);
        puVar1 = puVar2;
      }
      *(longlong *)*plVar4 = *plVar4;
      *(longlong *)(*plVar4 + 8) = *plVar4;
      param_1[0x2d] = 0;
      local_res8 = *plVar4;
      func_0x00014000f8a0(param_1[0x2e],param_1[0x2f],&local_res8);
    }
  }
  func_0x00014028b040(param_1[0x1e]);
  return;
}

