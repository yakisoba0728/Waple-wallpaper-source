// Function: FUN_140093330
// Addr: 140093330
// Size: 480 bytes


undefined8 *
FUN_140093330(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined1 *param_5,uint *param_6,undefined8 *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *piVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *local_378;
  char cStack_370;
  undefined1 uStack_36f;
  undefined2 uStack_36e;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined1 local_358 [8];
  longlong *local_350;
  undefined1 local_348 [816];
  
  local_368 = *param_4;
  uStack_364 = param_4[1];
  uStack_360 = param_4[2];
  uStack_35c = param_4[3];
  local_378 = (longlong *)*param_3;
  uVar3 = *(undefined4 *)(param_3 + 1);
  uStack_36c = *(undefined4 *)((longlong)param_3 + 0xc);
  cStack_370 = (char)uVar3;
  uStack_36f = (undefined1)((uint)uVar3 >> 8);
  uStack_36e = (undefined2)((uint)uVar3 >> 0x10);
  local_350 = *(longlong **)(*(longlong *)(param_5 + 0x40) + 8);
  (**(code **)(*local_350 + 8))();
  uVar5 = FUN_1400953e0(local_348,0x300,&local_378,&local_368,local_358);
  if ((local_350 != (longlong *)0x0) &&
     (puVar7 = (undefined8 *)(**(code **)(*local_350 + 0x10))(), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)(puVar7,1);
  }
  puVar4 = param_6;
  if ((char)uVar5 == '\0') {
    uVar10 = 0;
LAB_140093435:
    *puVar4 = 2;
  }
  else {
    piVar8 = (int *)FUN_1402caf34();
    iVar1 = *piVar8;
    *piVar8 = 0;
    uVar10 = FUN_1402d3d60(local_348,&param_5);
    iVar2 = *piVar8;
    *piVar8 = iVar1;
    if (((param_5 == local_348) || (iVar2 != 0)) || ((char)((ushort)uVar5 >> 8) != '\0'))
    goto LAB_140093435;
  }
  if (cStack_370 == '\0') {
    if (local_378 == (longlong *)0x0) {
LAB_140093480:
      local_378 = (longlong *)0x0;
    }
    else {
      if ((*(byte **)local_378[7] == (byte *)0x0) || (*(int *)local_378[10] < 1)) {
        uVar6 = (**(code **)(*local_378 + 0x30))();
      }
      else {
        uVar6 = (uint)**(byte **)local_378[7];
      }
      if (uVar6 == 0xffffffff) goto LAB_140093480;
      uStack_36f = (undefined1)uVar6;
    }
    cStack_370 = '\x01';
  }
  plVar9 = (longlong *)CONCAT44(uStack_364,local_368);
  if ((char)uStack_360 == '\0') {
    if (plVar9 != (longlong *)0x0) {
      if ((*(byte **)plVar9[7] == (byte *)0x0) || (*(int *)plVar9[10] < 1)) {
        uVar6 = (**(code **)(*plVar9 + 0x30))();
        plVar9 = (longlong *)CONCAT44(uStack_364,local_368);
      }
      else {
        uVar6 = (uint)**(byte **)plVar9[7];
      }
      if (uVar6 != 0xffffffff) goto LAB_1400934cb;
    }
    plVar9 = (longlong *)0x0;
  }
LAB_1400934cb:
  if (local_378 == (longlong *)0x0) {
    if (plVar9 != (longlong *)0x0) goto LAB_1400934e3;
  }
  else if (plVar9 == (longlong *)0x0) goto LAB_1400934e3;
  *puVar4 = *puVar4 | 1;
LAB_1400934e3:
  *param_2 = local_378;
  param_2[1] = CONCAT44(uStack_36c,CONCAT22(uStack_36e,CONCAT11(uStack_36f,cStack_370)));
  *param_7 = uVar10;
  return param_2;
}

