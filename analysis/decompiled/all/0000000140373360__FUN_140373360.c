// Function: FUN_140373360
// Addr: 140373360
// Size: 326 bytes


void FUN_140373360(char *param_1,byte *param_2,int param_3,uint param_4)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  if ((*param_1 == '\0') || (param_3 == 0)) {
    return;
  }
  param_1[4] = -1;
  param_1[5] = -1;
  param_1[6] = -1;
  param_1[7] = -1;
  uVar2 = (uint)*param_2 * 0x100 + (uint)param_2[1];
  do {
    uVar4 = *(uint *)(param_1 + 8);
    plVar1 = (longlong *)(param_1 + 0x18);
    uVar8 = uVar2 >> 9;
    if (uVar4 < *(uint *)(param_1 + 0x14)) {
      if (*(uint *)(*plVar1 + (ulonglong)uVar4 * 8) != uVar8) goto LAB_1403733e4;
      puVar6 = (undefined4 *)
               (*(longlong *)(param_1 + 0x28) +
               (ulonglong)*(uint *)(*plVar1 + 4 + (ulonglong)uVar4 * 8) * 0x48);
    }
    else {
LAB_1403733e4:
      iVar5 = 0;
      iVar7 = *(uint *)(param_1 + 0x14) - 1;
      if (-1 < iVar7) {
        do {
          uVar4 = (uint)(iVar7 + iVar5) >> 1;
          iVar3 = uVar8 - *(int *)(*plVar1 + (ulonglong)uVar4 * 8);
          if (iVar3 < 0) {
            iVar7 = uVar4 - 1;
          }
          else {
            if (iVar3 < 1) {
              *(uint *)(param_1 + 8) = uVar4;
              puVar6 = (undefined4 *)
                       (*(longlong *)(param_1 + 0x28) +
                       (ulonglong)*(uint *)(*plVar1 + 4 + (ulonglong)uVar4 * 8) * 0x48);
              goto LAB_140373414;
            }
            iVar5 = uVar4 + 1;
          }
        } while (iVar5 <= iVar7);
      }
      puVar6 = (undefined4 *)0x0;
    }
LAB_140373414:
    do {
      if ((uVar2 != 0xffffffff) && (puVar6 != (undefined4 *)0x0)) {
        uVar4 = uVar2 >> 6 & 7;
        *(ulonglong *)(puVar6 + (ulonglong)uVar4 * 2 + 2) =
             *(ulonglong *)(puVar6 + (ulonglong)uVar4 * 2 + 2) & ~(1L << (uVar2 & 0x3f));
        *puVar6 = 0xffffffff;
      }
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        return;
      }
      param_2 = param_2 + param_4;
      uVar2 = (uint)*param_2 * 0x100 + (uint)param_2[1];
    } while ((uVar8 * 0x200 <= uVar2) && (uVar2 < uVar8 * 0x200 + 0x200));
  } while( true );
}

