// Function: FUN_140093d30
// Addr: 140093d30
// Size: 416 bytes


undefined8 *
FUN_140093d30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
             longlong param_5,uint *param_6,undefined4 *param_7)

{
  longlong lVar1;
  uint *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 *local_res10 [3];
  longlong *local_88;
  char cStack_80;
  undefined1 uStack_7f;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [40];
  
  lVar1 = param_5;
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  local_88 = (longlong *)*param_3;
  uVar4 = *(undefined4 *)(param_3 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_3 + 0xc);
  cStack_80 = (char)uVar4;
  uStack_7f = (undefined1)((uint)uVar4 >> 8);
  uStack_7e = (undefined2)((uint)uVar4 >> 0x10);
  plVar8 = *(longlong **)(*(longlong *)(param_5 + 0x40) + 8);
  local_60 = plVar8;
  (**(code **)(*plVar8 + 8))(plVar8);
  uVar3 = FUN_140094550(local_58,&local_88,&local_78,*(undefined4 *)(lVar1 + 0x18),local_68);
  if ((plVar8 != (longlong *)0x0) &&
     (puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)(puVar6,1);
  }
  puVar2 = param_6;
  if ((char)uVar3 < '\0') {
    uVar4 = 0;
LAB_140093e0a:
    *puVar2 = 2;
  }
  else {
    uVar4 = FUN_140292860(local_58,local_res10,(int)(char)uVar3,&param_5);
    if (((local_res10[0] == local_58) || ((int)param_5 != 0)) ||
       ((char)((ushort)uVar3 >> 8) != '\0')) goto LAB_140093e0a;
  }
  plVar8 = local_88;
  if (cStack_80 == '\0') {
    if (local_88 == (longlong *)0x0) {
LAB_140093e4f:
      plVar8 = (longlong *)0x0;
      local_88 = (longlong *)0x0;
    }
    else {
      if ((*(byte **)local_88[7] == (byte *)0x0) || (*(int *)local_88[10] < 1)) {
        uVar5 = (**(code **)(*local_88 + 0x30))(local_88);
      }
      else {
        uVar5 = (uint)**(byte **)local_88[7];
      }
      if (uVar5 == 0xffffffff) goto LAB_140093e4f;
      uStack_7f = (undefined1)uVar5;
    }
    cStack_80 = '\x01';
  }
  plVar7 = (longlong *)CONCAT44(uStack_74,local_78);
  if ((char)uStack_70 == '\0') {
    if (plVar7 != (longlong *)0x0) {
      if ((*(byte **)plVar7[7] == (byte *)0x0) || (*(int *)plVar7[10] < 1)) {
        uVar5 = (**(code **)(*plVar7 + 0x30))(plVar7);
      }
      else {
        uVar5 = (uint)**(byte **)plVar7[7];
      }
      if (uVar5 != 0xffffffff) goto LAB_140093e96;
    }
    plVar7 = (longlong *)0x0;
  }
LAB_140093e96:
  if (plVar8 == (longlong *)0x0) {
    if (plVar7 != (longlong *)0x0) goto LAB_140093eaa;
  }
  else if (plVar7 == (longlong *)0x0) goto LAB_140093eaa;
  *puVar2 = *puVar2 | 1;
LAB_140093eaa:
  *param_2 = local_88;
  param_2[1] = CONCAT44(uStack_7c,CONCAT22(uStack_7e,CONCAT11(uStack_7f,cStack_80)));
  *param_7 = uVar4;
  return param_2;
}

