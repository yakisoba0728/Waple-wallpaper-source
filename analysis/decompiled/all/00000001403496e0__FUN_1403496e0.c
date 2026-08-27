// Function: FUN_1403496e0
// Addr: 1403496e0
// Size: 459 bytes


ulonglong FUN_1403496e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  char *pcVar10;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  iVar7 = *(int *)(param_1 + 0x270);
  local_res8[0] = 0;
  uVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x706f7374,lVar2,local_res10);
  local_res8[0] = (uint)uVar5;
  if ((local_res8[0] == 0) && (0x21 < local_res10[0])) {
    uVar5 = FUN_1402f5c90(lVar2,0x20);
    local_res8[0] = (uint)uVar5;
    if (local_res8[0] == 0) {
      uVar4 = FUN_1402f5ac0(lVar2,local_res8);
      uVar5 = (ulonglong)local_res8[0];
      if (((local_res8[0] == 0) && (uVar4 <= *(ushort *)(param_1 + 0x174))) && (uVar4 != 0)) {
        if (iVar7 == 0x20000) {
          uVar5 = FUN_1403494d0(param_1 + 0x358,lVar2,uVar4,local_res10[0] - 0x22);
        }
        else if (iVar7 == 0x25000) {
          uVar8 = (uint)uVar4;
          if ((local_res10[0] - 0x22 < uVar8) || (0x182 < uVar4)) {
            uVar5 = 3;
          }
          else {
            uVar3 = *(undefined8 *)(lVar2 + 0x30);
            lVar6 = FUN_1402f7ff0(uVar3,2,0,uVar8,0,local_res18);
            if ((local_res18[0] == 0) &&
               (local_res18[0] = FUN_1402f4fe0(lVar2,uVar8), local_res18[0] == 0)) {
              pcVar10 = *(char **)(lVar2 + 0x38);
              uVar5 = 0;
              if (uVar4 != 0) {
                do {
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                  iVar7 = (int)cVar1 + (int)uVar5;
                  if ((iVar7 < 0) || (0x101 < iVar7)) {
                    iVar7 = 0;
                  }
                  uVar9 = (short)uVar5 + 1;
                  *(short *)(lVar6 + uVar5 * 2) = (short)iVar7;
                  uVar5 = (ulonglong)uVar9;
                } while (uVar9 < uVar4);
              }
              FUN_1402f5100(lVar2);
              uVar5 = 0;
              *(ushort *)(param_1 + 0x35a) = uVar4;
              *(longlong *)(param_1 + 0x360) = lVar6;
            }
            else {
              FUN_1402f7f90(uVar3,lVar6);
              uVar5 = (ulonglong)local_res18[0];
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x358) = 1;
  return uVar5;
}

