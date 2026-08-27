// Function: FUN_1400cd2f0
// Addr: 1400cd2f0
// Size: 457 bytes


void FUN_1400cd2f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_res18;
  undefined1 local_48 [16];
  
  local_res18 = param_3;
  if (param_3 < param_2) {
    do {
      lVar6 = param_2 + -1 >> 1;
      lVar5 = lVar6 * 0x90;
      puVar1 = (undefined4 *)(lVar5 + param_1);
      plVar3 = (longlong *)FUN_1400ca6c0(param_5,local_res8,puVar1);
      plVar4 = (longlong *)FUN_1400ca6c0(param_5,local_res10,param_4);
      if (*plVar3 == *plVar4) {
        if (*(char *)(param_5 + 0x40) == '\0') {
          iVar2 = *(int *)(param_1 + 4 + lVar5);
          if (iVar2 != *(int *)(param_4 + 4)) {
            bVar7 = iVar2 < *(int *)(param_4 + 4);
            goto LAB_1400cd3b5;
          }
        }
        bVar7 = *(int *)(param_4 + 8) < *(int *)(param_1 + 8 + lVar5);
      }
      else {
        plVar3 = (longlong *)FUN_1400ca6c0(param_5,local_48,param_4);
        bVar7 = *plVar3 == *(longlong *)(param_5 + 8);
      }
LAB_1400cd3b5:
      if (!bVar7) break;
      param_2 = param_2 * 0x90;
      *(undefined4 *)(param_1 + param_2) = *puVar1;
      *(undefined4 *)(param_1 + 4 + param_2) = *(undefined4 *)(param_1 + 4 + lVar5);
      *(undefined4 *)(param_1 + 8 + param_2) = *(undefined4 *)(param_1 + 8 + lVar5);
      *(undefined4 *)(param_1 + 0xc + param_2) = puVar1[3];
      if (param_2 != lVar5) {
        plVar3 = *(longlong **)(param_1 + 0x48 + param_2);
        plVar4 = (longlong *)(param_1 + 0x10 + param_2);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != plVar4);
          *(undefined8 *)(param_1 + 0x48 + param_2) = 0;
        }
        FUN_140037830(plVar4,param_1 + 0x10 + lVar5);
        plVar3 = *(longlong **)(param_1 + 0x88 + param_2);
        plVar4 = (longlong *)(param_1 + 0x50 + param_2);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != plVar4);
          *(undefined8 *)(param_1 + 0x88 + param_2) = 0;
        }
        FUN_140037830(plVar4,param_1 + 0x50 + lVar5);
      }
      param_2 = lVar6;
    } while (local_res18 < lVar6);
  }
  FUN_1400c9320(param_2 * 0x90 + param_1,param_4);
  return;
}

