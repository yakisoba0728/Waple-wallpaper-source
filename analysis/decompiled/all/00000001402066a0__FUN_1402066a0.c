// Function: FUN_1402066a0
// Addr: 1402066a0
// Size: 1043 bytes


void FUN_1402066a0(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
                  int param_6,int param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  float fVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint uVar8;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  
  uVar8 = *(uint *)(param_1 + 0x304) & 2;
  if ((uVar8 == 0) && ((*(uint *)(param_1 + 0x304) & 0x220) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  plVar1 = (longlong *)(param_1 + 0x2e0);
  uVar7 = 1;
  puVar3 = (undefined8 *)*plVar1;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar2 = (longlong *)(param_1 + 0x2e8);
  puVar3 = (undefined8 *)*plVar2;
  *plVar1 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *plVar2 = 0;
  if (((0 < *(int *)(param_1 + 800)) || ((*(byte *)(param_1 + 0x304) & 0x10) != 0)) ||
     (((*(byte *)(param_1 + 0x120) & 4) != 0 &&
      (*(longlong *)(param_1 + 0x198) != *(longlong *)(param_1 + 0x1a0))))) {
    FUN_1401ede30(*(longlong *)(param_1 + 200),0x4000000040000000,
                  CONCAT44((float)param_5,(float)param_4),CONCAT44(param_3,param_2),
                  (*(uint *)(*(longlong *)(param_1 + 200) + 0x118) & 1 ^ 1) << 2 | 1,plVar1);
    if ((uVar8 != 0) || (uVar8 = 2, bVar4)) {
      uVar8 = 0;
    }
    FUN_1401ede30(*(undefined8 *)(param_1 + 200),CONCAT44((float)param_7,(float)param_6),
                  CONCAT44((float)param_5,(float)param_4),CONCAT44(param_3,param_2),uVar8 | 1,plVar2
                 );
  }
  if ((*(longlong *)(param_1 + 0x4b8) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 8) == 0)) {
    plVar1 = (longlong *)(param_1 + 0x490);
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    *plVar1 = 0;
    if ((*(int *)(param_1 + 800) < 1) && ((*(uint *)(param_1 + 0x304) & 0x10) == 0)) {
      lVar6 = *(longlong *)(param_1 + 200);
      local_80 = (float)param_4;
      fStack_7c = (float)param_5;
      uVar7 = 1;
      if ((*(uint *)(param_1 + 0x304) & 0x226) == 0) {
        uVar7 = 3;
      }
      fStack_84 = (float)param_7;
      local_88 = (float)param_6;
    }
    else {
      if (*(char *)(param_1 + 0x4b0) == '\0') goto LAB_1402069e5;
      lVar6 = *(longlong *)(param_1 + 200);
      fStack_84 = DAT_140492704 / (float)*(int *)(lVar6 + 0x1218);
      local_88 = (float)param_4 * fStack_84;
      fStack_84 = (float)param_5 * fStack_84;
      local_80 = local_88;
      fStack_7c = fStack_84;
    }
    FUN_1401ede30(lVar6,CONCAT44(fStack_84,local_88),CONCAT44(fStack_7c,local_80),
                  CONCAT44(param_3,param_2),uVar7,plVar1);
  }
  else {
    FUN_14020ae00(param_1);
  }
LAB_1402069e5:
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  fVar5 = DAT_1404926c0;
  switch(*(undefined1 *)(param_1 + 0x4b1)) {
  case 1:
    param_7 = -param_7;
  case 5:
    goto LAB_140206aa0;
  case 2:
    param_6 = -param_6;
  case 8:
    param_7 = -param_7;
    break;
  case 3:
    param_6 = -param_6;
  case 7:
    *(float *)(param_1 + 0x2f8) = (float)param_6 * DAT_1404926c0;
    return;
  case 4:
    param_6 = -param_6;
    break;
  case 6:
    break;
  default:
    goto switchD_140206a39_default;
  }
  *(float *)(param_1 + 0x2f8) = (float)param_6 * DAT_1404926c0;
LAB_140206aa0:
  *(float *)(param_1 + 0x2fc) = (float)param_7 * fVar5;
switchD_140206a39_default:
  return;
}

