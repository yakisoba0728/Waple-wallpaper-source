// Function: FUN_1402105c0
// Addr: 1402105c0
// Size: 455 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402105c0(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4)

{
  float fVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    fVar1 = *(float *)param_4[1];
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar3 = (char *)*param_4, *pcVar3 != '\0')) {
        uVar7 = 0;
        lVar2 = *(longlong *)(lVar2 + 0x18);
        iVar8 = (int)(*(longlong *)(lVar2 + 0x70) - *(longlong *)(lVar2 + 0x68) >> 6);
        if (0 < iVar8) {
          do {
            lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x68) + 8 + uVar7 * 0x40);
            if ((lVar4 != 0) && (iVar6 = FUN_1402c10d0(lVar4,pcVar3), iVar6 == 0)) {
              uVar5 = 1 << ((byte)uVar7 & 0x1f);
              *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x3a0) + uVar7 * 4) = fVar1;
              uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x4b8) + 0x398);
              if (DAT_1404925e0 <= (float)((uint)(fVar1 - 0.0) & _DAT_140492fc0)) {
                uVar7 = uVar7 | (longlong)(int)uVar5;
              }
              else {
                uVar7 = uVar7 & (longlong)(int)~uVar5;
              }
              *(ulonglong *)(*(longlong *)(param_1 + 0x4b8) + 0x398) = uVar7;
              return;
            }
            uVar5 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar5;
          } while ((int)uVar5 < iVar8);
        }
      }
    }
    else {
      iVar8 = *(int *)*param_4;
      if ((-1 < iVar8) &&
         ((ulonglong)(longlong)iVar8 <
          (ulonglong)(*(longlong *)(lVar2 + 0x3a8) - *(longlong *)(lVar2 + 0x3a0) >> 2))) {
        *(float *)(*(longlong *)(lVar2 + 0x3a0) + (longlong)iVar8 * 4) = fVar1;
        lVar2 = *(longlong *)(param_1 + 0x4b8);
        uVar5 = 1 << ((byte)iVar8 & 0x1f);
        if ((float)((uint)(fVar1 - 0.0) & _DAT_140492fc0) < DAT_1404925e0) {
          *(ulonglong *)(lVar2 + 0x398) = *(ulonglong *)(lVar2 + 0x398) & (longlong)(int)~uVar5;
          return;
        }
        *(ulonglong *)(lVar2 + 0x398) = *(ulonglong *)(lVar2 + 0x398) | (longlong)(int)uVar5;
        return;
      }
    }
  }
  return;
}

