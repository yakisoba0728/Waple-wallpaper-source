// Function: FUN_1400ce760
// Addr: 1400ce760
// Size: 1036 bytes


void FUN_1400ce760(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  DWORD local_res8 [2];
  byte *local_res10;
  undefined1 local_118 [224];
  
  lVar6 = FUN_1400ce370(local_118,param_1 + 0x10);
  if (*(char *)(lVar6 + 0x60) == '\0') {
    if (*(int *)(lVar6 + 0x5c) == -1) {
      *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(lVar6 + 8);
      *(undefined4 *)(lVar6 + 0xd0) = *(undefined4 *)(lVar6 + 0x10);
    }
    else {
      *(undefined4 *)(lVar6 + 0x48) = 0x40000000;
      *(int *)(lVar6 + 0xd0) =
           *(int *)(lVar6 + 0x54) * *(int *)(lVar6 + 0x50) * *(int *)(lVar6 + 0x4c) * 4;
      uVar7 = FUN_1400c9740();
      *(undefined8 *)(lVar6 + 200) = uVar7;
      cVar4 = (**(code **)**(undefined8 **)(param_1 + 8))
                        (*(undefined8 **)(param_1 + 8),*(undefined4 *)(lVar6 + 0x5c),
                         *(undefined4 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 8),
                         *(undefined4 *)(lVar6 + 0x4c),
                         *(int *)(lVar6 + 0x54) * *(int *)(lVar6 + 0x50),uVar7);
      if (cVar4 == '\0') {
        *(undefined4 *)(lVar6 + 0x48) = 0;
        *(undefined1 *)(lVar6 + 0xc4) = 1;
        FUN_140098760("Native image error.\n");
      }
      lVar9 = *(longlong *)(param_1 + 8);
      iVar5 = FUN_140290d80(lVar9 + 0x138);
      if (iVar5 != 0) {
LAB_1400ceb64:
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (*(int *)(lVar9 + 0x184) == 0x7fffffff) {
LAB_1400ceb4f:
        *(undefined4 *)(lVar9 + 0x184) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      lVar8 = *(longlong *)(param_1 + 8);
      local_res8[0] = GetCurrentThreadId();
      FUN_1400ca780(lVar8 + 0x188,local_res8);
      FUN_140290ea0(lVar9 + 0x138);
    }
  }
  else {
    uVar7 = FUN_1400c9740();
    *(undefined8 *)(lVar6 + 200) = uVar7;
    *(undefined4 *)(lVar6 + 0x48) = 0x40000000;
    iVar5 = FUN_14014c160(*(undefined8 *)(lVar6 + 8),uVar7,*(undefined4 *)(lVar6 + 0x10),
                          *(undefined4 *)(lVar6 + 0xd0));
    if (iVar5 < 0) {
      *(undefined4 *)(lVar6 + 0x48) = 0;
      *(undefined1 *)(lVar6 + 0xc4) = 1;
      FUN_140098760("LZ4 error.\n");
    }
  }
  if ((*(longlong *)(lVar6 + 0x68) != *(longlong *)(lVar6 + 0x70)) &&
     (lVar9 = *(longlong *)(lVar6 + 200), lVar9 != 0)) {
    if ((*(uint *)(lVar6 + 0x48) & 0x40000000) == 0) {
      uVar7 = FUN_1400c9740();
      *(undefined8 *)(lVar6 + 200) = uVar7;
      FUN_1404210f0(uVar7,lVar9,*(undefined4 *)(lVar6 + 0xd0));
      *(uint *)(lVar6 + 0x48) = *(uint *)(lVar6 + 0x48) | 0x40000000;
    }
    pbVar12 = *(byte **)(lVar6 + 0x70);
    pbVar11 = *(byte **)(lVar6 + 0x68);
    local_res10 = pbVar12;
    if (pbVar11 != pbVar12) {
      do {
        if ((*pbVar11 & 2) != 0) {
          *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(pbVar11 + 8);
          *(undefined4 *)(lVar6 + 0xd0) = *(undefined4 *)(pbVar11 + 0x10);
          break;
        }
        iVar5 = *(int *)(pbVar11 + 0x1c);
        if ((((iVar5 != 0) && (iVar1 = *(int *)(pbVar11 + 0x20), iVar1 != 0)) &&
            ((uint)(*(int *)(pbVar11 + 0x14) + iVar5) <= *(uint *)(lVar6 + 0x4c))) &&
           (((uVar10 = *(int *)(pbVar11 + 0x18) + iVar1, uVar10 <= *(uint *)(lVar6 + 0x50) &&
             (lVar8 = *(longlong *)(pbVar11 + 8), lVar8 != 0)) && (*(int *)(pbVar11 + 0x10) != 0))))
        {
          iVar5 = iVar5 * iVar1 * 4;
          if (*(char *)(lVar6 + 0x60) == '\0') {
            if (*(int *)(lVar6 + 0x5c) != -1) {
              lVar9 = FUN_1400c9740(uVar10,iVar5);
              cVar4 = (**(code **)**(undefined8 **)(param_1 + 8))
                                (*(undefined8 **)(param_1 + 8),*(undefined4 *)(pbVar11 + 4),
                                 *(undefined4 *)(pbVar11 + 0x10),*(undefined8 *)(pbVar11 + 8),
                                 *(undefined4 *)(pbVar11 + 0x1c),*(undefined4 *)(pbVar11 + 0x20),
                                 lVar9);
              bVar13 = cVar4 != '\0';
              lVar8 = 0;
              if (cVar4 != '\0') {
                lVar8 = lVar9;
              }
              lVar9 = *(longlong *)(param_1 + 8);
              iVar5 = FUN_140290d80(lVar9 + 0x138);
              if (iVar5 == 0) {
                if (*(int *)(lVar9 + 0x184) != 0x7fffffff) {
                  lVar2 = *(longlong *)(param_1 + 8);
                  local_res8[0] = GetCurrentThreadId();
                  FUN_1400ca780(lVar2 + 0x188,local_res8);
                  FUN_140290ea0(lVar9 + 0x138);
                  pbVar12 = local_res10;
                  goto LAB_1400cea80;
                }
                goto LAB_1400ceb4f;
              }
              goto LAB_1400ceb64;
            }
            bVar13 = false;
LAB_1400cea8a:
            FUN_14015c480(*(undefined4 *)(lVar6 + 0x58),pbVar11,lVar8,*(undefined8 *)(lVar6 + 200),
                          *(undefined4 *)(lVar6 + 0x4c));
          }
          else {
            bVar13 = true;
            lVar8 = FUN_1400c9740(uVar10,iVar5);
            iVar5 = FUN_14014c160(*(undefined8 *)(pbVar11 + 8),lVar8,*(undefined4 *)(pbVar11 + 0x10)
                                  ,iVar5);
            if (iVar5 < 0) goto LAB_1400ceab6;
LAB_1400cea80:
            if (lVar8 != 0) goto LAB_1400cea8a;
          }
          if (bVar13) {
            FUN_1400ca1c0();
          }
        }
LAB_1400ceab6:
        pbVar11 = pbVar11 + 0x28;
      } while (pbVar11 != pbVar12);
    }
  }
  plVar3 = *(longlong **)(lVar6 + 0xb8);
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2c0();
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,lVar6);
  plVar3 = *(longlong **)(lVar6 + 0xb8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != (longlong *)(lVar6 + 0x80));
    *(undefined8 *)(lVar6 + 0xb8) = 0;
  }
  FUN_1400caf90(lVar6 + 0x68);
  FUN_140017240(lVar6 + 0x18);
  return;
}

