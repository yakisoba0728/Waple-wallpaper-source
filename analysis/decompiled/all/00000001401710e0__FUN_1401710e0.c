// Function: FUN_1401710e0
// Addr: 1401710e0
// Size: 494 bytes


void FUN_1401710e0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14048df88;
  if ((longlong *)param_1[0x25] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x25] + 8))();
  }
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    (**(code **)(**(longlong **)(param_1[1] + 0x158) + 0x160))
              (*(longlong **)(param_1[1] + 0x158),*(undefined4 *)param_1[0x28]);
    lVar1 = param_1[0x28];
    if (lVar1 != 0) {
      FUN_1401795d0(lVar1 + 0x218);
      FUN_1400c1530(lVar1 + 0x160);
      FUN_1400c1530(lVar1 + 0x108);
      FUN_140017240(lVar1 + 0xe8);
      FUN_140017240(lVar1 + 200);
      FUN_140017240(lVar1 + 0xa8);
      FUN_140017240(lVar1 + 0x88);
      FUN_140017240(lVar1 + 0x68);
      FUN_140017240(lVar1 + 0x48);
      FUN_140017240(lVar1 + 0x28);
      FUN_140017240(lVar1 + 8);
      thunk_FUN_14028af80(lVar1,0x288);
    }
    param_1[0x28] = 0;
  }
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    (**(code **)(**(longlong **)(param_1[1] + 0x158) + 0x128))
              (*(longlong **)(param_1[1] + 0x158),*(undefined4 *)param_1[0x29]);
    lVar1 = param_1[0x29];
    if (lVar1 != 0) {
      FUN_14000d9e0(lVar1 + 0xe0);
      FUN_14000da50(lVar1 + 0xd0);
      FUN_1401794d0(lVar1 + 0x58);
      thunk_FUN_14028af80(lVar1,0x108);
    }
    param_1[0x29] = 0;
  }
  FUN_14000d9e0(param_1 + 0x2d);
  FUN_1400d2120(param_1 + 0x2b);
  FUN_14000d9e0(param_1 + 0x20);
  FUN_140049340(param_1 + 0x1e);
  FUN_140049340(param_1 + 0x1b);
  FUN_14000d9e0(param_1 + 0x16);
  FUN_140179450(param_1 + 0x14);
  FUN_14000d9e0(param_1 + 0x10);
  FUN_14000d9e0(param_1 + 0xd);
  FUN_140085440(param_1 + 7);
  FUN_140085440(param_1 + 2);
  return;
}

