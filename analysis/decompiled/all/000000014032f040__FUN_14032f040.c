// Function: FUN_14032f040
// Addr: 14032f040
// Size: 494 bytes


int FUN_14032f040(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int local_res20 [2];
  code *local_48 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_48[0] = FUN_14032ea50;
  local_res20[0] = 0;
  lVar4 = FUN_1402f7fa0(uVar1,0x400,local_res20);
  if (local_res20[0] == 0) {
    uVar8 = 0;
    uVar10 = 0;
    iVar12 = 1;
    uVar11 = 0x400;
LAB_14032f0c0:
    iVar3 = FUN_1402f5cf0(param_1,uVar10 + lVar4,uVar11 - (int)uVar10);
    uVar9 = (int)uVar10 + iVar3;
    uVar10 = (ulonglong)uVar9;
    if (iVar3 != 0) {
      do {
        uVar7 = (uint)uVar8;
        while ((uVar6 = (uint)uVar8, uVar2 = uVar6, uVar7 < uVar9 &&
               (*(char *)(uVar8 + lVar4) < ' '))) {
          uVar7 = uVar6 + 1;
          uVar8 = (ulonglong)uVar7;
        }
        do {
          uVar7 = uVar2;
          uVar2 = uVar7 + 1;
          if (uVar9 <= uVar2) {
            if (uVar6 != 0) {
              uVar10 = (ulonglong)(uVar9 - uVar6);
              FUN_1404210f0(lVar4,uVar8 + lVar4,uVar9 - uVar6);
              uVar8 = 0;
              goto LAB_14032f0c0;
            }
            if (uVar11 < 0x10000) {
              lVar4 = FUN_1402f7ff0(uVar1,1,uVar11,uVar11 * 4,lVar4,local_res20);
              uVar11 = uVar11 * 4;
              if (local_res20[0] == 0) goto LAB_14032f0c0;
            }
            else {
              local_res20[0] = 3;
            }
            goto LAB_14032f20f;
          }
        } while ('\x1f' < *(char *)((ulonglong)uVar2 + lVar4));
        pcVar5 = (char *)(uVar8 + lVar4);
        *(undefined1 *)((ulonglong)uVar2 + lVar4) = 0;
        if (*pcVar5 != '#') {
          if (local_48[0] == FUN_14032ea50) {
            local_res20[0] = FUN_14032ea50(pcVar5,uVar2 - uVar6,iVar12,param_2,local_48);
          }
          else {
            local_res20[0] = (*local_48[0])(pcVar5,uVar2 - uVar6,iVar12,param_2,local_48);
          }
          if (local_res20[0] != 0) break;
        }
        iVar12 = iVar12 + 1;
        uVar8 = (ulonglong)(uVar7 + 2);
      } while( true );
    }
    *param_3 = iVar12;
  }
LAB_14032f20f:
  FUN_1402f7f90(uVar1,lVar4);
  return local_res20[0];
}

