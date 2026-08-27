// Function: FUN_140414fb0
// Addr: 140414fb0
// Size: 278 bytes


undefined8 FUN_140414fb0(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int iVar8;
  int local_res10 [6];
  int *local_18;
  undefined4 local_10;
  
  if ((*(code **)(param_1 + 0x30) != FUN_14039c150) || (param_2 == -1)) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(lVar2 + 0x28);
  if ((lVar3 != 0) &&
     (uVar7 = ((ulonglong)(uint)(param_2 * 0x1e3779b1) & 0xffffffff3fffffff) %
              (ulonglong)*(uint *)(lVar2 + 0x20),
     (*(uint *)(lVar3 + 4 + uVar7 * 0x18) >> 1 & 1) != 0)) {
    iVar8 = 0;
    do {
      lVar1 = lVar3 + uVar7 * 0x18;
      if (*(int *)(lVar3 + uVar7 * 0x18) == param_2) {
        if (((*(byte *)(lVar1 + 4) & 1) != 0) && (lVar1 != 0)) {
          puVar6 = (undefined8 *)(lVar1 + 8);
          goto LAB_14041503e;
        }
        break;
      }
      iVar8 = iVar8 + 1;
      uVar7 = (ulonglong)((int)uVar7 + iVar8 & *(uint *)(lVar2 + 0x1c));
    } while ((*(uint *)(lVar3 + 4 + uVar7 * 0x18) >> 1 & 1) != 0);
  }
  puVar6 = &DAT_14045dd10;
LAB_14041503e:
  uVar4 = *puVar6;
  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    LOCK();
    *param_3 = *param_3 + 1;
    UNLOCK();
  }
  local_10 = 0xffffffff;
  local_res10[0] = param_2;
  local_18 = param_3;
  cVar5 = FUN_14038e240(lVar2,local_res10,param_2 * -0x61c8864f,&local_18,1);
  if (cVar5 == '\0') {
    FUN_140414150(param_3);
    return 0;
  }
  FUN_140414150(uVar4);
  return 1;
}

